#include<stdio.h>
void main()
{
int  pin,choice,choice2;
float withdrawal, deposite,balance;
balance=100000;
withdrawal=0;
deposite=0;
while (pin != 2025)
{
    printf(" Enter your pin number:");
scanf("%d", &pin);
if (pin != 2025)
printf(" Please enter your valid password:\n");
}
do
{
printf("\n**** Welcome to SRM Bank ****\n");
printf("*****************************\n\n");
printf("1. Deposite\n");
printf("2. Withdrawal \n");
printf("3. Balance inquiry \n");
printf("4. Fast cash \n");
printf("5. Exit\n");
printf("\n Enter choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\n\n\nDEPOSIT MENU");
printf("\n***************");
printf("\n please enter deposit amount:");
scanf(" %f",&deposite);
if(deposite > 0 )
{
balance = balance + deposite;
printf("\n You have deposited %f",deposite);
printf("\n Your account balance is %f\n\n press any key to continue:",balance);
}
else
{
printf("\n error:you can not deposit less than 0" );
printf("\n\n\n press any key to continue: ");
}
break;
case 2: printf("\nWITHDRAW MENU");
printf("\n*****************************");
printf("\n Your current balance is %f",balance);
printf("\n Please enter withdraw amount:");
scanf(" %f",&withdrawal);
if(withdrawal <balance)
{
balance = balance - withdrawal;
printf("\n you have withdrawn %f \n your current balance is %f",withdrawal,balance);
}
else
{
printf("\n error: you didn't have sufficient money to withdrawal");
}
printf("\n press any key to continue:");
break;
case 3: printf("\nBALANCE INQUIRY MENU");
printf("\n your account balance is %f",balance);
printf("\n press any key to continue:");
break;
case 4: printf("\nFAST CASH MENU");
printf("\n*****************************");
printf("\nFast cash options\n1. 100\n2. 200\n3. 500\n4. 1000\n5. 3000\n6. 5000");
printf("\n Enter choice:");
scanf("%d",&choice2);
switch(choice2)
{
case 1: if(balance >= 100)
{
 balance = balance - 100;
withdrawal = 100;
printf("\n you have withdrawn %f\n your current balance is %f",withdrawal,balance);
}
else
{
printf("\n Insufficient funds for this transaction");
}

break;
case 2: if(balance >= 200)
{ balance= balance - 200;
withdrawal =200;
printf("\n you have withdrawn %f\n your current balance is %f",withdrawal,balance);
}
else
{
printf("\n insufficient funds for this transaction");
}

break;
case 3: if(balance >= 500)
{ balance = balance - 500;
withdrawal = 500;
printf("\n you have withdrawn %f\n your current balance is %f",withdrawal,balance);
}
else
{
printf("\n Insufficient funds for this transaction");
}

break;
case 4: if(balance >= 1000)
{
balance = balance - 1000;
withdrawal = 1000;
printf("you have withdrawn %f\n your current balance is %f",withdrawal,balance);
}
else
{
printf("Insufficient funds for this transaction");
}

break;
case 5: if(balance >= 3000)
{
balance = balance - 3000;
withdrawal = 3000;
printf("you have withdrawn %f\n your current balance is %f",withdrawal,balance);
}
else
{
printf("Insufficient funds for this transaction");
}
break;
case 6: if(balance >= 5000)
{
balance = balance - 5000;
withdrawal = 5000;
printf("you have withdrawn %f\n your current balance is %f",withdrawal,balance);
}
else
{
printf("Insufficient funds for this transaction");
}
break;
case 7: if(balance>5000)
{

     printf("Error, please select from the given options\n");
break;
}
}
default : printf(" Thank you for using this ATM ");
break;
}
}while(choice != 5);
getch();
}


