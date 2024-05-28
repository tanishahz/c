/*Wite a program that recieves an integer (less than or equal to nine digits in length) and prints out the
number in words. for example, if the number inputs is 12342, then the output should be twelve thousand
Three hundred forty two.*/
#include <stdio.h>

char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *hundreds[] = {"", "One Hundred", "Two Hundred", "Three Hundred", "Four Hundred", "Five Hundred", "Six Hundred", "Seven Hundred", "Eight Hundred", "Nine Hundred"};

void convert_to_words(int num) {
    if (num >= 1000000000) {
        printf("Number out of range.\n");
        return;
    }

    if (num == 0) {
        printf("Zero\n");
        return;
    }

    // Billion
    if (num >= 100000000) {
        convert_to_words(num / 100000000);
        printf("Billion ");
        num %= 100000000;
    }

    // Million
    if (num >= 1000000) {
        convert_to_words(num / 1000000);
        printf("Million ");
        num %= 1000000;
    }

    // Thousand
    if (num >= 1000) {
        convert_to_words(num / 1000);
        printf("Thousand ");
        num %= 1000;
    }

    // Hundred
    if (num >= 100) {
        printf("%s ", hundreds[num / 100]);
        num %= 100;
    }

    // Tens and Ones
    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        num %= 10;
    } else if (num >= 11) {
        printf("%s ", teens[num - 10]);
        num = 0;
    }

    if (num > 0) {
        printf("%s ", ones[num]);
    }
}

int main() {
    int num;
    printf("Enter an integer (up to nine digits): ");
    scanf("%d", &num);

    printf("In words: ");
    convert_to_words(num);
    printf("\n");

    return 0;
}
