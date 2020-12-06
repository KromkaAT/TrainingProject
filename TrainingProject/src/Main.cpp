#include "../include/Zlecenie.hpp"
#include <iostream>
#include <random>
#include<ctime>
#include <cstdlib>


namespace zadanie
{
	enum class StanPacjenta // Stan w jakim znajduje sie pacjent
	{
		ZDROWY,
		CHORY,
		ZAGROZONY,
		MARTWY,
		WYMAGA_OPERACJI
	};
	struct Pacjent // Dane pacjenta
	{
		std::string imie{ "Dawid" };
		std::string nazwisko{ "Plantecki" };
		StanPacjenta stan{ StanPacjenta::ZDROWY };
	};
	enum class ChorobaPacjenta // Choroby jakie pacjent mo¿e mieæ
	{
		BRAK,
		ZAWAL_SERCA,
		WSTRZAS_MOZGU,
		ZLAMANIE,
		ZATRUCIE_POKARMOWE,
		BIALACZKA
	};

}

	int main()
	{
		std::string zgoda{};
		zadanie::Pacjent kofokles[]
		{
			{"Andrzej", "Majewski", zadanie::StanPacjenta::ZDROWY} // Dane wybranego pacjenta
		};
		std::cout << "Pacjent : ";
		for (size_t i{ 0 }; i < std::size(kofokles); ++i) // Wypisanie imienia i nazwiska pacjenta
		{
			zadanie::Pacjent zp{ kofokles[i] };
			std::cout << zp.imie << " " << zp.nazwisko << "\n";
		}
		
		zadanie::StanPacjenta Stan{ zadanie::StanPacjenta::CHORY};				// Wybranie stanu pacjenta
		zadanie::ChorobaPacjenta Choroba{ zadanie::ChorobaPacjenta::ZLAMANIE }; // Wybranie choroby pacjenta
		std::cout << "Stan pacjenta : ";
		switch (Stan) // Wypisanie stanu pacjenta i jego choroby
		{
		case zadanie::StanPacjenta::ZDROWY:
			std::cout << "Zdrowy!\n";
			break;
		case zadanie::StanPacjenta::CHORY:
			std::cout << "Chory!\n";
			switch (Choroba)
			{
			case zadanie::ChorobaPacjenta::BIALACZKA:
				std::cout << "Choroba Pacjenta : Bialaczka\n";
				break;
			case zadanie::ChorobaPacjenta::ZATRUCIE_POKARMOWE:
				std::cout << "Choroba Pacjenta : Zatrucie pokarmowe\n";
				break;
			case zadanie::ChorobaPacjenta::ZLAMANIE:
				std::cout << "Choroba Pacjenta : Zlamanie\n";
				break;
			case zadanie::ChorobaPacjenta::BRAK:
				break;
			}
			break;
		case zadanie::StanPacjenta::ZAGROZONY:
			std::cout << "Zagrozony!\n";
			switch (Choroba)
			{
			case zadanie::ChorobaPacjenta::WSTRZAS_MOZGU:
				std::cout << "Choroba Pacjenta : Wstrzas mozgu\n";
				break;
			case zadanie::ChorobaPacjenta::ZAWAL_SERCA:
				std::cout << "Choroba Pacjenta : Zawal serca\n";
				break;
			}
			break;
		case zadanie::StanPacjenta::MARTWY:
			std::cout << "Martwy!\n";
			break;
		case zadanie::StanPacjenta::WYMAGA_OPERACJI:
			std::cout << "Wymaga operacji!\n";
			break;
		}
		std::mt19937 mersenne{ (unsigned int)std::time(nullptr) }; // Losowoœæ szansy na prze¿ycie pacjenta
		std::uniform_int_distribution<> zakres{ 1, 2 };
		std::uniform_int_distribution<> zakres1{ 1, 3 };
		int szansa{ zakres(mersenne) };		// Zwykle choroby
		int szansa1{ zakres1(mersenne) };   // Choroby bardziej zaawansowane
		switch (Stan)
		{
		case zadanie::StanPacjenta::ZDROWY: // Wypisanie co sie stalo z pacjentem po operacji/chorobie
			break;
		case zadanie::StanPacjenta::CHORY:
			if (Choroba == zadanie::ChorobaPacjenta::ZLAMANIE);
			if (szansa == 1)
			{
				std::cout << "Zlamanie zroslo sie poprawnie!\n";
				break;
			}
			else
			{
				std::cout << "Zlamanie zroslo sie niepoprawnie!\n";
				break;
			}
			if (szansa == 1)
				std::cout << "Pacjent wyzdrowial!\n";
			else
				std::cout << "Pacjent umarl!\n";
			break;
		case zadanie::StanPacjenta::ZAGROZONY:
			if (szansa1 == 1)
				std::cout << "Pacjent wyzdrowial!\n";
			else
				std::cout << "Pacjent umarl!\n";
			break;
		case zadanie::StanPacjenta::MARTWY:
			break;
		case zadanie::StanPacjenta::WYMAGA_OPERACJI:
			std::cout << "Czy zgadzasz sie na operacje?\n"; 
			std::cin >> zgoda;
			if (zgoda == "tak" || zgoda == "Tak" || zgoda == "TAK")
			{
				std::cout << "Wyraziles zgode na operacje. \nWynik operacji : \n";
				if (szansa == 1)
					std::cout << "Pacjent pomyslnie przeszedl operacje!\n";
				else
					std::cout << "Pacjent umarl!\n";
			}
			else
				break;
			break;
		}

		return 0;
	}

	