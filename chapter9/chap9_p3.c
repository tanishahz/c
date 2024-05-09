/*write a function that recieve marks obtained by a student in 3 subjects and returns the average 
 and percentage and returns the average and perchantage of these marks.
 call this function from main() and printf the results in main().*/
 #include<stdio.h>
 void result(int,int,int,float*,float*);
 int main()
 {
    float avg,per;
    int m1,m2,m3;
    printf("Enter marks in three subjects : ");
    scanf("%d %d %d",&m1,&m2,&m3);
    result(m1,m2,m3,&avg,&per);
    printf("Average = %f\nPercentage = %f\n",avg,per);
    return 0;
 }
 void result(int m1,int m2,int m3,float*a,float*p)
 {
    *p = *a =(m1 + m2 + m3)/3.0f;
 }