#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character:\n");
    scanf("%c",&x);
    if((x>='a' && x<='z')||(x>='A' && x<='Z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    return 0;
}    
