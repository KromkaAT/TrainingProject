#include "../include/Zlecenie.hpp"
#include <iostream>
#include <random>
#include<ctime>
#include <cstdlib>


namespace zadanie
{
	enum class StanPacjenta
	{
		ZDROWY,
		CHORY,
		ZAGROZONY,
		MARTWY
	};
	struct Pacjent
	{
		std::string imie{ "Dawid" };
		std::string nazwisko{ "Plantecki" };
		StanPacjenta stan{ StanPacjenta::ZDROWY };

	};

}

	int main()
	{
		zadanie::Pacjent kofokles[]
		{
			{"Dawicki", "Kofok", zadanie::StanPacjenta::ZAGROZONY}
		};
		std::cout << "Pacjent : ";
		for (size_t i{ 0 }; i < std::size(kofokles); ++i)
		{
			zadanie::Pacjent zp{ kofokles[i] };
			std::cout << zp.imie << " " << zp.nazwisko << "\n";
		}
		
		zadanie::StanPacjenta Stan{ zadanie::StanPacjenta::ZAGROZONY};
		std::cout << "Stan pacjenta : ";
		switch (Stan)
		{
		case zadanie::StanPacjenta::ZDROWY:
			std::cout << "Zdrowy!\n";
			break;
		case zadanie::StanPacjenta::CHORY:
			std::cout << "Chory!\n";
			break;
		case zadanie::StanPacjenta::ZAGROZONY:
			std::cout << "Zagrozony!\n";
			break;
		case zadanie::StanPacjenta::MARTWY:
			std::cout << "Martwy!\n";
			break;
		}
		std::mt19937 mersenne{ (unsigned int)std::time(nullptr) };
		std::uniform_int_distribution<> zakres{ 1, 2 };
		int szansa{ zakres(mersenne) };
		switch (Stan)
		{
		case zadanie::StanPacjenta::ZDROWY:
			break;
		case zadanie::StanPacjenta::CHORY:
			if (szansa == 1)
				std::cout << "Pacjent wyzdrowial!\n";
			else
				std::cout << "Pacjent umarl!\n";
			break;
		case zadanie::StanPacjenta::ZAGROZONY:
			if (szansa == 1)
				std::cout << "Pacjent wyzdrowial!\n";
			else
				std::cout << "Pacjent umarl!\n";
			break;
		case zadanie::StanPacjenta::MARTWY:
			break;
		}
		return 0;
	}

	