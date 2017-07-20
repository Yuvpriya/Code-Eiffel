#include <stdio.h>
int main()
{
char z;
printf("Enter a character: ");
scanf("%c",&z);
if( (z>='a' && z<='z') || (z>='A' && z<='Z'))
printf("%c is an alphabet.",z);
else
printf("%c is not an alphabet.",z);
return 0;
}
