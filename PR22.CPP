#include<stdio.h>
#include<conio.h>

void main ()
{
   float amount,bill,extcharge,unit;
   clrscr();
   printf("\t\t  *********GUJARAT ELECTRICITY BILL*********\n\n");
   printf("Enter Electricity units: ");
   scanf("%f",&unit);

   if(unit<=50)
   {
    amount=unit*0.50;
   }
   else if (unit <= 100)
   {
    amount=25+((unit-50)*0.75);
   }
   else if (unit <=100)
   {
   amount=100+ ((unit-150)*1.20);
   }
   else
   {
   amount=220+((unit-250)*1.50);
   }

     extcharge=amount*0.20;
     bill=amount + extcharge;

     printf("Your Electricity Bill is :%.2f\n\n\n\n",bill);
     printf("\t\t\t *********THANK YOU*********");


   getch();
}