# LIB-KYAMC (pronounced "lib-k-yam-see") - Kai's Yet Another Mini C Standard Library

<p align="center">
<img src="https://dl.bontal.net/graphics/webp/byamc/logo_no_bg.webp" alt="Kyamc Logo" width="250"/>
</p>

This project is a collection of various utility functions and modules written in C as part of 42's core curriculum. It includes functions for checking character types, manipulating lists, memory management, string manipulation, get_next_line and printf.

## Structure

The project is structured into several directories, each containing related functions:

- **ft_is**: Contains functions for checking character types, such as [`ft_isalnum`](src/ft_is/ft_isalnum.c), [`ft_isalpha`](src/ft_is/ft_isalpha.c), [`ft_isascii`](src/ft_is/ft_isascii.c), [`ft_isdigit`](src/ft_is/ft_isdigit.c), and [`ft_isprint`](src/ft_is/ft_isprint.c).
- **ft_lst**: Contains functions for manipulating linked lists, such as [`ft_lstadd_back`](src/ft_lst/ft_lstadd_back.c), [`ft_lstadd_front`](src/ft_lst/ft_lstadd_front.c), [`ft_lstclear`](src/ft_lst/ft_lstclear.c), [`ft_lstdelone`](src/ft_lst/ft_lstdelone.c), [`ft_lstiter`](src/ft_lst/ft_lstiter.c), [`ft_lstlast`](src/ft_lst/ft_lstlast.c), [`ft_lstmap`](src/ft_lst/ft_lstmap.c), [`ft_lstnew`](src/ft_lst/ft_lstnew.c), and [`ft_lstsize`](src/ft_lst/ft_lstsize.c).
- **ft_mem**: Contains functions for memory management, such as [`ft_bzero`](src/ft_mem/ft_bzero.c), [`ft_calloc`](src/ft_mem/ft_calloc.c), [`ft_memchr`](src/ft_mem/ft_memchr.c), [`ft_memcmp`](src/ft_mem/ft_memcmp.c), [`ft_memcpy`](src/ft_mem/ft_memcpy.c), [`ft_memmove`](src/ft_mem/ft_memmove.c), and [`ft_memset`](src/ft_mem/ft_memset.c).
- **ft_printf**: Contains functions for formatted printing.
- **ft_put**: Contains functions for outputting characters and strings, such as [`ft_putchar`](src/ft_put/ft_putchar.c), [`ft_putstr_fd`](src/ft_put/ft_putstr_fd.c), and [`ft_putnbr_base`](src/ft_put/ft_putnbr_base.c).
- **ft_str**: Contains functions for string manipulation, such as [`ft_substr`](src/ft_str/ft_substr.c).
- **ft_to**: Contains functions for type conversions.
- **gnl**: Contains the [`get_next_line`](src/gnl/get_next_line.c) function for reading lines from a file.
- **burma_mhu_pyu**: Contains functions translated into Burmese (Myanmar) language for Absolute Burmese Vibes.

## Usage

To use the functions in this project, include the appropriate header files in your C source files. For example, to use the ft_isalpha function, you would include the kyamc.h header file:

```c
#include <kyamc/kyamc.h>
#include <kyamc/ft_printf.h>
```

Then, you can call the function like this:

```c
if (ft_isalpha('a'))
{
    ft_printf("The character is an alphabetic character.\n");
}
```

To use burmese functions, include the `<kyamc/burmese.h>` header file:

```c
#include <kyamc/burmese.h>
```

Then, you can call the function like this:

```c
int main(void)
{
    int num ကိုထားလိုက် 1 ။

    char *msg = နေရာဦး(100)။

    အကယ်၍ (num တူညီရင် 1)
    {
        အာချောင်စမ်း ("မင်္ဂလာပါ။ တောသားတွေ။\n")။
    }
    ဒါမှမဟုတ်
    {
        အာချောင်စမ်း ("မင်္ဂလာပါ။\n")။
    }
    ရှင်းပစ် (msg)။
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
