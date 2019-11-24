#include<stdio.h>
#include"myBank.h"

int main()
{
    char operation = 'a';
    printf("myBank Program\n");
    printf("===============\n\n");

    
    while(operation != 'e')
    {
        printf("Transaction type: ");
        scanf("%c", &operation);
        printf("\n");
        switch (operation)
        {
        case 'o':
            openAccount();
            break;
        case 'b':
            checkBalance();
            break;  
        case 'd':
            Deposit();
            break; 
        case 'w':
            withdrawal();
            break; 
        case 'c':
            closeAccount();
            break; 
        case 'i':
            interest ();
            break; 
        case 'p':
            showOpenAccounts();
            break; 
        case 'e':
             closeAccounts();
            break;       

        default:
            printf("wrong input!\n");
            break;
        }
	}

	return 1; 
}