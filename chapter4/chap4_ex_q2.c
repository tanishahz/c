/* In digital World colors are specified in red-Green_Blue(RGB)formate,with values of R,G,B varying
on an integer scale from 0 to 255 . In print publishing the color are mentioned in cyan-Magenta-
yello-black-(CMYK)Formate
*/
#include <stdio.h>
int main()
{
    int r, g, b, big;
    float w, c, m, y, k;
    printf("Enter the value r : ");
    scanf("%d", &r);
    printf("Enter the value g : ");
    scanf("%d", &g);
    printf("Enter the value b : ");
    scanf("%d", &b);
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
    {
        printf("Please enter correct values between 0 to 255.");
    }
    else if (r == 0 && g == 0 && b == 0)
    {
        c = 0;
        m = 0;
        y = 0;
        k = 1;
        printf("cyan    = %.0f\n", c*100);
        printf("magenta = %.0f\n", m*100);
        printf("yellow  = %.0f\n", y*100);
        printf("black   = %.0f\n", k*100);
    }
    else
    {
        big = (w > g) ? ((r > b) ? r : b) : ((g > b) ? g : b);
        w = big / 255.0;
        c = (w - r / 255.0) / w;
        m = (w - g / 255.0) / w;
        y = (w - b / 255.0) / w;
        k = 1 - w;
        printf("cyan    = %.0f\n", c*100);
        printf("magenta = %.0f\n", m*100);
        printf("yellow  = %.0f\n", y*100);
        printf("black   = %.0f\n", k*100);
    }
    return 0;
}