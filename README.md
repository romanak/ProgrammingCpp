# Programming C++

Code for the textbook "Programming Principles and Practice Using C++" by Bjarne Stroustrup, 2009.

## Instructions for Windows 10/11

1. Download the latest version of GCC with Clang for Win64 at [Winlibs](https://winlibs.com/) website.
2. Extract the archive to C drive and add the directory `C:\mingw64\bin` to the system environment variables Path.
3. Install [Visual Studio Code](https://code.visualstudio.com/).
4. Install C/C++ extension for Visual Studio Code.
5. Select `Terminal` -> `Configure Tasks` -> `C/C++: g++.exe build active file`, then modify the following lines in `tasks.json`:

```json
"args": [
	"-fdiagnostics-color=always",
	"-g",
	"-std=c++20",
	"${file}",
	"-o",
	"${fileDirname}\\${fileBasenameNoExtension}.exe"
],
```

> Notes:
> 1. You can choose either g++ comiler (`C:\mingw64\bin\g++.exe`) or Clang compiler (`C:\mingw64\bin\clang++.exe`) to compile C++ code with MS Code Tasks.
> 2. To compile your code, select `Terminal` -> `Run Build Task...`.

## Instructions for Linux

1. Install the latest g++ and debugger by running `sudo apt install build-essential gdb`.
2. Install [Visual Studio Code](https://code.visualstudio.com/).
3. Install C/C++ extension for Visual Studio Code.
4. Select `Terminal` -> `Configure Tasks` -> `C/C++: g++ build active file`, then modify the following lines in `tasks.json`:

```json
"args": [
	"-fdiagnostics-color=always",
	"-g",
	"-std=c++20",
	"${file}",
	"-o",
	"${fileDirname}/${fileBasenameNoExtension}.out"
],
```
> Notes:
> 1. `build-essential` package consists of `g++`, `gcc`, `make`, `libc6-dev`, and `dpkg-dev` packages that are essential to compile software from the source code in Linux.
> 2. You can install Clang compiler (`sudo apt install clang`) and choose it (`/usr/bin/clang++`) insterad of g++ compiler (`/usr/bin/g++`) to compile C++ code with MS Code Tasks.
> 3. To compile your code, select `Terminal` -> `Run Build Task...`.
