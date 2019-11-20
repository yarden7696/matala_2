#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#define arr_size 50
#define closed 0 //mean i can use the account for new costumer
#define opened 1 //mean that i cant use the accounte 'cause alredy used!
#define balance 1 // balance index
#define status 0 // status index


int accounts[arr_size][2];
int acount_amount = 0;



/////////////////////////////////////////
///////////  Declerations   ////////////
///////////////////////////////////////

void openAccount();
void checkBalance();
void Deposit();
void interest ();
void withdrawal();
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
The function get an account number and print the balance on the screen only if the account
 number is open.
*/

void checkBalance(){
    int randomAcoount;
    printf (" enter an account nunber between 901 to 950 : ");
    scanf( "%d" , &randomAcoount);
if ( (randomAcoount> 950 ) || (randomAcoount<901)) 
{
    printf( " account number dosnt exist! \n");
}
else  // if the account number is proper
{
if ( accounts[randomAcoount-901][status] == opened) 
{
printf(" The balance in account nunmber : %d is : %d \n", randomAcoount, accounts[randomAcoount-901][balance]);
}
else // account nunber is close
{
printf( " This account number is close ! \n ");
}
}
}

/*
The function get an account number and print the sum after the withdrawal
*/
void withdrawal()
{
    int account1;
    int withdraw;
    
    printf (" enter an account nunber: ");
    scanf( "%d" , &account1);
    if ( (account1> 950 ) || (account1<901)) 
{
    printf( " account number dosnt exist! \n");
}   
else // number account is exist 
{
    if( accounts[account1-901][status] == opened  )
    {
        printf("Amount?");
       scanf("%d", &withdraw);
       if( accounts[account1-901][balance]>= withdraw)
       {
           accounts[account1-901][balance]=account[account1-901][balance]-withdraw;
printf("The new balance after the withdrawal is: %d \n",account[account1-901][balance] );
    }
    else // there isnt enough money 
    {
    printf("There isnt enough money for withdrawal ! \n");
    }
}
else
 {
printf(" This account number is close ! \n");
}
}
}

void interest ()
{
    int index;
    int interest;
    double percent;
    printf("Interest rate ? ");
    scanf("%d", &interest);
    percent = interest/100.0;
    for(index=0; index<50; index++ )
    {
        if(accounts[index][status]==opened)
        {

         double d = accounts[index][balance]*percent;   
            accounts[index][balance] += d; 
        }
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
