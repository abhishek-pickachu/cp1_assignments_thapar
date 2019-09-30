/* WAP which will accept an integer, a decimal number, a character and a string from the keyboard
and display them one per line. */
#include <stdio.h>

int main() {
    int i, d;
    char character, string[50];
    printf("Enter an Integer : ");
    scanf("%d", &i);
    printf("Enter a Decimal : ");
    scanf("%d", &d);
    printf("Enter a Character : ");
    scanf(" %c", &c);       //here the space is intentionally left before %c
    printf("Enter a String : ");
    scanf("%s", &s);
    printf("You entered : \n Integer : %d\n Decimal : %d\n Character : %c\n String : %s", i, d, c, s);
}
