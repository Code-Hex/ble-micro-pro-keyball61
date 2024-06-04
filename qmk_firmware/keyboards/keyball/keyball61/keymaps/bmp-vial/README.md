
# Keymap for v1.x firmware

This keymap is intended for use with BLE Micro Pro v1.x. All the following steps will utilize the BLE Micro Pro v1.x toolchain.

Please also read the documentation displayed by switching the **Version** option to `v1.x` on the https://sekigon-gonnoc.github.io/BLE-Micro-Pro/

## How to build firmware

1. Check out this repository.

```console
$ git clone https://github.com/Code-Hex/ble-micro-pro-keyball61.git keyball
```

2. Check out [sekigon-gonnoc/vial-qmk](https://github.com/sekigon-gonnoc/vial-qmk) repository in another place.

```console
$ git clone --depth 1 -b bmp-vial-1.2.0 https://github.com/sekigon-gonnoc/vial-qmk.git qmk_firmware_bmp_vial
```

Currently BLE Micro Pro Keyball firmwares are verified to compile with [794d0a2](https://github.com/sekigon-gonnoc/vial-qmk/commit/794d0a21184f4cde46709483950aa35aad5b075f) and [BLE Micro Pro Web Configurator](https://sekigon-gonnoc.github.io/BLE-Micro-Pro-WebConfigurator/).

3. Create a symbolic link to this `keyball/` directory from [sekigon-gonnoc/vial-qmk](https://github.com/sekigon-gonnoc/vial-qmk)'s `keyboards/` directory.

```console
$ ls
keyball/ qmk_firmware_bmp_vial/

$ cd qmk_firmware_bmp_vial/keyboards
$ ln -s ../../keyball/qmk_firmware/keyboards/keyball keyball
$ ls keyball/
drivers/  keyball61/  lib/  readme.md
$ cd ..
```

4. `make` your Keyball firmwares.

```console
$ make -j8 SKIP_GIT=yes keyball/keyball61:bmp-vial
```

If you want to make the artifact as uf2 format, please follow the command below:

```console
$ make -j8 SKIP_GIT=yes keyball/keyball61:bmp-vial:uf2
```

Unlike the v0.x version, when deployed, the system does not automatically restart to reflect this. 

If you want to deploy firmware with the command and have it reflect correctly, you should use the following command:

```console
$ make -j8 SKIP_GIT=yes keyball/keyball61:bmp-vial:nrfutil
```

This command uses `nrfutil`, which must be installed in advance according to [the contents of BLE Micro Pro](https://sekigon-gonnoc.github.io/BLE-Micro-Pro/#/build_firmware).


```console
Detecting USB port, put your controller into dfu-mode now....
```

If the command is successfully executed, the following text is displayed `.` will increase. If you switch the keyboard to DFU mode **at this timing**, the firmware will be deployed automatically.

## How to create your keymap

Use [Remap](https://remap-keys.app/) or [Vial](https://vial.rocks/) to edit keymap.

## Config files

You can use config files in `layouts/vial` directory.

After editing config.json, please paste [info.json](https://github.com/Code-Hex/ble-micro-pro-keyball61/blob/main/qmk_firmware/keyboards/keyball/info.json) and [vial.json](https://github.com/Code-Hex/ble-micro-pro-keyball61/blob/main/qmk_firmware/keyboards/keyball/keyball61/keymaps/bmp-vial/vial.json) together into [bmp-vial-config-generator](https://sekigon-gonnoc.github.io/bmp-vial-config-generator/) and download the config.bin file. For more information, please read [this document](https://sekigon-gonnoc.github.io/BLE-Micro-Pro/#/about_config_files). 

## Special keycodes

Keycode    |Description
------------|------------------------------------------------------------------
`KBC_RST`  | Reset Keyball configuration[^1]
`KBC_SAVE` | Persist Keyball configuration[^1] to EEPROM
`CPI_I100` | Increase 100 CPI (max 12000)
`CPI_D100` | Decrease 100 CPI (min 100)
`CPI_I1K`  | Increase 1000 CPI (max 12000)
`CPI_D1K`  | Decrease 1000 CPI (min 100)
`SCRL_TO`  | Toggle scroll mode
`SCRL_MO`  | Enable scroll mode when pressing
`SCRL_DVI` | Increase scroll divider (max 7 = 1/128)
`SCRL_DVD` | Decrease scroll divider (min 0 = 1/1)
`AML_TO`   | Toggle automatic mouse layer
`AML_I50`  | Increase 50ms automatic mouse layer timeout(max 1000ms)
`AML_D50`  | Decrease 50ms automatic mouse layer timeout(min 100ms)
`SSNP_VRT` | Set scroll snap mode as vertical
`SSNP_HOR` | Set scroll snap mode as horizontal
`SSNP_FRE` | Set scroll snap mode as disable (free scroll)

[^1]: CPI, scroll divider, automatic mouse layer's enable/disable, and automatic mouse layer's timeout.


