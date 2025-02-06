# Introduction

The **hal_bouffalolab** is a set of register definitions for Bouffalo Lab SoC's.
The HAL is organized following the directory structure detailed below.

## Directory Structure

The directory is composed by eight parts:
```
.
├── common
├── drivers
├── include
├── pinconfigs
├── scripts
├── zephyr
├── LICENSE
└── README.md
```

 - common
 - drivers
   - bl602_driver
   - bl702_driver
 - Includes specific for these platforms
   - devicetree bindings
 - [pin definitions](pinconfigs/README.md)
 - [scripts](scripts/README.md) used for code generation
 - ZephyrRTOS module directory (`zephyr`).
 - The LICENSE file.
 - This README file.

# How to submit code

Any contribution should follow the `How to submit code` using as premisses the
[Zephyr Contribution Guidelines](https://docs.zephyrproject.org/latest/contribute/index.html).
For more information about External Modules see
[Modules Section](https://docs.zephyrproject.org/latest/develop/modules.html) in special
[Submitting Changes to Modules](https://docs.zephyrproject.org/latest/develop/modules.html#submitting-changes-to-modules)


## Repository specific guidelines

 - This repository is managed mainly on Linux. This means that changes should
   be submitted using Linux LF format. Usually running a similar command to
   `find * type f -print0 | xargs -0 dos2unix -k` should be enough.
 - Make sure directory structure is respected.
 - Directory names should be converted to lowercase.
 - The recommendation is add **all fixups** in the `hal_bouffalolab` instead
   on the ZephyrRTOS project.

The above are general guidelines and exceptions could happen. In this case, the
exception should be addressed at review phase.

## The standard API

The BouffaloLab standard API define all information to access the SoC's
peripherals. This library does not have namespaces and prefixes which easily
results in name collision with ZephyrRTOS core and libraries. To avoid that
situation, macros, enum values and function names should follow two general
rules:

 - Public API functions must be prefixed with `bflb_`.
 - Public defines and enum values must be uppercase and prefixed with `BFLB_`.
