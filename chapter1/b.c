/*The length and breadth of a rectangle and radius of a circle are input through the keyboard.
  Whrite a program to calculate the area and perimeter of the rectangle, and the area and cirumference of the circle.*/
  #include<stdio.h>
  int main()
  {
    int r,l,b,ar,pr;
    float ac,cc;
    printf("enter the length of rectangle");
    scanf("%d",&l);
    printf("enter the breadth of rectangle");
    scanf("%d",&b);
    printf("enter the radius of rectangle");
    scanf("%d",&r);
    ar=l*b;
    pr=2*(l+b);
    ac=2*3.14*r;
    cc=3.14*r*r;
    printf("area of rectangle :%d\n",ar);
    printf("perimeter of rectangle :%d\n",pr);
    printf("area of circle :%.2f\n",ac);
    printf("circumference of the circle :%.2f\n");
    return 0;
  }
