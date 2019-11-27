#ifndef _MYBANK_H_
#define _MYBANK_H_



#define arr_size 50

#define closed 0 //mean i can use the account for new costumer
#define opened 1 //mean that i cant use the accounte 'cause alredy used!
#define balance 1 // balance index
#define status 0 // status index

static double accounts[arr_size][2] = {0};


void openAccount();
void checkBalance();
void Deposit();
void interest ();
void withdrawal();
void closeAccount();
void showOpenAccounts();
void closeAccounts();

#endif