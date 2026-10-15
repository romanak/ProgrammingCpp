# C++ How to Program

Personal solutions and chapter exercises for the textbook *"C++ How to Program, 11th Edition (Global Edition)"* by Paul Deitel and Harvey Deitel.

---

## Instructions for Windows 10/11

### 1. Install MinGW-w64 GCC Compiler
1. Download the latest standalone build of **GCC with UCRT runtime** for Win64 from [winlibs.com](https://winlibs.com/).
2. Extract the archive (for example, to `C:\Libraries\mingw64` or `C:\mingw64`).
3. Add the `bin` directory (e.g., `C:\Libraries\mingw64\bin`) to your system environment variable `Path`.
4. Verify in PowerShell or Command Prompt:
   ```powershell
   g++ --version
   gcc --version
   ```

---

### 2. Configure Visual Studio Code

1. Install [Visual Studio Code](https://code.visualstudio.com/).
2. Install the **Code Runner** extension by Jun Han (`formulahendry.code-runner`) from the Extensions Marketplace (`Ctrl` + `Shift` + `X`).
3. Open your global user settings:
   - Press `Ctrl` + `Shift` + `P`.
   - Select **`Preferences: Open User Settings (JSON)`**.
4. Add the following Code Runner configuration to your settings:

```json
"code-runner.runInTerminal": true,
"code-runner.saveFileBeforeRun": true,
"code-runner.clearPreviousOutput": true,
"code-runner.preserveFocus": false,
"code-runner.executorMap": {
  "cpp": "cd $dir && g++ -std=c++20 \"$fileName\" -o \"$fileNameWithoutExt\" && .\\$fileNameWithoutExt",
  "c": "cd $dir && gcc -std=c17 \"$fileName\" -o \"$fileNameWithoutExt\" && .\\$fileNameWithoutExt"
}
```

---

### 3. Running Programs

Open any C++ (`.cpp`) or C (`.c`) file:

- **Click the Play button (▶)** in the upper-right corner of the editor.
- **Or press:** `Ctrl` + `Alt` + `N`.
- **Or right-click** inside the editor and choose **Run Code**.

To stop a running application:
- Press `Ctrl` + `Alt` + `M`, or click into the terminal and press `Ctrl` + `C`.

---

## Instructions for Linux

1. Install the latest GNU C++ compiler and tools:
   ```bash
   sudo apt update
   sudo apt install build-essential gdb
   ```
2. In VS Code User Settings, the Linux `executorMap` uses forward slashes to run the compiled binary:
   ```json
   "code-runner.executorMap": {
     "cpp": "cd $dir && g++ -std=c++20 \"$fileName\" -o \"$fileNameWithoutExt\" && ./\"$fileNameWithoutExt\"",
     "c": "cd $dir && gcc -std=c17 \"$fileName\" -o \"$fileNameWithoutExt\" && ./\"$fileNameWithoutExt\""
   }
   ```

---

## Notes

1. **Terminal Support for Interactive Input:**
   Setting `"code-runner.runInTerminal": true` ensures programs using `std::cin` run in the interactive terminal rather than the read-only Output tab.
2. **Modern C++20 Standard:**
   The `-std=c++20` flag enables modern C++ features covered in the textbook (such as concepts, ranges, modules, and `std::format`).
3. **PowerShell Execution Syntax:**
   On Windows PowerShell, using `.\\$fileNameWithoutExt` without surrounding quotes ensures PowerShell executes the compiled `.exe` immediately rather than evaluating it as a string literal.
4. **Zero-Configuration Repository:**
   Because Code Runner is configured in your global user settings, no local `.vscode` folder is required in your project directories, keeping your repository clean.
