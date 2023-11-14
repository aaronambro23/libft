#include <unistd.h>

int	ft_atoi(const char *str);

void ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int ft_isalnum(int c);

int ft_isalpha(int c);

int ft_isascii(int c);

int ft_isdigit(int c);

int ft_isprint(int c);

char	*ft_itoa(int n);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void *ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memmove(void *s1, const void *s2, size_t n);

void *ft_memset(void *s, int c, size_t n);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *str, char c);

char *ft_strchr(const char *str, int c);

size_t ft_strlcat(char *dest, const char *src, size_t size);

size_t ft_strlcpy(char *dest, const char *src, size_t size);

size_t ft_strlen(const char *str);

int strncmp(const char *str1, const char *str2, size_t n);

char *ft_strnstr(const char *haystack, const char *needle, size_t n);

char *ft_strrchr(const char *str, int c);

char	*ft_strtrim(char const *s1, char const *set);

int ft_tolower(int c);

int ft_toupper(int c);

