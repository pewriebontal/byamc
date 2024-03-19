# LIB-BYAMC (pronounced "lib-b-yam-see") - Bon's Yet Another Mini C Standard Library 

<p align="center">
<img src="https://dl.bontal.net/graphics/webp/byamc/logo_no_bg.webp" alt="Byamc Logo" width="250"/>
</p>

This project is a collection of various utility functions and modules written in C as part of 42's core curriculum. It includes functions for checking character types, manipulating lists, memory management, string manipulation, get_next_line and printf.

## Structure

The project is structured into several directories, each containing related functions:

- **ft_is**: Contains functions for checking character types, such as ft_isalnum, ft_isalpha, ft_isascii, ft_isdigit, and ft_isprint.
- **ft_lst**: Contains functions for manipulating linked lists, such as ft_lstadd_back, ft_lstadd_front, ft_lstclear, ft_lstdelone, ft_lstiter, ft_lstlast, ft_lstmap, ft_lstnew, and ft_lstsize.
- **ft_mem**: Contains functions for memory management, such as ft_bzero, ft_calloc, ft_memchr, ft_memcmp, ft_memcpy, ft_memmove, and ft_memset.
- **ft_printf**: Contains functions for formatted printing.
- **ft_put**: Contains functions for outputting characters and strings.
- **ft_str**: Contains functions for string manipulation.
- **ft_to**: Contains functions for type conversions.
- **gnl**: Contains the get_next_line function for reading lines from a file.

## Usage

To use the functions in this project, include the appropriate header files in your C source files. For example, to use the ft_isalpha function, you would include the byamc.h header file:

```c
#include "byamc.h"
#include "ft_printf.h"
```

Then, you can call the function like this:

```c
if (ft_isalpha('a'))
{
    ft_printf("The character is an alphabetic character.\n");
}
```

## Building

This project uses a Makefile for building. To build the project, run the following command in your terminal:

```sh
make
```

## License

This project is licensed under the GNU General Public License v3.0. For more details, see the [LICENSE](LICENSE) file.

## Contact

For any questions or concerns, please contact the author at 0x@bontal.net.
