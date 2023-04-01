int
is_lowercase (int c)
{
  return ((c >= 'a' && c <= 'z'));
}

int
ft_str_is_lowercase (char *str)
{
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0')
    {
      result = is_lowercase (str[i]);
      if (!result)
        {
          break;
        }
      i++;
    }
  return (result);
}
