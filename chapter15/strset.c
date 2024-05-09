#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello, World!";
    
    printf("Before strset: %s\n", str);
    
    // Set all characters of str to 'A'
    strset(str, 'A');
    
    printf("After strset: %s\n", str);
    
    return 0;
}
