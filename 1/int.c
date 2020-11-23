#include <stdio.h>
#include <cs50.h>


int main(void)
{
  int age = get_int("What's your age?\n");
  int days = age * 365;
  printf("You are atleast %i days old.\n", days);

}
