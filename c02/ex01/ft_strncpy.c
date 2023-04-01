char *
ft_strncpy (char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (i < n && *src != '\0')
    *(dest + i++) = *src++;
  *(dest + i) = '\0';
  return (dest);
}
