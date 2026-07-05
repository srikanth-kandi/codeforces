# Codeforces Solutions

This repository stores my Codeforces problem solutions in a per-problem folder structure.

## Repository Structure

- problems/
  - 2126 - A. Only One Digit/
    - solution.cpp

## Prerequisites

- VS Code
- C++ compiler (g++/clang++)
- Optional but recommended: CPH extension for local testcase running

## VS Code Extension Setup (CPH)

### 1) Install CPH (Competitive Programming Helper)

Install from Marketplace:
https://marketplace.visualstudio.com/items?itemName=DivyanshuAgrawal.competitive-programming-helper

Official project:
https://github.com/agrawal-d/cph

User guide:
https://github.com/agrawal-d/cph/blob/main/docs/user-guide.md

### 2) Install Competitive Companion (Browser Extension)

Install using:
https://github.com/jmerle/competitive-companion#readme

### 3) Typical workflow

1. Open this repository folder in VS Code.
2. Open a problem page (Codeforces, etc.) in your browser.
3. Click the green plus icon from Competitive Companion.
4. CPH imports problem metadata/tests into VS Code.
5. Run tests using CPH command or shortcut Ctrl+Alt+B.

## Build and Run (Manual)

From a problem folder:

- Compile: g++ solution.cpp -o solution.exe
- Run: solution.exe

## Notes

- Build artifacts like .exe are ignored via .gitignore.
- Keep only source and useful problem files under version control.
