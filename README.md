# Digital Design with Arduino
-----------------------------
Code and Documentation of final GATE Question Implementation for Digita Design with Arduino Workshop
- [Documentation](/ide/latex/docs/main.pdf)
- [Source Code](/ide/latex/codes/src/main.cpp)
---
## Dependencies
- PlatformIO
    - Core[CLI]
- LaTeX
    - karnaugh-map
    - enumitems
    - listings
    - amsmath
    - graphicx
    - titlesec
    - tabularx
    - mathtools
    - geometry
    - hyperref
---
## Build and Run
```bash
$ git clone https://github.com/gaurav5-5/ard-workshop.git
```

### Using [PlatformIO IDE](https://platformio.org/platformio-ide)
1. Download IDE from https://platformio.org/platformio-ide
2. Open the [ide/latex/codes](ide/latex/codes) folder
3. Connect Arduino
4. Build and Run

### Using Terminal with [PlatformIO Core](https://github.com/platformio/platformio-core)
1. Install PlatformIO Core CLI by following instructions from [here](https://platformio.org/install/cli)
2. Navigate to [/ide/latex/codes](ide/latex/codes)
3. Connect Arduino
4. Run:
```bash
$ pio run --target upload
```
