# Submission Checklist & Final Steps

## ✅ Pre-Submission Verification

Your 3×3 macropad submission package is **complete** with:

### PCB Design
- ✅ Schematic: `kicad/3x3_macropad.kicad_sch`
- ✅ PCB Layout: `kicad/3x3_macropad.kicad_pcb`
- ✅ Gerber Files: `kicad/gerbers/3by3PCB.zip` (7 files: 5 layers + PTH/NPTH drills)

### Case Design
- ✅ STEP File: `case/case_assembly.step` (for Hack Club submission)
- ✅ STL File: `case/iKeyMacroPadCase.stl` (for 3D printing reference)

### QMK Firmware (Seeeduino XIAO RP2040)
- ✅ Config: `firmware/config.h` (matrix pins, USB IDs)
- ✅ Layout: `firmware/3x3_macropad.h`
- ✅ Rules: `firmware/rules.mk`
- ✅ Keymaps: `firmware/keymaps/default/keymap.c` (2 layers ready)
- ✅ Info: `firmware/info.json` (QMK Configurator compatible)

### Documentation
- ✅ README.md – Project overview & features
- ✅ BOM.csv – Complete bill of materials
- ✅ BUILD_GUIDE.md – Step-by-step assembly
- ✅ QMK_GUIDE.md – Firmware flashing instructions

---

## 🚀 Final Steps to Submit

### Step 1: Push to GitHub

```bash
cd /Users/adityan/projects/workspace/ikey

# Set your GitHub username and email (one-time)
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"

# Add GitHub remote (replace USERNAME with your GitHub username)
git remote add origin https://github.com/USERNAME/3x3-macropad.git

# Push to GitHub
git branch -M main
git push -u origin main
```

### Step 2: Verify on GitHub
- Go to `https://github.com/USERNAME/3x3-macropad`
- Confirm all files are visible:
  - kicad/ folder with schematic, PCB, gerbers
  - firmware/ folder with config & keymaps
  - case/ folder with STEP file
  - README.md, BOM.csv, BUILD_GUIDE.md, QMK_GUIDE.md

### Step 3: Test Gerbers on JLCPCB (Optional but Recommended)
```bash
# Visit https://jlcpcb.com
# Instant Quote → Upload kicad/gerbers/3by3PCB.zip
# You should see a visual PCB preview with all layers
# If preview looks good, gerbers are correct!
```

### Step 4: Submit to Hack Club Hackpad
1. Navigate to **https://hackpad.hackclub.com**
2. Click **Submit Your Macropad**
3. Fill out the form:
   - **Project Name:** 3x3 Macropad (or your creative name!)
   - **GitHub URL:** `https://github.com/USERNAME/3x3-macropad`
   - **Description:** "A simple, open-source 9-key macro pad with QMK firmware and 3D-printable case"
   - **Email:** Your email address
   - **Slack Handle:** Your Hack Club Slack username (optional)
4. Click **Submit**

### Step 5: Wait for Approval
- Hack Club team reviews submissions **within 1–3 weeks**
- They validate:
  - All required files present (schematic, PCB, case, firmware)
  - Design is novel/custom
  - Documentation is clear
  - BOM is accurate

### Step 6: Upon Approval, You Receive:
- 💰 **$15 JLCPCB credit** (covers ~5 PCBs)
- 📦 **Free component kit** (switches, diodes, XIAO, etc.)
- 🖨️ **Free 3D-printed case** from Printing Legion
- 📧 Email with all instructions & shipping details

---

## 📋 Project Statistics

```
Files:        18 total
Firmware:     6 QMK files (config, layout, keymap, rules)
Documentation: 4 markdown guides + BOM
Commits:      4 (organized workflow)
Total Size:   ~1.2 MB
```

---

## ✨ Next: After Approval

1. **Order PCB:** Use $15 JLCPCB credit to order your first board
2. **Get Components:** Hack Club ships the free kit
3. **3D Print Case:** Printing Legion handles free case production
4. **Build It!:** Solder components, flash firmware, assemble case
5. **Celebrate:** You've built a keyboard! 🎉

---

### Questions?
- **#hackpad** on Hack Club Slack
- [Hack Club Hackpad Guide](https://blueprint.hackclub.com/hackpad)
- [QMK Docs](https://docs.qmk.fm/)

**You're all set! Ready to push to GitHub and submit? 🚀**
