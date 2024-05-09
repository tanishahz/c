/* A certain grade of steel is graded according to the following conditions:
(i)   Hardness must be greater than 50
(ii)  Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
 The grade are as follows:
 Grade is 10 if all three conditions are met
 Grade is 9 if conditions (i) and(ii) are met
 Grade is 8 if conditions (ii) and (iii) are met
 Grade is 7 if conditions (i) and (iii) are met
 Grade is 6 if only one conditions is met
 Grade is 5 if none of the  conditions are met

 Write a program, Which will require the user to give value of hardness,carbon content and tensile
  strength of the steel under consideration and output the grade of the steel.*/
  #include<stdio.h>
 int main()
{
    int h,t,g;
    float c;
    printf("Enter the hardness value : ");
    scanf("%d",&h);
    printf("Enter the carbon content : ");
    scanf("%f",&c);
    printf("Enter the  tensile strength : ");
    scanf("%d",&t);
    if(h>50 && c<0.7 && t>5600)
       g=10;
    else if(h>50 && c<0.7)
       g=9;
    else if(c<0.7 && t>5600)
       g=8;
    else if(h>50 && t>5600)
       g=7;
    else if(h>50 || c<0.7 || t>5600)
       g=6;
    else
     g = 5;       
    printf("Grade of the steel %d",g);
    return 0;
}