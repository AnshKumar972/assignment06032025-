#include <stdio.h>

int main() {
    char s[50];
    int i = 0;
    int alpha = 0, digits = 0, spChar = 0;

    printf("Enter the string: ");
    gets(s); // unsafe, use fgets(s, 50, stdin) in real programs

    while (s[i] != '\0') {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            alpha++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            digits++;
        }
        else {
            spChar++;
        }
        i++;
    }

    printf("The sum of alphabets are = %d\n", alpha);
    printf("The sum of digits are = %d\n", digits);
    printf("The sum of special characters are = %d\n", spChar);

    return 0;
}
