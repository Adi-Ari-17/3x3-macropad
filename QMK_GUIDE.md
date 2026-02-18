# QMK Firmware Guide

## Setup
1. Clone QMK: `git clone https://github.com/qmk/qmk_firmware.git`
2. Install QMK CLI: `brew install qmk/qmk/qmk` (macOS)
3. Clone this repo into QMK keyboards: 
   ```bash
   git clone <this-repo> ~/qmk_firmware/keyboards/yourname/3x3_macropad
   ```

## Compile
```bash
qmk compile -kb yourname/3x3_macropad -km default
```

## Flash
### Using QMK Toolbox (GUI)
1. Download [QMK Toolbox](https://github.com/qmk/qmk_toolbox)
2. Select the `.uf2` file from compilation
3. Put XIAO into bootloader (double-tap reset button)
4. Click Flash

### Using Terminal
```bash
qmk flash -kb yourname/3x3_macropad -km default
```
Then double-tap the XIAO reset button when prompted.

## Customize Keymap
Edit `firmware/keymaps/default/keymap.c`:
- Change keycodes in the layout
- Recompile and flash

Example layer 2 (media controls):
```c
[2] = LAYOUT_ortho_3x3(
    KC_MPRV, KC_MPLY, KC_MNXT,
    KC_VOLD, KC_MUTE, KC_VOLU,
    KC_BRID, KC_BRIU, KC_PAUS
)
```

## Reference
- [QMK Docs](https://docs.qmk.fm/)
- [Keycodes](https://docs.qmk.fm/keycodes)
