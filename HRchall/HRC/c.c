#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%ch", &ch); /* read character and store in ch */
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("%c\n", ch);
    printf("%s\n", &s);
    printf(&sen);
    
    return 0;
}
