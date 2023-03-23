int ft_is_prime(int nb) {
  if (nb <= 1)
    return (0);
  if (nb <= 3)
    return (1);
  if (nb % 2 == 0 || nb % 3 == 0)
    return (0);

  int i;

  i = 5;
  while (i * i <= nb) {
    if (nb % i == 0 || nb % (i + 2) == 0)
      return (0);
    i += 6;
  }
  return (1);
}

int ft_find_next_prime(int nb) {
  int next_prime;

  next_prime = nb;
  while (ft_is_prime(next_prime) != 1) {
    next_prime++;
  }
  return (next_prime);
}