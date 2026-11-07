# C Learning Journey

My personal repository for learning the C programming language, one small program at a time.

## Getting started

You need a C compiler (`gcc` or `clang`) and `make`.

```bash
git clone https://github.com/kenzyhadjbachir/c-learning-journey.git
cd c-learning-journey
make run
```

Expected output:

```
Hello, C world!
```

## Project structure

```
.
├── hello.c      # Lesson 0: Hello world
├── variables.c  # Lesson 1: Variables and types
├── conditions.c # Lesson 2: Conditions and loops
├── files.c      # Lesson 3: Writing files (+ all terminal commands)
├── functions.c  # Lesson 4: Functions
├── arrays.c     # Lesson 5: Arrays and strings
├── pointers.c   # Lesson 6: Pointers
├── structs.c    # Lesson 7: Structs
├── assets/      # Downloadable files (cmd-commands.txt)
├── Makefile     # Build and run commands
├── .gitignore   # Files Git should ignore
├── LICENSE      # MIT license
└── README.md    # This file
```

## Commands

| Command      | What it does                     |
|--------------|----------------------------------|
| `make`              | Compile all programs            |
| `make run`          | Compile and run `hello`         |
| `make run-variables`| Compile and run `variables`     |
| `make run-conditions`| Compile and run `conditions`   |
| `make run-files`    | Compile and run `files`         |
| `make run-functions`| Compile and run `functions`     |
| `make run-arrays`   | Compile and run `arrays`        |
| `make run-pointers` | Compile and run `pointers`      |
| `make run-structs`  | Compile and run `structs`       |
| `make clean`        | Delete compiled files           |

## Downloads

| File | Description |
|------|-------------|
| [cmd-commands.txt](https://github.com/kenzyhadjbachir/c-learning-journey/raw/main/assets/cmd-commands.txt) | Cheat sheet with all the Windows cmd commands. Opens in Notepad. |

To download: click the link, then press `Ctrl + S` to save it. Or open the
[`assets`](assets) folder, click the file, and use the download button.

## Roadmap

- [x] Hello world
- [x] Variables and types
- [x] Conditions and loops
- [x] Writing files
- [x] Functions
- [x] Arrays and strings
- [x] Pointers
- [x] Structs
- [ ] Files and memory (`malloc`, `free`)
- [ ] A small final project

## License

Released under the MIT License. See [LICENSE](LICENSE).
