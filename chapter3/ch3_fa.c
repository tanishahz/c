/*A five-digit number is entred through the keyboard.Write a program to obtain the
 reversed number and to determine wheather the original and reversed numbers are equal or not.*/
 #include<stdio.h>
 int main()
 {
    int num,a,b,c,d,rev,n1,n2,n3,n4,n5;
    printf("Enter the 5digit number\n : ");
    scanf("%d",&num);
     a=num/10;
     n5=num%10;

     b=a/10;
     n4=a%10;

     c=b/10;
     n3=b%10;

     d=c/10;
     n2=c%10;

     n1=d%10;
     rev=n5*10000+n4*1000+n3*100+n2*10+n1*1;
     printf("Reverse number of %d is %d\n",num,rev);

    if(num==rev)
    printf("Both the number are equal");
    else 
    printf("Both the numbers are not equa"); 
    return 0;
 }