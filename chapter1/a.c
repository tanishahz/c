    /*
    Temprature of a city  in  Fahrenheit is input through the keyboard.
    write a program to convert  this temperature into  centigrade degrees.
    */
    #include<stdio.h>
    int main()
    {
        float f,c;
        printf("Enter the temperature in fahrenheit:");
        scanf("%f",&f);
        c=(f-32)*5.0/9.0;
        printf("Temperture in centigrade %.2f",c);
        return 0;
    }