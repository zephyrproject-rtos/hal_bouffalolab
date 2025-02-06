# Bouffalo Lab bflb scripts

This folder contains `hal_bouffalolab` scripts.

## Dependencies

Scripts require Python 3.7+ and the Python dependencies listed in
`requirements.txt`. They can be installed by running:

```
pip install -r scripts/requirements.txt
```

## How to generate

Just execute on the root of hal_bouffalolab folder:

```
python3 scripts/bflbpinctrl.py
```

## Lint

Scripts should be formatted using `black` and linted using `flake8`.

Such development tools can be installed using:

```
pip install -r scripts/requirements-dev.txt
```

To run the lint:

```
flake8 --config scripts/.flake8 scripts
```

## Tests

Before running tests make sure to have testing dependencies installed. They
can be installed by running:

```
pip install -r scripts/requirements-test.txt
```

Tests can be executed by running:

```
pytest
```
