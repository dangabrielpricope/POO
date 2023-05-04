#include "pch.h"
#include "stdafx.h"
#include "LoyaltyScheme.h"

#using <mscorlib.dll>
using namespace System;

LoyaltyScheme::LoyaltyScheme()
{
	Console::WriteLine("Congratulation, you now qualify for bonus points");
	totalPoints = 0;
}

void LoyaltyScheme::EarnPointsOnAmount(double amountSpent)
{
	int points = (int)(amountSpent / 10);
	totalPoints += points;
	Console::Write("New bonus points earned: ");
	Console::WriteLine(points);
}

void LoyaltyScheme::RedeemPoints(int points)
{
	if (points <= totalPoints)
	{
		totalPoints -= points;
	}
	else
	{
		totalPoints = 0;
	}
}

int LoyaltyScheme::GetPoints()
{
	return totalPoints;
}