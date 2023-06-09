# Investment Calculator

#### The Investment Calculator is a C++ program that allows you to calculate the balance and earned interest on an investment over a specified duration, with or without monthly deposits. <br><br>It provides a comparison between the two scenarios to help you understand the impact of additional monthly deposits on your investment.

## Features:

- Calculate balance and earned interest without additional monthly deposits.
- Calculate balance and earned interest with additional monthly deposits.
- Print a yearly table showing the year-end balance and earned interest for each year.

## Getting Started:

To use the Bank Investment Calculator, follow these steps:

1. Clone the repository or download the source code files.

2. Open a terminal or command prompt and navigate to the project directory.

3. Compile the source code using a C++ compiler:


4. Run the executable:


5. Enter the initial investment amount, monthly deposit, annual interest rate, and investment duration when prompted.

6. The program will display the balance and earned interest for both scenarios: with and without additional monthly deposits.

7. Review the yearly table to analyze the growth of your investment over the specified duration.

8. Close the application when you're finished.

## Requirements:

- C++ IDE/ Compiler

## Example Output
> ### The calculation of the year-end balance and year-end earned interest depends on <br>whether the calculation is done *with or without* additional monthly deposits.<br>

```***********************************
******* Data Input ****************
Initial Investment Amount: $1000
Monthly Deposit: $100
Annual Interest: 6%
Number of years: 5
Press any key to continue...

   Balance and Interest Without Additional Monthly Deposits
=================================================================
   Year         Year End Balance        Year End Earned Interest
-----------------------------------------------------------------
   Year 1           $1,060.00                      $60.00
   Year 2           $1,123.60                      $63.60
   Year 3           $1,191.02                      $67.42
   Year 4           $1,262.48                      $71.46
   Year 5           $1,338.23                      $75.75

   Balance and Interest With Additional Monthly Deposits
=================================================================
   Year         Year End Balance        Year End Earned Interest
-----------------------------------------------------------------
   Year 1           $2,260.00                      $60.00
   Year 2           $3,595.60                      $135.60
   Year 3           $5,011.34                      $215.74
   Year 4           $6,512.02                      $300.68
   Year 5           $8,102.74                      $390.72



Thank you for using the Airgead Banking calculator. Goodbye! 
``` 
<br>

`Please note that the example output is based on the provided input values.`
## It is imperative to verify that you meet and understand the following conditions:

### 1. Without Additional Monthly Deposits:
   - Year-End Balance: The year-end balance is calculated on an annual basis. The program takes the opening amount (previous year's total) and adds the earned interest for that year.
   - Year-End Earned Interest: The year-end earned interest is the interest earned on the opening amount for that year.

### 2. With Additional Monthly Deposits:
   - Year-End Balance: The year-end balance is calculated on a monthly basis. The program takes the opening amount (previous month's total), adds the earned interest for that month, and adds the monthly deposit amount.
   - Year-End Earned Interest: The year-end earned interest is the total interest earned throughout the year, including both the interest earned on the opening amount and the interest earned on the monthly deposits.

> #### So, the calculation of the year-end balance and year-end earned interest depends on whether additional monthly deposits are considered. <br><br>Without additional monthly deposits, the calculation is done on an annual basis, while with additional monthly deposits, the calculation is done on a monthly basis.
