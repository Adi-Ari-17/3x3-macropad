# Next Steps – 3×3 Macropad Implementation

## 1. Copy Your KiCad Files
Move your existing KiCad files into the `kicad/` folder:

```bash
cp /path/to/your/3x3_macropad.kicad_sch kicad/
cp /path/to/your/3x3_macropad.kicad_pcb kicad/
cp /path/to/your/3x3_macropad.kicad_pro kicad/
```

## 2. Export Gerber Files for JLCPCB
1. Open `kicad/3x3_macropad.kicad_pcb` in KiCad PCB Editor
2. Go to **File → Plot** (Ctrl+Shift+P)
3. **Plot Options:**
   - Layers: F.Cu, B.Cu, F.SilkS, B.SilkS, Edge.Cuts
   - Output directory: `kicad/gerbers/`
   - Format: Gerber (RS-274X)
4. Click **Plot**
5. Click **Generate Drill File** (Excellon format)
6. Zip all files:
   ```bash
   cd kicad/gerbers
   zip 3x3_macropad.zip *.gbr *.txt
   ```
7. Test preview: Upload to [jlcpcb.com](https://jlcpcb.com) to verify layers

## 3. Export Case STEP File
1. Open Fusion360 design file
2. Right-click model → **Save as**
3. Select **STEP (.step)** format
4. Save to: `case/case_assembly.step`
5. Verify dimensions in mm

## 4. Customize Firmware (Optional)
Edit `firmware/keymaps/default/keymap.c` to customize keys:
- Layer 0: Numbers (default)
- Layer 1: Function keys
- Add more layers as needed

Update `firmware/config.h` if your pin configuration differs from:
- Row pins: GP27, GP26, GP25
- Col pins: GP6, GP7, GP8

## 5. Test Compile Firmware
```bash
cd ~/qmk_firmware
qmk compile -kb yourname/3x3_macropad -km default
```
Should output a `.uf2` file without errors.

## 6. Prepare GitHub
```bash
cd /Users/adityan/projects/workspace/ikey

# Stage all files
git add .

# Commit
git commit -m "Initial 3x3 macropad design, case, and firmware"

# Add remote (replace with your GitHub repo)
git remote add origin https://github.com/yourusername/3x3-macropad.git
git branch -M main
git push -u origin main
```

## 7. Verify Submission Package
Run this checklist:
- [ ] `kicad/3x3_macropad.kicad_sch` exists
- [ ] `kicad/3x3_macropad.kicad_pcb` exists
- [ ] `kicad/gerbers/3x3_macropad.zip` is ready for JLCPCB
- [ ] `case/case_assembly.step` exported from Fusion360
- [ ] `firmware/` has config.h, 3x3_macropad.h, rules.mk, keymaps/default/keymap.c
- [ ] `firmware/` compiles with QMK without errors
- [ ] README.md, BOM.csv, BUILD_GUIDE.md, QMK_GUIDE.md all present
- [ ] GitHub repo is public and linked correctly
- [ ] All files follow MIT License

## 8. Submit to Hack Club
1. Navigate to **[hackpad.hackclub.com](https://hackpad.hackclub.com/)**
2. Fill out submission form:
   - GitHub repo link
   - Macropad name: "3x3 Macropad"
   - Brief description (1–2 sentences)
   - Your email & Slack username
3. Submit!

## 9. After Approval
Hack Club will email you within 1–3 weeks with:
- $15 JLCPCB credit
- Free component kit
- Printing Legion 3D case credit
- Build instructions

## Need Help?
- Ask in **#hackpad** on [Hack Club Slack](https://hackclub.slack.com)
- Check [QMK Docs](https://docs.qmk.fm/)
- See [Hack Club Hackpad Guide](https://blueprint.hackclub.com/hackpad)
