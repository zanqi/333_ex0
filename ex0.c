// Name: Zanqi Liang
// Email: zanqil@uw.edu

#include <stdio.h>  // printf
#include <stdlib.h> // EXIT_SUCCESS

int main(int argc, char const *argv[])
{
  if (argc != 2)
  {
    printf("Error: Only accept 1 argument");
    return EXIT_FAILURE;
  }

  char *endptr;
  // If argv[1] is an integer, endptr will point to the end of string
  long n = strtol(argv[1], &endptr, 10);
  if (*endptr != '\0')
  {
    fprintf(stderr,
            "Error: '%s' is not a valid long integer.\n", argv[1]);
    return EXIT_FAILURE;
  }

  int i;
  double res = 3;
  for (i = 1; i <= n; i++)
  {
    double ii = i;
    res += ((i % 2 == 0) ? -1 : 1) *
           (4 / (2 * ii * (2 * ii + 1) * (2 * ii + 2)));
  }
  printf("Our estimate of Pi is %.20lf", res);
  return EXIT_SUCCESS;
}
