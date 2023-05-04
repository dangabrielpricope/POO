#include "pch.h"
#include "stdafx.h"
#include "CreditCardAccount.h"

#using <mscorlib.dll>
using namespace System;

void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		if (currentBalance >= creditLimit / 2)
		{
			if (scheme == nullptr)
			{
				scheme = gcnew LoyaltyScheme();
			}
			else
			{
				scheme->EarnPointsOnAmount(amount);
			}
		}
		return true;
	}
}

void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}

CreditCardAccount::CreditCardAccount(long number, double limit)
{
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
	numberOfAccounts++;
	Console::Write("This is account number ");
	Console::WriteLine(numberOfAccounts);
	scheme = nullptr;


}

int CreditCardAccount::GetNumberOfAccounts()
{
	return numberOfAccounts;
}

static CreditCardAccount::CreditCardAccount()
{
	interestRate = 4.5;
	Console::WriteLine("Static constructor called");
}

void CreditCardAccount::RedeemLoyaltyPoints()
{
	if (scheme == nullptr)
	{
		Console::WriteLine("Sorry, you do not have a loyalty scheme yet");

	}
	else
	{
		Console::Write("Points available:");
		Console::Write(scheme->GetPoints());
		Console::Write(". How many points do you want to redeem? ");
		String^ input = Console::ReadLine();
		int points = Convert::ToInt32(input);
		scheme->RedeemPoints(points);
		Console::Write("Points remaining: ");
		Console::WriteLine(scheme->GetPoints());

	}
}