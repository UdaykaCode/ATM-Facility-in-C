# Banking System Program

## Overview
This program is a simple banking system written in C. It allows users to perform basic banking operations such as checking their balance, depositing money, and withdrawing money. The program includes error handling for invalid inputs and ensures that operations are carried out securely.

## Features
- **Check Balance:** View the current account balance.
- **Deposit Money:** Add money to the account.
- **Withdraw Money:** Subtract money from the account, provided sufficient funds are available.
- **Exit Program:** Safely exit the program.

### Operations
- **Check Balance:**
  - Displays the current balance in the account.

- **Deposit Money:**
  - Prompts the user to enter an amount to deposit.
  - Validates the input to ensure the amount is greater than 0.
  - Updates the balance if the input is valid.

- **Withdraw Money:**
  - Prompts the user to enter an amount to withdraw.
  - Validates the input to ensure the amount is greater than 0 and does not exceed the current balance.
  - Updates the balance if the input is valid.

- **Exit Program:**
  - Safely terminates the program with a farewell message.

### Error Handling
- If an invalid amount (e.g., less than or equal to 0) is entered for deposit or withdrawal, the program displays an error message and retains the current balance.
- If the withdrawal amount exceeds the current balance, the program displays an error message indicating insufficient funds.

## Sample Output
```
--------------------------
Developed by: @UdaykaCode
--------------------------
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
--------------------------
Enter Your Choice --> 1
***************************************
Your Current Balance is: 0.00 Rs.
***************************************

--------------------------
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
--------------------------
Enter Your Choice --> 2
***************************************
Enter Amount to Deposit: 500
--Deposit Successful!
***************************************

--------------------------
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
--------------------------
Enter Your Choice --> 3
***************************************
Enter Amount to Withdraw: 200
--Transaction Successful!
***************************************

--------------------------
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
--------------------------
Enter Your Choice --> 4
**Thank You! Have a nice day.**
```

## Notes
- Ensure valid inputs are provided for each operation.
- The program uses floating-point numbers to handle monetary values.

## Author
Developed by: @UdaykaCode
