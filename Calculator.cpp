#include "BankInvestmentCalculator.h"
#include <iostream>
#include <iomanip>

// Constructor
BankInvestmentCalculator::BankInvestmentCalculator(float initialInvestment, float annualInterestRate, int investmentDuration, float monthlyDeposit)
    : initialInvestment(initialInvestment), annualInterestRate(annualInterestRate), investmentDuration(investmentDuration),
    monthlyDeposit(monthlyDeposit)
{
}

// Calculate balances without monthly deposit
void BankInvestmentCalculator::calculateBalancesWithoutMonthlyDeposit()
{
    // Clear previous data
    openingAmounts.clear();
    depositedAmounts.clear();
    totals.clear();
    interests.clear();
    closingBalances.clear();

    float total = initialInvestment;

    for (int year = 1; year <= investmentDuration; year++)
    {
        float openingAmount = total;
        openingAmounts.push_back(openingAmount);
        depositedAmounts.push_back(0.0f);
        totals.push_back(total);

        float interest = openingAmount * (annualInterestRate / 100);
        interests.push_back(interest);

        total += interest;

        closingBalances.push_back(total);
    }
}

// Calculate balances with monthly deposit
void BankInvestmentCalculator::calculateBalancesWithMonthlyDeposit()
{
    // Clear previous data
    openingAmounts.clear();
    depositedAmounts.clear();
    totals.clear();
    interests.clear();
    closingBalances.clear();

    float total = initialInvestment;

    for (int year = 1; year <= investmentDuration; year++)
    {
        openingAmounts.push_back(total);
        depositedAmounts.push_back(monthlyDeposit * 12);

        float interest = total * (annualInterestRate / 100);
        interests.push_back(interest);

        total += interest + (monthlyDeposit * 12);

        closingBalances.push_back(total);
    }
}

// Print the yearly table
void BankInvestmentCalculator::printYearlyTable(bool withMonthlyDeposit)
{
    std::cout << "   Year           Year End Balance        Year End Earned Interest" << std::endl;

    // Determine the duration based on whether monthly deposit is included or not
    int duration = withMonthlyDeposit ? investmentDuration : static_cast<int>(closingBalances.size());

    for (int year = 1; year <= duration; year++)
    {
        std::cout << std::setw(4) << year
            << std::setw(18) << "$" << std::fixed << std::setprecision(2) << closingBalances[year - 1]
            << std::setw(25) << "$" << std::fixed << std::setprecision(2) << interests[year - 1] << std::endl;
    }
}