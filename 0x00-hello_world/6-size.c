#include <stdio.h>
int main(void)
{
int intType;
float floatType;
long int longType;
char charType;
long long int longlongType;
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongType));
printf("Size of float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
