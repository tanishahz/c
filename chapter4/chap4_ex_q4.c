/*The body mass index (IBM) is define as ratio of the weight of a person (in Kilograms) to the
square of the hight (in meters).Write a program that receives weight and height,calculate the
BMI ,and reports  BMI category as per the following table:
         BMI category                          BMI
         Starvation                             < 15
         Anorexic                                15.1 to 17.5
         Underweight                             17.6 to 18.5
         Ideal                                   18.6 to 24.9
         Overweight                              25 to 25.9
         Obese                                   30 to 30.9
         Morbidly Obese                          >=40
*/
#include<stdio.h>
int main()
{
      float weight,hight,ibm_value;
      printf("Enter the person  weight : ");
      scanf("%f",&weight);
      printf("Enter the  person  hight in meters : ");
      scanf("%f",&hight);
       ibm_value = weight/(hight*hight);
       printf("ibm = %f",ibm_value);
       if(ibm_value<15)
      {
            printf("Report = Starvation");
      }
      else if(ibm_value>15.1 && ibm_value<=17.5)
      {
            printf("Report = Anorexic");
      }
      else if(ibm_value>17.6 && ibm_value<=18.5)
      {
            printf("Report = Underweight");
      }
      else if (ibm_value>18.6 && ibm_value<=24.9)
      {
            printf("Report = Ideal");
      }
      else if (ibm_value>25 && ibm_value<=25.9)
      {
            printf("Report = Overweight");
      }
      else if(ibm_value>30  && ibm_value<=30.9)
      {
            printf("Report = Obese");
      }
      else if (ibm_value>=40)
      {
            printf("Report = Morbidlyobese");
      }
      return 0;
}