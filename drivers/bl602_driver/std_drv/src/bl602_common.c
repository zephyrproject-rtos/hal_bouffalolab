#include "l1c_reg.h"
#include "bl602_common.h"

/** @addtogroup  BL602_Periph_Driver
 *  @{
 */

/****************************************************************************/ /**
 * @brief      delay us
 *
 * @param[in]  core:  systemcoreclock
 *
 * @param[in]  cnt:  delay cnt us
 *
 * @return none
 *
 *******************************************************************************/
#ifndef BFLB_USE_ROM_DRIVER
__WEAK
void ATTR_TCM_SECTION ASM_Delay_Us(uint32_t core, uint32_t cnt)
{
    uint32_t codeAddress = 0;
    uint32_t divVal = 40;

    codeAddress = (uint32_t)&ASM_Delay_Us;

    /* 1M=100K*10, so multiple is 10 */
    /* loop function take 4 instructions, so instructionNum is 4 */
    /* if codeAddress locate at IROM space and irom_2t_access is 1, then irom2TAccess=2, else irom2TAccess=1 */
    /* divVal = multiple*instructionNum*irom2TAccess */
    if (((codeAddress & (0xF << 24)) >> 24) == 0x01) {
        /* IROM space */
        if (BL_GET_REG_BITS_VAL(BL_RD_REG(L1C_BASE, L1C_CONFIG), L1C_IROM_2T_ACCESS)) {
            /* instruction 2T */
            divVal = 80;
        }
    }

    __asm__ __volatile__(
        ".align 4\n\t"
        "lw       a4,%1\n\t"
        "lui   a5,0x18\n\t"
        "addi  a5,a5,1696\n\t"
        "divu  a5,a4,a5\n\t"
        "sw       a5,%1\n\t"
        "lw       a4,%1\n\t"
        "lw       a5,%0\n\t"
        "mul   a5,a4,a5\n\t"
        "sw       a5,%1\n\t"
        "lw       a4,%1\n\t"
        "lw       a5,%2\n\t"
        "divu  a5,a4,a5\n\t"
        "sw    a5,%1\n\t"
        "lw    a5,%1\n\t"
        "li    a4,0x1\n\t"
        "beq   a5,zero,end\n\t"
        "beq   a5,a4,end\n\t"
        "nop\n\t"
        "nop\n\t"
        ".align 4\n\t"
        "loop  :\n"
        "addi  a4,a5,-1\n\t"
        "mv    a5,a4\n\t"
        "bnez  a5,loop\n\t"
        "nop\n\t"
        "end   :\n\t"
        "nop\n"
        :                                  /* output */
        : "m"(cnt), "m"(core), "m"(divVal) /* input */
        : "t1", "a4", "a5"                 /* destruct description */
    );
}

/****************************************************************************/ /**
 * @brief      delay us
 *
 * @param[in]  cnt:  delay cnt us
 *
 * @return none
 *
 *******************************************************************************/
__WEAK
void ATTR_TCM_SECTION BL602_Delay_US(uint32_t cnt)
{
    ASM_Delay_Us(SystemCoreClockGet(), cnt);
}

/****************************************************************************/ /**
 * @brief      delay ms
 *
 * @param[in]  cnt:  delay cnt ms
 *
 * @return none
 *
 *******************************************************************************/
__WEAK
void ATTR_TCM_SECTION BL602_Delay_MS(uint32_t cnt)
{
    uint32_t i = 0;
    uint32_t count = 0;

    if (cnt >= 1024) {
        /* delay (n*1024) ms */
        count = 1024;

        for (i = 0; i < (cnt / 1024); i++) {
            BL602_Delay_US(1024 * 1000);
        }
    }

    if (cnt & 0x3FF) {
        /* delay (1-1023)ms */
        count = cnt & 0x3FF;
        BL602_Delay_US(count * 1000);
    }

    //BL602_Delay_US((count<<10)-(count<<4)-(count<<3));
}
#endif

/*@} end of group DRIVER_Public_Functions */

/*@} end of group DRIVER_COMMON */

/*@} end of group BL602_Periph_Driver */
