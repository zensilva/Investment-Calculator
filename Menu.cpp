#include <iostream>
#include <iomanip>
#include "BankInvestmentCalculator.h"

int main()
{
    std::cout << "***********************************" << std::endl;
    std::cout << "******* Data Input ****************" << std::endl;

    // Input variables
    float initialInvestment;
    float annualInterestRate;
    int investmentDuration;
    float monthlyDeposit;

    // Input data from the user
    std::cout << "Initial Investment Amount: ";
    std::cin >> initialInvestment;

    std::cout << "Monthly Deposit: ";
    std::cin >> monthlyDeposit;

    std::cout << "Annual Interest: ";
    std::cin >> annualInterestRate;

    std::cout << "Number of years: ";
    std::cin >> investmentDuration;

    std::cout << "Press any key to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();

    // Calculation and display of balances without monthly deposits
    std::cout << "\n   Balance and Interest Without Additional Monthly Deposits" << std::endl;
    std::cout << "=================================================================" << std::endl;
    std::cout << "   Year\t\tYear End Balance\tYear End Earned Interest" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;

    BankInvestmentCalculator calculator(initialInvestment, annualInterestRate, investmentDuration, monthlyDeposit);
    calculator.calculateBalancesWithoutMonthlyDeposit();
    calculator.printYearlyTable(true);

    // Calculation and display of balances with monthly deposits
    std::cout << "\n   Balance and Interest With Additional Monthly Deposits" << std::endl;
    std::cout << "=================================================================" << std::endl;
    std::cout << "   Year\t\tYear End Balance\tYear End Earned Interest" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;

    calculator.calculateBalancesWithMonthlyDeposit();
    calculator.printYearlyTable(false);

    std::cout << "\n\nThank you for using the Airgead Banking calculator. Goodbye!" << std::endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}