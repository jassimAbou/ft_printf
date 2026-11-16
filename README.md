*This project has been created as part of the 42 curriculum by jaboulka.*

## Description
The `ft_printf` project aims to mimic the behavior of the standard C library function `printf`. The goal is to build a robust, modular variadic function that formats and prints data to the standard output without utilizing the original `printf`'s buffer management. The project handles the following conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Algorithm and Data Structure
This project requires specific architectural choices to ensure efficiency and Norminette compliance:
*   **Data Structure (Variadic Lists):** The core data structure relies on `<stdarg.h>`, utilizing `va_list` as a sequential pointer to manage an unknown number of arguments. Items are pulled off the stack sequentially using `va_arg` based on the detected format specifier type (e.g., `int`, `unsigned int`, `unsigned long`).
*   **Algorithm (Routing & Recursion):** The parsing engine iterates through the format string character by character. When a `%` trigger is detected, the algorithm delegates the next character to a static routing function. Numeric base conversions (Base 10 for `%d/%u`, Base 16 for `%x/%p`) use recursive division and string indexing (lookup tables) to print numbers character-by-character. This recursive algorithm eliminates the need for dynamic memory allocation (`malloc`), ensuring a memory-safe, unbuffered output stream.

## Instructions
To integrate and compile this library:
1.  **Compilation:** Run the `make` command at the root of the repository. This will compile all `.c` files and generate the `libftprintf.a` static library.
    ```bash
    make
    ```
2.  **Usage in a Project:** Include the header file in your C scripts and compile your program alongside the static library.
    ```c
    #include "ft_printf.h"
    ```
    ```bash
    cc -Wall -Wextra -Werror main.c libftprintf.a -o my_program
    ```
3.  **Cleanup:** Use `make clean` to remove object files or `make fclean` to remove both object files and the `.a` library.

## Resources
The following materials and tools were referenced during development:
*   **Classic References:** 
    *   `man 3 printf` and `man 3 stdarg` for standard behavior, geeksforgeeks.org for articles on the topics
*   **AI Usage Description:** AI was utilized exclusively as a pedagogical thought partner (using a strict Socratic method without generating code). It was used to clarify the mechanical behavior of `va_list` (the "conveyor belt" concept), explain memory boundaries for `%p` casting (`unsigned long` vs. `unsigned int`), and debug infinite recursion traps and parameter type mismatches during the routing phase.