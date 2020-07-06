#include <stdio.h>
#include <conio.h>
int list();
void deposit();
void last();
void withdraw();
void checkDetail();
int TotalAmount = 1000,amount,amo,tr,TotalDeposit=0,TotalWith=0,TotalTr=0;
int acc;
char a[50];

int main()
{
    printf("\nEnter Your name: ");
    gets(a);
    printf("\nEnter your Account Number: ");
    scanf("%d",&acc);
    while(1)
    {
        switch(list())
        {
        case 1:
            deposit();
            TotalDeposit+=amount;
            break;
        case 2:
            withdraw();
            if(amo<=TotalAmount)
            TotalWith+=amo;
            break;
        case 3:
            transfer();
            if(tr<=TotalAmount)
                TotalTr+=tr;
            break;
        case 4:
            checkDetail();
            break;
        case 5:
            last();
            getch();
            exit(0);
        default:
            printf("\nInvalid Choice");
        }
    }
    getch();
}

int list()
{
    int ch;
    printf("\n1. Deposit Amount");
    printf("\n2. Withdraw Amount");
    printf("\n3. Transfer Amount");
    printf("\n4. Check Details");
    printf("\n6. Exit");
    printf("\nEnter Your Choice");
    scanf("%d", &ch);
    return(ch);
}

void deposit()
{
    printf("\n Enter the amount you want to deposit: ");
    scanf("%d",&amount);
    TotalAmount+=amount;
}

void withdraw()
{
    printf("\n Enter the amount you want to withdraw");
    scanf("%d",&amo);
    if(amo<=TotalAmount)
        TotalAmount-=amo;
    else
        printf("List amount withdraw is not possible");
}

void transfer()
{
    printf("\nEnter the amount you want to transfer");
    scanf("%d",&tr);
    if(tr<=TotalAmount)
        TotalAmount-=tr;
    else
        printf("\n Less Amount Transfer is not possible");
}

void checkDetail()
{
    printf("\nTotal Amount = %d", TotalAmount);
    printf("\nTotal Deposit Amount = %d",TotalDeposit);
    printf("\nTotal Withdraw Amount = %d",TotalWith);
    printf("\nTotal Transfer Amount = %d",TotalTr);
}


void last()
{
    printf("\n*********************************\n");
    printf("\nYour Name = %s",a);
    printf("\nTotal Amount = %d", TotalAmount);
    printf("\nTotal Deposit Amount = %d",TotalDeposit);
    printf("\nTotal Withdraw Amount = %d",TotalWith);
    printf("\nTotal Transfer Amount = %d",TotalTr);
    printf("\n \n *************Thanks*************");
}
