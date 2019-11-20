#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#define arr_size 50
#define closed 0//mean i can use the account for new costumer
#define opened 1//mean that i cant use the accounte 'cause alredy used!
#define balance 1
#define status 0


int accounts[arr_size][2];
int acount_amount = 0;



/////////////////////////////////////////
///////////  Declerations   ////////////
///////////////////////////////////////

void openAccount();
void Deposit();
void closeAccount();
void showOpenAccounts();

/////////////////////////////////////////
///////////     Methods     ////////////
///////////////////////////////////////

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
            /* code */
            break;  
        case 'd':
            Deposit();
            break; 
        case 'w':
            /* code */
            break; 
        case 'c':
            closeAccount();
            break; 
        case 'i':
            /* code */
            break; 
        case 'p':
            showOpenAccounts();
            break; 
        case 'e':
            /* code */
            break;       

        default:
            //printf("wrong input!\n");
            break;
        }
   while((getchar())!='\n');
	}

	return 1; 
        }


/*
the function get first deposit and register to new account
*/
void openAccount()
{
    int index;
    int deposit_amount;
    
	bool isavilble =false;
    for (index = 0;index< 50; index++) {
        if((accounts[index][0] == closed))
            {
                isavilble = true;
                break;
            }
          
    }
     if(isavilble){
        printf("initial deposit? ");
        scanf("%d", &deposit_amount);
        accounts[index][0] = opened;
        accounts[index][1] = deposit_amount;
        printf("\nnumber account: %d opened with income : %d\n" , index+901, accounts[index][1]);
        }
}

/*
the function get account number amount of money and print the new balance
*/
void Deposit( )
{
    int account_num;
    int deposit;
    printf("Account number: ");
    scanf("%d",&account_num);
    account_num = account_num-901;
    if((account_num < 50 || account_num >=0 )&& accounts[account_num][status] == opened)
    {
        printf("Amount: ");
        scanf("%d",&deposit);
        accounts[account_num][balance] += deposit;
        printf("now in account %d the balance is %d\n",account_num+901,accounts[account_num][balance]);
    }
    else
    {
        printf("Error: wrong account number or not opend!\n");
    }
}

/*
the function get account number and close it
*/
void closeAccount()
{
    int account_num;
    int deposit;
    printf("Account number: ");
    scanf("%d",&account_num);
    account_num = account_num-901;
    if((account_num < 50 || account_num >=0 )&& accounts[account_num][status] == opened)
    {
        accounts[account_num][status] = closed;
        printf("account number %d is closed\n\n", account_num+901);
       // printf("%d => %d", account_num+901, accounts[account_num][status]);
    }
    else
    {
        printf("Error: wrong account number or not opend!\n\n");
    }
}

/*
the function display all the open accounts and their balance
*/
void showOpenAccounts()
{

printf("Account number  |   balance\n");
printf("----------------|----------\n");

    for (int i = 0; i < arr_size; i++)
    {
    
        if(accounts[i][status]==opened)
        {
            printf("%d\t\t|\t %d \n",i+901,accounts[i][balance]);
            printf("----------------|----------\n");
        }

    }
    printf("\n");
    
}
