// #include<stdio.h>
// int main()
// {
//     char c[2]="A";
//     printf("%c\n",c[0]);
//     printf("%s\n",c);
//     return 0;
// }
// (a) The output is A 
//               A

// #include<stdio.h>
// int main()
// {
//     char s[]="Get organized Learn CH ";
//     printf("%s\n",&s[2]);
//     printf("%s\n",s);
//     printf("%s\n",&s);
//     printf("%c\n",s[2]);
//     return 0;
// }
//      (b) The output is  
//                         t organized Learn CH 
//                         Get organized Learn CH 
//                         Get organized Learn CH 
//                         t 

// #include<stdio.h>
// int main()
// {
//     char s[] = "N two viruses work similarly";
//     int i=0;
//     while(s[i]!=0)
//     {
//         printf("%c %c\n",s[i],*(s+i));
//         printf("%c %c\n",i[s],*(i+s));
//         i++;
//     }   
//     return 0;
// }
// (c) The output is 

// a a
// r r
// r r
// l l
// l l
// y y
// y y

// #include<stdio.h>
// int main()
// {
//     char str1[]={'H','e','I','I','o',0};
//     char str2[]="Hello";
//     printf("%s\n",str1);
//     printf("%s\n",str2);
//     return 0;
// }
//  (d) The output is 
//      HeIIo
//      Hello

// #include<stdio.h>
// int main()
// {
//     printf(5 + "Good Morining ");
//     printf("%c\n","abcdefgh"[14]);
//     return 0;
// }
//  (e) The output is :-  Morining §

// #include<stdio.h>
// int main()
// {
//     printf("%d %d %d\n", sizeof('3'),sizeof("3"),sizeof(3));
//     return 0;
// }
 // (f) The ouput is    4 2 4 .