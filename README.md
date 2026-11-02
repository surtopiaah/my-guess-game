# Number Guessing Game
 
A small C program that picks a random number between 1 and 100 and lets you guess it. After each guess it says "Too low!" or "Too high!" until you find the number, then tells you how many attempts you needed.
 
I made this project to learn how to use C and Git (compiling, committing, branches and pull requests).
 
## How to run
 
```
clang -Wall -Wextra -o game game.c
./game
```
 
## What the compile command means
 
| Part | Meaning |
|---|---|
| `clang` | The compiler: it translates my C code into a program the computer can run. |
| `-Wall -Wextra` | Turn on warnings, so the compiler tells me about likely mistakes. |
| `-o game` | Name the finished program `game`. |
| `game.c` | The source file to translate. |
 
## Git commands I learned
 
| Command | Meaning |
|---|---|
| `git init -b main` | Turns the current folder into a git repository, with a first branch called `main`. |
| `git status` | Shows which branch I'm on and which files have changed. |
| `git add .` | Marks all changed files to be included in the next commit. |
| `git add file` | Marks just one file for the next commit. |
| `git commit -m "message"` | Saves a snapshot of the marked files on my computer, with a short description. |
| `git remote add origin URL` | Tells git where my repository lives on GitHub. |
| `git push` | Uploads my commits to GitHub. |
| `git push -u origin branch` | Uploads a new branch for the first time and links it to GitHub. |
| `git pull` | Downloads new changes from GitHub to my computer. |
| `git checkout main` | Switches to the `main` branch. |
| `git checkout -b name` | Creates a new branch called `name` and switches to it. |
| `git diff` | Shows exactly which lines I changed since the last commit. |
| `git rm --cached file` | Stops git from tracking a file, but keeps the file on my computer. |
