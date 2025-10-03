#include "palindrome.h"


int is_palindrome(unsigned long n)
{
unsigned long reversed = 0;
unsigned long original = n;

while (n > 0)
{

unsigned long last_num = n % 10;


reversed = reversed * 10 + last_num;


n = n / 10;
}


if (original == reversed)
return (1);
else
return (0);
}
