/*
void ft_putstr_non_printable(char *str);

int main() {
  char s[] = "Coucou\ntu vas bien ?";

  ft_putstr_non_printable(s);
}
*/
#include <unistd.h>

/*
 * First, it writes the backslash character. Then checks the first four bits of
 * the given byte by dividing it by 16 (0x10). If the result is greater than 9,
 * it adds 86 (0x57) to convert it to the ASCII code of the corresponding hex
 * digit (A-F). Otherwise, it adds 48 (0x30) to convert it to the ASCII code of
 * the corresponding decimal digit (0-9). Afterwards, it writes character `c`
 * to standard output. Following, it applies the same logic above but for the
 * last four bits of the given byte and write it to standard output.
 */
void
write_hex (char byte)
{
  char c;

  write (1, "\\", 2);
  if (byte / 16 > 9)
    {
      c = byte / 16 + 87;
    }
  else
    {
      c = byte / 16 + 48;
    }
  write (1, &c, 1);
  if (byte % 16 > 9)
    {
      c = byte % 16 + 87;
    }
  else
    {
      c = byte % 16 + 48;
    }
  write (1, &c, 1);
}

void
ft_putstr_non_printable (char *str)
{
  while (*str)
    {
      if ((*str >= 0 && *str < 32) || *str == 127)
        write_hex (*str);
      else
        write (1, str, 1);
      ++str;
    }
}
