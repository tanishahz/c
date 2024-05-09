/*Paper of A0 has dimensions 1189 mm x 841mm. Each subsequent size A(n) is difined as A(n-1)cat in half parallelto its shorter sides.  
Thus of size A1 would have dimensions 841 mm x 594mm.
 Write a program to calculate and print paper sizes A0,A1,A2,..A8.*/
 
  #include<stdio.h>
  int main()
  {
    int al0 = 1189;
    int ab0 = 841;
    int al1,ab1,al2,ab2,al3,ab3,al4,ab4,al5,ab5,al6,ab6,al7,ab7;
    al1 = ab0;//841
    ab1 = al0/2;//594
    al2 = ab1;
    ab2 = al1/2;
    al3 = ab2;
    ab3 = al2/2;
    al4 = ab3;
    ab4 = al3/2;    
    al5 = ab4; 
    ab5 = al4/2;
    al6 = ab5;
    ab6 = al5/2;
    al7 = ab6;
    ab7 = al6/2;
    
   printf("A0 = %dmm x %dmm\n",al0,ab0);
   printf("A1 = %dmm x %dmm\n",al1,ab1);
   printf("A2 = %dmm x %dmm\n",al2,ab2);
   printf("A3 = %dmm x %dmm\n",al3,ab3);
   printf("A4 = %dmm x %dmm\n",al4,ab4);
   printf("A5 = %dmm x %dmm\n",al5,ab5);
   printf("A6 = %dmm x %dmm\n",al6,ab6);
   printf("A7 = %dmm x %dmm\n",al7,ab7);
   return 0;
}