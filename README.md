# _printf

A re-creation of the printf function in C!


## Requirements for this project

- Code must comply with the [Betty](https://github.com/holbertonschool/Betty) style and document checks.
- Compile code using flags: `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, `-Wno-format`
- Cannot use global variables.
- Restricted to no more than 5 functions per file.
- Function prototypes should be included in header file `holberton.h`
- Header files should be include guarded.
- Authorized functions and macros:
..* `write` (`man 2 write`)
..* `malloc` (`man 3 malloc`)
..* `free` (`man 3 free`)
..* `va_start` (`man 3 va_start`)
..* `va_end` (`man 3 va_end`)
..* `va_copy` (`man 3 va_copy`)
..* `va_arg` (`man 3 va_arg`)


## File Descriptions

- `holberton.h`: Header file which contains `<stdarg.h>`, constant `BUFSIZE`, struct `validTypes` definition, and all function prototypes.
- `_printf.c`: Main printf function
- `helper.c`: Core helper functions for printf, including function `get_valid_type` which returns a function pointer, and `alloc_buffer` which fills buffer space and handles a full buffer fill.
- `tools.c`: Helper functions for general use, including `_strlen` to find string length, `_memcpy` that copies characters into a destination, and `_puts` that calls the `write` function to print an entire buffer.
- `printf_functions.c`: Functions stored within our struct `validTypes` array, which handles char, string, %, int, and unsigned int.
- `adv_printf_functions.c`: Functions stored within our struct `validTypes` array, which handles reverse, and rot13.
- `adv2_printf_functions.c`: Functions stored within our struct `validTypes` array, which handles octal, and hex.


## Team

*Ian Liu-Johnston* - [Github](https://github.com/ianliu-johnston) || [Twitter](https://twitter.com/Concativerse)

*Philip Yoo* - [Github](https://github.com/philipyoo) || [Twitter](https://twitter.com/philipYoo10)
