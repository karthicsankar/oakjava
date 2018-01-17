#include <stdio.h>
int main()
{
    char ch;
    int Lower, Upper;

    printf("Enter an alphabet:");
    scanf("%c",&ch);
    Lower = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    Upper = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (Lower || Upper)
        printf("%c is a vowel.", ch);
    else
        printf("%c is a consonant.", ch);
    return 0;
}
