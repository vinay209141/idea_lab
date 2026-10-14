# Idea Lab — Doxygen Documentation Experiment

## Experiment
Generate source-code documentation for a simple C program using Doxygen.

## Files
- `main.c` — C program containing Doxygen comments.
- `Doxyfile` — configuration for generating HTML documentation.
- `README.md` — project overview and instructions.

## Requirements
- A C compiler such as GCC
- Doxygen
- Graphviz (for call/dependency graphs, if enabled)

## Run the program
```bash
gcc main.c -o main
./main
```

Expected output:
```text
Sum is: 30
```

## Generate documentation
Run these commands in this folder:
```bash
doxygen -g Doxyfile
```
If a `Doxyfile` already exists, do not run the command above again. Open `Doxyfile` and set:
```text
INPUT                  = main.c
EXTRACT_ALL            = YES
GENERATE_HTML           = YES
HAVE_DOT                = YES
CALL_GRAPH              = YES
CALLER_GRAPH            = YES
```
Then generate the docs:
```bash
doxygen Doxyfile
```
Open `html/index.html` in a browser to view the generated documentation.

## Note
The generated `html/` output is not included yet; it is created by running Doxygen on a computer with Doxygen installed.
