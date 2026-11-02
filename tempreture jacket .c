#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the Temperature out there>>\n");
    scanf("%f",&temp);
    if(temp<0)
        printf("It's freezing. Wear a heavy coat.");
    else if(temp<10)
        printf("Wear a warm jacket.");
    else
        printf("A light jacket is fine.");
}
