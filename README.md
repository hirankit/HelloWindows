# HelloWindows

HelloWindows is a simple C project that demonstrates how develop Win32 App using Visual Studio with CMake (and vcpkg, if needed).

# Prerequisites
- **CMake** Version 3.19 or higher
- **vcpkg** (bootstrapped and integrated)
- **MSVC C Compiler**

# Working on the Project
## Using Visual Studio Code
1. Launch Visual Studio Code via `x64 Native Tools Command Prompt`.
2. Open the Command Palette (`Ctrl+Shift+P`) and Select `CMake: Configure`.
3. Open the Command Palette (`Ctrl+Shift+P`) and Select `CMake: Select Configure Preset` and choose `windows-debug-static`.

# Building the Project
1. Clone the repository
2. Launch: `x64 Native Tools Command Prompt`
3. Configure the project:
    ```
    cmake --preset windows-release-static
    ```
3. Configure the project:
    ```
    cmake --build --preset windows-release-static
    ```
5. Running the Executable
    ```
    .\build\windows-release-static\HelloWindows.exe
    ```

## Credits
The code in the `main.c` file is based on Charles Petzold's `HelloMsg.c` listed in the chapter one of his book "Programming Windows, Fifth Edition".