// /* creat a structre that can contain data of customers in a bank.  the data to be stored is account number, name, balance in 
// in account. Assume maximum of 200 customers in the bank.
// (1) Write a function to print the Account number and name of contains the field;
// (2) If a customer request for withdrawal or deposit, the form contains the fields:
// Acct no, amount,code(1for deposit,0 for withrawal)
// Write a fuction that prints a message ,"The balance is insufficient for the specified withrawal",
// if on withdrawal the balance falls below Rs.100*/
// #include <stdio.h>
// #include <string.h>

#define MAX_CUSTOMERS 200
struct customer {
    int account_number;
    char name[50];
    float balance;
};
void printAccountDetails(struct customer customers[], int num_customers);
void processTransaction(struct customer customers[], int num_customers, int acct_no, float amount, int code);

int main() {
    struct customer customers[MAX_CUSTOMERS];
    int num_customers = 0;
    customers[num_customers++] = (struct customer){1001, "Alice", 1500.0};
    customers[num_customers++] = (struct customer){1002, "Bob", 2500.0};
    customers[num_customers++] = (struct customer){1003, "Charlie", 500.0};
    customers[num_customers++] = (struct customer){1004, "David", 1200.0};
    customers[num_customers++] = (struct customer){1005, "Eve", 300.0};
    printAccountDetails(customers, num_customers);
    int acct_no = 1003;
    float amount = 450.0;
    int code = 0; // 1 for deposit, 0 for withdrawal

    processTransaction(customers, num_customers, acct_no, amount, code);
    printAccountDetails(customers, num_customers);

    return 0;
}
void printing_customers(struct customers *k, int n);
void printAccountDetails(struct customer customers[], int num_customers) {
    printf("Account details of customers:\n");
    for (int i = 0; i < num_customers; i++) {
        printf("Account Number: %d, Name: %s\n", customers[i].account_number, customers[i].name);
    }
    printf("\n");
}
void processTransaction(struct customer customers[], int num_customers, int acct_no, float amount, int code) {
    for (int i = 0; i < num_customers; i++) {
        if (customers[i].account_number == acct_no) {
            if (code == 1) {
                customers[i].balance += amount;
                printf("Deposited %.2f to account number %d. New balance: %.2f\n", amount, acct_no, customers[i].balance);
            } else if (code == 0) {
                
               if (customers[i].balance - amount < 100) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    customers[i].balance -= amount;
                    printf("Withdrew %.2f from account number %d. New balance: %.2f\n", amount, acct_no, customers[i].balance);
                }
            }
            return; 
                }
    }
    printf("Account number %d not found.\n", acct_no);
}




// #include<stdio.h>
// #include<stdlib.h>
// #define MAX_costomers 200;
// struct customer
// {
//    int acount_no;
//    char name;
//    float balance_in_acount[100];
// };
// void printAccountDetails(struct customer customer[], int num_customers);
// void processTransaction(struct customer customer[], int num_customers, int acct_no, float amount, int code);
// int main()
// {
//     struct customer customers(MAX_customers);
//      int num_customer=0;
//      customer[num_customers++] = (struct customer){1001, "Alice", 1500.0};
//     customer[num_customers++] = (struct customer){1002, "Bob", 2500.0};
//     customer[num_customers++] = (struct customer){1003, "Charlie", 500.0};
//     customer[num_customers++] = (struct customer){1004, "David", 1200.0};
//     customer[num_customers++] = (struct customer){1005, "Eve", 300.0};
//     printAccountDetails(customers, num_customers);
//     int acct_no = 1003;
//     float amount = 450.0;
//     int code = 0; // 1 for deposit, 0 for withdrawal


    
//     return 0;
// }
// void printing_customer(struct customer customer[], int num_customer)
// {       
//     printf("Acount details of customer : \n");
//     for(int i=0;i<num_customer;i++) 
//     {
//         printf("Account Number: %d, Name: %s\n", customer[i].acount_no, customer[i].name);
//     }
//     printf("\n");    
//  }
// void processTransaction(struct customer customers[], int num_customers, int acct_no, float amount, int code)
// {
//     for(int i=0;i<num_customers;i++) 
//      {
//       if (customer[i].acount_no == acct_no) {
//             if (code == 1) {
//                 customer[i].balance_in_acount += amount;
//                 printf("Deposited %.2f to account number %d. New balance: %.2f\n", amount, acct_no, customers[i].balance);
//             } else if (code == 0) {
                
//                if (customer[i].balance_in_acount - amount < 100) {
//                     printf("The balance is insufficient for the specified withdrawal.\n");
//                 } else {
//                     customer[i].balance_in_acount -= amount;
//                     printf("Withdrew %.2f from account number %d. New balance: %.2f\n", amount, acct_no, customers[i].balance);
//                 }
//             }
//             return; 
//                 }
//                 }
// }

//     printf("Account number %d not found.\n", acct_no);
// }


 
