/*Write a program that converts a string like "124" to an integer 124.*/
// #include <stdio.h>

// int string_to_integer(const char *string) {
//     int result = 0;
//     const char *ptr = string;

//     while (*ptr != '\0') {
//         if (*ptr >= '0' && *ptr <= '9') { 
//             result = result * 10 + (*ptr - '0');
//         } else {
//             printf("Error: Input string must contain only digits\n");
//             return -1; 
//         }
//         ptr++;
//     }
//     return result;
// }

// int main() {
//     const char *input_string = "124";
//     int result_integer = string_to_integer(input_string);
//     if (result_integer != -1) {
//         printf("String: %s\n", input_string);
//         printf("Integer: %d\n", result_integer);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    char str[6];
    int num =0;
    printf("Enter a string containing a number : ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48 && str[i]<=57)
        num = num*10+(str[i]-48);
    else
    {
        printf("Not a valid string\n");
        return 0;
    }
    }
    printf("The number is :%d\n",num);
    return 0;
}
