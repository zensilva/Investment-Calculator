#pragma once
#include <vector>

class BankInvestmentCalculator {
private:
    float initialInvestment;           // Initial investment amount
    float annualInterestRate;          // Annual interest rate
    int investmentDuration;            // Investment duration in years
    float monthlyDeposit;              // Monthly deposit amount
    std::vector<float> openingAmounts; // Yearly opening amounts
    std::vector<float> depositedAmounts; // Yearly deposited amounts
    std::vector<float> totals;         // Yearly total amounts
    std::vector<float> interests;      // Yearly earned interests
    std::vector<float> closingBalances; // Yearly closing balances

public:
    BankInvestmentCalculator(float initialInvestment, float annualInterestRate, int investmentDuration, float monthlyDeposit);
    // Constructor for initializing the investment calculator with provided values

    void calculateBalancesWithoutMonthlyDeposit();
    // Calculates the investment balances without additional monthly deposits

    void calculateBalancesWithMonthlyDeposit();
    // Calculates the investment balances with additional monthly deposits

    void printYearlyTable(bool withMonthlyDeposit);
    // Prints the yearly table of balances and interests, either with or without monthly deposits
};