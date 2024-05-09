#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello, World!";
    
    printf("Before strnset: %s\n", str);
    
    // Set the first 5 characters of str to 'X'
    strnset(str, 'X', 5);
    
    printf("After strnset: %s\n", str);
    
    return 0;
}

