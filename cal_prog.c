#include<stdio.h>
#include<string.h>

int main() {
   float i,j;
   int n;
   printf("Enter the first number: ");
   scanf("%f",&i);
   printf("Enter the second number: ");
   scanf("%f",&j);
   printf("Select 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
   printf("Which operation do you want to do: ");
   scanf("%d",&n);
   switch(n){
    /*Addition*/
    case 1: printf("%.1f\n",i+j);
    break;
    case 2: printf("%.1f\n",i-j);
    break;
    case 3: printf("%.1f\n",i*j);
    break;
    case 4: printf("%.1f\n",i/j);
    break;
    return 0;
   }
}