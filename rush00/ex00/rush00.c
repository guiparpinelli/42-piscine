int ft_putchar (char c);

int
is_border (int index, int length)
{
  return (index == 0 || index == length - 1);
}

void
draw (int row, int y, int column, int x)
{
  if (is_border (column, x) && is_border (row, y))
    {
      ft_putchar ('o');
    }
  else
    {
      if (is_border (column, x))
        {
          ft_putchar ('|');
        }
      else if (is_border (row, y))
        {
          ft_putchar ('-');
        }
      else
        {
          ft_putchar (' ');
        }
    }
}

void
rush (int x, int y)
{
  int row;
  int column;

  row = 0;
  column = 0;
  while (row < y)
    {
      while (column < x)
        {
          draw (row, y, column, x);
          column++;
        }
      column = 0;
      ft_putchar ('\n');
      row++;
    }
}
