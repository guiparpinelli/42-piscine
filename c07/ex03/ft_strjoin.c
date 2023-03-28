#include <stdlib.h>

int ft_strlen(char *str) {
  int len;

  len = 0;
  while (str[len] != '\0')
    len++;
  return len;
}

char *ft_strcat(char *dest, const char *src) {
  int dest_len;
  char *dest_end;

  dest_len = ft_strlen(dest);
  dest_end = dest + dest_len;
  while (*src != '\0')
    *dest_end++ = *src++;
  *dest_end = '\0';
  return dest;
}

int get_total_len(int size, char **strs, char *sep) {
  int total_len;
  int i;

  i = 0;
  total_len = 0;
  while (i < size) {
    total_len += ft_strlen(strs[i]);
    if (i < size - 1)
      total_len += ft_strlen(sep);
    i++;
  }
  return (total_len);
}

char *ft_strjoin(int size, char **strs, char *sep) {
  int total_len;
  int i;
  char *result;

  if (size == 0)
    return "";
  total_len = get_total_len(size, strs, sep);
  result = (char *)malloc(total_len + 1);
  if (result == NULL)
    return NULL;
  result[0] = '\0';
  i = 0;
  while (i < size) {
    ft_strcat(result, strs[i]);
    if (i < size - 1)
      ft_strcat(result, sep);
    i++;
  }
  return result;
}