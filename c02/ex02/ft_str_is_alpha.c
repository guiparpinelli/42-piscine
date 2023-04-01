int
is_alpha (int c)
{
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int
ft_str_is_alpha (char *str)
{
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0')
    {
      result = is_alpha (str[i]);
      if (!result)
        {
          break;
        }
      i++;
    }
  return (result);
}
