#include "../include/Zlecenie.hpp"
#include <iostream>
#include <bitset>
#include <cstdlib> 
#include <ctime> 
#include <random> 
#include <string>

int main()
{ 
	int pomidor{};
	using std::cout; // using
	cout << "Siema mordo\nIle chcesz pomidorow kupic kurwa ten?\n";
	std::cin >> pomidor;
	cout << "Kupiles " << pomidor << " pomidorow\nPo co ci je?\n";
	{
		typedef unsigned long long onionsell_t; // Wykorzystanie typedef
		using ilechcesz_t = short;				// Wykorzystanie using zamiast typedef
		ilechcesz_t ile{};
		onionsell_t sprzedane{ ile * 2ull };
		do
		{
			std::cout << "Ile chcesz kupic cebuli?(maksymalnie 11 cebul mozesz kupic jak cos)\n";
			std::cin >> ile;
			if (ile >= 12)
				std::cout << "Gadalem ci ze maksymalnie 11 cebul mozesz kupic pajacu\nNie zobaczysz co sie dzieje z cebulami bo czytasz nie umiesz lebku\n\n";
			break;
			std::cout << "Kupiles " << ile << " cebuli\n";
		} while (ile < 12);

		std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) }; // Ulepszony mersenne
		std::uniform_int_distribution<> zakres{ 1, 15 };
		long jaja{ zakres(mersenne) };
		std::uniform_int_distribution<> jajecznica{ 0, 1 };
		bool dobra{ static_cast<bool>(jajecznica(mersenne)) };

		switch (ile) // To co zrobisz z dana iloscia cebul
		{
		case 1:
			std::cout << "Mozesz z tego zrobic nic\n";
			break;
		case 2:
			std::cout << "Mozesz z tego zrobic nic\n";
			break;
		case 3:
			std::cout << "Mozesz z tego zrobic nic\n";
			break;
		case 4:
			std::cout << "Mozesz z tego zrobic nic\n";
			break;
		case 5:
			std::cout << "Mozesz z tego zrobic nic\n";
			break;
		case 6:
			std::cout << "Mozesz z tego zrobic sok cebulowy\n";
			break;
		case 7:
			std::cout << "Mozesz z tego zrobic sok cebulowy\n";
			break;
		case 8:
			std::cout << "Mozesz z tego zrobic sok cebulowy\n";
			break;
		case 9:
			std::cout << "Mozesz z tego zrobic sok cebulowy\n";
			break;
		case 10:
			std::cout << "Mozesz z tego zrobic sok cebulowy\n";
			break;
		case 11:
			if (jaja < 10)
				std::cout << "Nic nie zrobisz\n";
			else
			{
				std::cout << "Zrobiles ";
				if (dobra == 0)
					std::cout << "bardzo dobra jajecznice z cebula\n";
				else
					std::cout << "bardzo slaba jajecznice z cebula\n";
			}
			break;
		}
		bool chcesz{};
		std::cout << "A moze chcesz se jakies liczby binarne tu na leb se zobaczyc?\n(napisz 1 jak chcesz, a jak nie to 0 i wypad elo)\n"; // Liczby binarne
		std::cin >> chcesz;
		if (chcesz == 1)
			std::cout << "To wybierz co chcesz zrobic\n";
		else
		{
			std::cout << "Naura\n\n\n\n";
			return 0;
		}
		char wybierz{};
		bool przod{};
		std::bitset<3> tako{ 0b110 };
		std::cout << "Chcesz se przesunac bity? \n(t - chce, n - nie chce)\n"; // Przesuwanie bitów
		std::cin >> wybierz;
		if (wybierz == 't')
		{
			std::cout << "1 - do przodu\n0 - do tylu\n";
			std::cin >> przod;
			if (przod == 1)
			{
				tako <<= 1;
				std::cout << tako.to_string() << "\n";
			}
			else if (przod == 0)
			{
				tako >>= 1;
				std::cout << tako.to_string() << "\n";
			}
		}
		else
			std::cout << "nie to nie\n";
		char bramki{};
		do
		{
			std::bitset<5> kolejny{ 0b10011u };
			std::bitset<5> konf{ ~0b10011u };
			std::cout << "Wybierz co chcesz teraz zrobic : \n ~ \n & \n | \n ^ \n e(exit) \n"; // Bramki logiczne
			std::cin >> bramki;
			switch (bramki)
			{
			case '~':
				std::cout << "Wybrales bramke logiczna NOT\n";
				std::cout << konf.to_string() << "\n";
				break;
			case '&':
				std::cout << "Wybrales bramke logiczna AND\n";
				kolejny &= 0b10011;
				std::cout << kolejny.to_string() << "\n";
				break;
			case '|':
				std::cout << "Wybrales bramke logiczna OR\n";
				kolejny |= 0b10011;
				std::cout << kolejny.to_string() << "\n";
				break;
			case '^':
				std::cout << "Wybrales bramke logiczna XOR\n";
				kolejny ^= 0b10011;
				std::cout << kolejny.to_string() << "\n";
				break;
			}
			if (bramki == 'e')
				break;
		} while (true);
		std::cout << typeid(14).name() << "\n\n\n\n";  // Zdobywanie typu wartoœci
	}
	return 0;
}

	