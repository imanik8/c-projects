#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int menu();
void bus();
void cycle();
void rickshaw();
void delete();
void showDetail();
int nor=0,nob=0,noc=0,amount=0,count=0;
int main()
{
    while(1)
    {
    switch(menu())
    {
    case 1:
        bus();
        break;
    case 2:
        cycle();
        break;
    case 3:
        rickshaw();
        break;
    case 4:
        showDetail();
        break;
    case 5:
        delete();
        break;
    case 6:
        exit(0);
    default:
        printf("\n Invalid Choice");
    }
    getch();
    }
}
int menu()
{
    int ch;
    printf("\n1. Enter Bus:");
    printf("\n2. Enter Cycle:");
    printf("\n3. Enter Rickshaw:");
    printf("\n4. Show Status");
    printf("\n5. Delete Data");
    printf("\n6. Exit");
    printf("\n\n Enter Your Choice:\n");
    scanf("%d",&ch);
    return(ch);
}
void delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void showDetail()
{
    printf("\n Number of bus = %d",nob);
    printf("\n Number of cycle = %d",noc);
    printf("\n Number of Rickshaw = %d",nor);
    printf("\n Total Number of Vehicle = %d",count);
    printf("\n Total Gain Amount = %d",amount);
}
void rickshaw()
{
    printf("\n Entry Successful");
    nor++;
    amount=amount+50;
    count++;
}
void cycle()
{
    printf("\n Entry Successful");
    noc++;
    amount=amount+20;
    count++;
}
void bus()
{
    printf("\n Entry Successful");
    nob++;
    amount=amount+100;
    count++;
}
