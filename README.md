# Structure
This project derives from the work done on the course of "Structure de donnees dans C" followed in FSTS. The file structure follows the modular system where there's a header file (`.h`) which defines the functions and types/structs and a `.c` file where the implementations of the functions and types are.
```bash
Structure/
├── README.md
├── include
│   ├── chaines.c
│   ├── chaines.h
│   ├── linked_list.c
│   ├── linked_list.h
│   ├── matrice.c
│   ├── matrice.h
│   ├── recherche.c
│   ├── recherche.h
│   ├── tableau.c
│   ├── tableau.h
│   ├── tri.c
│   └── tri.h
├── main.c
└── makefile
```
The project doesn't use any building systems because the original course didn't.

# Running the project
Before compiling the project make sure to modify the `main.c` to your satisfaction.
## Requirements
To be able to compile this project you'll need to have [gcc](https://code.visualstudio.com/docs/cpp/config-mingw) installed and added to PATH, you can use make to compile it or compile it from scratch


## Compiling using gcc
To compile the project using gcc use the command
```bash
git clone git@github.com:Ilyass-Bougati/Structure.git
cd Structure
gcc -o main.exe main.c include/*.c
./main.exe
```