#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character:\n");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    { 
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}    
