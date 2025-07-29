# Final-Project-VCV-Rack-Plugin-Learning-Project-
A learning-focused VCV Rack plugin exploring DSP, project folder structure (src, res, headers), and development workflow with C++ and Visual Studio Code.


This project is a **VCV Rack plugin** I built to deepen my understanding of:

- How **VCV Rack plugins are structured** (folders, `src/`, `res/`, and `plugin.json`).
- The interaction between **C++ source files (`.cpp`) and headers (`.hpp`)**.
- Building and **modifying a plugin from an IDE (Visual Studio Code)**.
- The **plugin compilation and installation process** with the Rack SDK.

---

## What This Project Does

- Implements a **minimal sine wave oscillator** with:
  - **Pitch knob and CV input** (1V/oct).
  - **Sine wave output jack**.
  - **Blinking LED** as a visual heartbeat.

- **SVG Front Panel** (`res/MyModule.svg`) for the UI, which I integrated and tested.

---

## What I Learned

1. How the **Rack SDK build system** (`Makefile`, `make install`) works.
2. How **plugins are packaged** into `.vcvplugin` files and installed.
3. How to work efficiently in **VS Code**:
   - Navigating the project structure.
   - Editing DSP code (`src/MyModule.cpp`) and UI logic.
4. How to **troubleshoot build errors** (linking, missing assets, and symbol errors).
5. The role of `plugin.json` and **registering modules** with Rack.

---

## Building

To build and test:
```bash
cd ~/Library/Application\ Support/Rack2/plugins-mac-arm64
git clone https://github.com/YOUR_USERNAME/VCV-Rack-Final-Project.git
cd VCV-Rack-Final-Project

make clean && make && make install
