int
is_uppercase (int c)
{
  return ((c >= 'A' && c <= 'Z'));
}

int
ft_str_is_uppercase (char *str)
{
  int i;
  int result;

  result = 0;
  i = 0;
  while (str[i + 1] != '\0')
    {
      result = is_uppercase (str[i]);
      if (!result)
        {
          break;
        }
      i++;
    }
  return (result);
}
