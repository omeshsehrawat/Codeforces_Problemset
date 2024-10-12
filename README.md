# Sublime Text Setup for Competitive Programming in C++

This guide helps you set up your development environment for competitive programming in C++ using Sublime Text and the MinGW compiler.

## Prerequisites

- **MinGW** (Minimalist GNU for Windows)
- **Sublime Text**

## Steps to Set Up the Environment

### 1. Install MinGW Compiler

MinGW is a Windows port of the GNU Compiler Collection (GCC) that allows you to compile C++ programs.

- Download and install MinGW from [here](https://sourceforge.net/projects/mingw/).
- When installing, make sure to select the C++ compiler option.
- Your installation path should preferably be:  
  `C:\MinGW`.
  
- Add the `bin` directory (`C:\MinGW\bin`) to your **System PATH**:
  1. Right-click on `This PC` or `My Computer` and select `Properties`.
  2. Click on `Advanced system settings` and then click on the `Environment Variables` button.
  3. In the `System variables` section, find the `Path` variable, select it, and click `Edit`.
  4. Add the path to `C:\MinGW\bin` to the list of directories and click `OK`.

You can verify that MinGW is set up correctly by running this command in your terminal:
```bash
g++ --version
```
### 2. Install Sublime Text
Sublime Text is a fast and lightweight editor popular for competitive programming.

- Download and install Sublime Text 3 from here.
### 3. Create a Build System for C++ Compilation
Sublime Text provides build systems to run external programs. We'll create a new build system to compile and run C++ code using the MinGW compiler.

1. Open Sublime Text.

2. Go to Tools > Build System > New Build System.

3. Replace the contents of the file with the following code:
![image](https://github.com/user-attachments/assets/8ca5abfa-f00d-4eb0-8db7-e2d6afe2f111)

- This build system uses the C++17 standard (-std=c++17). If you prefer C++14, replace the flag with -std=c++14.
  
- The build system also sets up input redirection from input.in and output redirection to output.in.
  
4. Save the file as cp.sublime-build.

### 4. Set Up the Window Layout
To make competitive programming more efficient, you can create a multi-column layout in Sublime Text.

1. Create three new files:

      - file.cpp (your C++ source code).
      - inputf.in (input file for redirection).
      - outputf.in (output file for redirection).

2. Go to View > Layout > Columns: 3. This will create three columns in the workspace.

3. Drag and drop each of the files (file.cpp, inputf.in, outputf.in) into separate columns.

4. Adjust the layout by selecting View > Groups > Max Columns: 2 to maximize the workspace.

At this point, your Sublime Text window should have three columns: one for your C++ code, one for input, and one for output.

### 5. Input-Output Redirection
When running a competitive programming problem, you can:

- Write your test cases in input.in.
  
- Run the program by pressing Ctrl + B.
  
- The results will appear in output.in.

This allows you to test your solutions with different inputs and see the results side by side.

## Summary
- MinGW is used as the C++ compiler.
- Sublime Text is configured for fast coding with build systems.
- Input-output redirection is set up to handle competitive programming requirements.
