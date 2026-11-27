*This project has been created as part of the 42 curriculum by dpivovar.*

# Libft

## Description

Libft is the first project of the 42 Common Core. The goal is to build my own C library, `libft.a`, by re-implementing standard C functions and adding extra utilities. The library is reused in later projects, so every function must be correct, Norm-compliant, and safe with memory.

The project has three parts:

1. **Libc re-implementations**: same behaviour as the originals, with an `ft_` prefix.
2. **Additional functions**: string and output helpers that are not in the libc.
3. **Linked lists**: a singly linked list API.

Everything is compiled with `-Wall -Wextra -Werror` and archived with `ar` into a static library.

### Part 1: libc functions

#### Character checks and conversion

| Function | Prototype | What it does |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | Returns 1 if `c` is a letter, 0 otherwise. |
| `ft_isdigit` | `int ft_isdigit(int c)` | Returns 1 if `c` is a decimal digit, 0 otherwise. |
| `ft_isalnum` | `int ft_isalnum(int c)` | Returns 1 if `c` is a letter or a digit, 0 otherwise. |
| `ft_isascii` | `int ft_isascii(int c)` | Returns 1 if `c` fits in the ASCII table (0 to 127). |
| `ft_isprint` | `int ft_isprint(int c)` | Returns 1 if `c` is printable (32 to 126). |
| `ft_toupper` | `int ft_toupper(int c)` | Converts a lowercase letter to uppercase, otherwise returns `c` unchanged. |
| `ft_tolower` | `int ft_tolower(int c)` | Converts an uppercase letter to lowercase, otherwise returns `c` unchanged. |

#### Memory functions

| Function | Prototype | What it does |
|---|---|---|
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | Fills the first `n` bytes of `s` with the byte `c`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Sets `n` bytes to zero. |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest` (areas must not overlap). |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | Like `ft_memcpy`, but safe when the areas overlap. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Returns a pointer to the first byte equal to `c` in `n` bytes, or `NULL`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares `n` bytes and returns the difference of the first mismatch. |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates `nmemb * size` zeroed bytes, `NULL` if the multiplication overflows or if `malloc` fails. |

#### String functions

| Function | Prototype | What it does |
|---|---|---|
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the length of `s` without the `'\0'`. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies up to `size - 1` characters and null-terminates. Returns `ft_strlen(src)`. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to `dst` within `size` bytes. Returns the length it tried to build, so truncation can be detected. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Returns a pointer to the first occurrence of `c` in `s`, or `NULL`. Searching for `\0` returns a pointer to the null terminator. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Returns the last occurrence of `c` in `s`, or `NULL`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` characters as `unsigned char`. |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Finds `little` in the first `len` characters of `big`. Returns `big` if `little` is empty, `NULL` if there is no match. |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | Skips whitespace, reads an optional sign, converts digits to `int`. |
| `ft_strdup` | `char *ft_strdup(const char *s)` | Returns a newly allocated copy of `s`. |

### Part 2: additional functions

| Function | Prototype | What it does |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a substring of at most `len` characters starting at `start`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Returns a new string made of `s1` followed by `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Removes leading and trailing characters found in `set`. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` on `c` into a `NULL`-terminated array of new strings. |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts an integer to a string, including negatives and `INT_MIN`. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each character and returns the new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character in place. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes a character to `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes a string to `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes a string followed by a newline to `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes an integer to `fd`, including `INT_MIN`. |

### Part 3: linked lists

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Each node stores a generic pointer and the address of the next node. The last node points to `NULL`.

| Function | Prototype | What it does |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Creates a new node with `next` set to `NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds a node at the front. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Counts the nodes. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds a node at the end. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees a node's content with `del`, then the node. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes every node and sets `*lst` to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to each node's content. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Builds a new list from the results of `f`, cleaning up on failure. |

## Implementation notes

- **Overlap:** `ft_memmove` chooses the copy direction depending on whether `dest` is before or after `src`.
- **Overflow:** `ft_calloc` checks `nmemb * size` for overflow before allocating.
- **`INT_MIN`:** `ft_itoa` and `ft_putnbr_fd` handle it without overflowing.
- **Allocation failures:** `ft_split` and `ft_lstmap` free everything already allocated and return `NULL`.
- **Const-correctness:** parameters that must not change are declared `const`.

## Instructions

### Requirements

- A C compiler (`cc`) and `make`
- `ar`

### Build

```bash
git clone <repository_url>
cd <project_folder>
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean followed by a full rebuild
```

### Use it in your own program

```c
#include "libft.h"

int	main(void)
{
	char	*s;

	s = ft_strjoin("Hello, ", "World!");
	if (!s)
		return (1);
	ft_putendl_fd(s, 1);
	free(s);
	return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o demo
./demo
```

If the header is in another directory, add `-I<path to libft.h>`.

### Testing

I compare my functions with their libc counterparts and check edge cases such as empty strings, `n = 0`, and allocation failures. I used [Claudenette by Rabeloivan](https://github.com/rabeloivan/claudenette) and sanitizers (AddressSanitizer, Valgrind) to catch memory errors.

## Resources

- Linux manual pages: `man 3 <function>`
- The 42 Libft subject
- [Claudenette by Rabeloivan](https://github.com/rabeloivan/claudenette)
- Documentation for AddressSanitizer and Valgrind
- Articles and tutorials on pointers, function pointers, and linked lists in C

**AI usage:** AI was used as a study aid to explain concepts, help read compiler and tester output, and help write this README.
