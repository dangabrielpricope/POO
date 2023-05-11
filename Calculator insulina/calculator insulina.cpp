#include "pch.h"
#include <iostream>
#include <cmath>
#include <list>
#include <string>
#include <chrono>

using namespace System;
using namespace std;

class Glicemie {
public:
	float glicemie;
	float carbohidrati;
	string timestamp;
	float insulina;

	Glicemie()
	{
		this->glicemie = 0;
		this->carbohidrati = 0;
		this->insulina = 0;
		this->timestamp = Now();
	}

	Glicemie(float glic, float carnohidrati)
	{
		this->glicemie = glic;
		this->carbohidrati = carnohidrati;
		this->insulina = 0;
		this->timestamp = Now();
	}

	string ToString() {
		string str = "\n\n";
		str += "Timestamp: " + timestamp;
		str += "Glicemie: " + std::to_string(glicemie) + "\n";
		str += "Carbohidrati: " + std::to_string(carbohidrati) + "\n";
		str += "Insulina: " + std::to_string(insulina) + "\n";

		return str;
	}

	Glicemie operator+(Glicemie const& obj)
	{
		Glicemie res;
		res.insulina = insulina + obj.insulina;
		return res;
	}

private:

	string Now() {
		const auto now = std::chrono::system_clock::now();
		const std::time_t t_c = std::chrono::system_clock::to_time_t(now);
		return std::ctime(&t_c);
	}
};

class CalculatorInsulina {
public:
	CalculatorInsulina()
	{

	}

	Glicemie CitesteGlicemie() {
		float glicemie, carb;


		cout << "Glicemie = ";
		glicemie = Citeste();
		cout << "Carbohidrati = ";
		carb = Citeste();

		Glicemie* g = new Glicemie(glicemie, carb);
		g->insulina = ((g->glicemie - 100) / 65) + (g->carbohidrati / 18);

		return *g;
	}

private:
	float Citeste() {
		string str;
		cin >> str;

		if (is_number(str) == false) {
			throw 504;
		}
		else {
			return stoi(str);
		}
	}

	
	bool is_number(const std::string& s)
	{
		std::string::const_iterator it = s.begin();
		while (it != s.end() && std::isdigit(*it)) ++it;
		return !s.empty() && it == s.end();
	}
};

class IstoricInsulina {
public:

	~IstoricInsulina()
	{
		_istoric.clear();
	}

	void Print() {
		string istoricPrint = "\n---------------------------\n";
		istoricPrint += "Istoric Insulina"; 
		istoricPrint += "\n---------------------------\n";

		Glicemie allInsulina;
		int it = 0;
		for (Glicemie i : _istoric)
		{
			istoricPrint += i.ToString();
			allInsulina = allInsulina + i;
			it++; 
		}

		float all = allInsulina.insulina;
		istoricPrint += "\nCantitate totala de insulina administrata: ";
		istoricPrint += std::to_string(all);

		cout << istoricPrint;
	}

	friend IstoricInsulina Add(IstoricInsulina istoric, Glicemie glicemie);

private:
	list<Glicemie> _istoric; 
};

IstoricInsulina Add(IstoricInsulina istoric, Glicemie glicemie) {
	istoric._istoric.push_back(glicemie);
	return istoric;
}

class Meniu {
public:
	void Start() {
		int cmd;
		bool stop = false;

		while (stop == false) {
			try {
				AfiseazaMeniu();
				cmd = CitesteComanda();
				stop = ExecutaComanda(cmd);
			}
			catch (int errorCode) {
				AfiseazaEroare(errorCode);
			}
		}
	}

private:
	CalculatorInsulina calculator;
	IstoricInsulina istoric;

	void AfiseazaMeniu() {
		cout << "\n\n";
		cout << "-----------MENIU--------\n";
		cout << "1. Calcul insulina\n";
		cout << "2. Afiseaza istoric\n";
		cout << "3. Exit\n";
		cout << "------------------------\n";
		cout << "Introdu optiune: ";
	}

	int CitesteComanda() {
		string optiuneStr;
		cin >> optiuneStr;

		if (is_number(optiuneStr) == false) {
			throw 503;
		}
		else {
			return stoi(optiuneStr);
		}

		return stoi(optiuneStr);
	}

	bool is_number(const std::string& s)
	{
		std::string::const_iterator it = s.begin();
		while (it != s.end() && std::isdigit(*it)) ++it;
		return !s.empty() && it == s.end();
	}

	bool ExecutaComanda(int cmd) {
		Glicemie g;

		switch (cmd) {
		case 1:
			g = calculator.CitesteGlicemie();
			cout << "Insulina de administrat: " + std::to_string(g.insulina);
			istoric = Add(istoric, g);
			return false;
			break;

		case 2:
			istoric.Print();
			return false;
			break;

		case 3:
			return true;
			break;

		default:
			throw 502;
			break;
		}
	}

	void AfiseazaEroare(int errorCode) {
		string errorMessage = "\nERROR: ";

		

		switch (errorCode)
		{
		case 502:
		case 503:
			errorMessage += "Invalid meniu option.";
			break;

		case 504:
			errorMessage += "Invalid data for insulin calculation!!!";
			break;

		default:
			errorMessage += "Unknown error code.";
			break;
		}

		errorMessage += "\n";

		cout << errorMessage;
	}
};

int main()
{
	Meniu meniu;
	meniu.Start();
}
