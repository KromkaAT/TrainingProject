#include "../include/Cwiczenia.hpp" 

namespace program
{
	void WypisanieOpcji()
	{
		std::cout << "Wybierz co chcesz zrobic : \n"
			<< "1. Przesun bity \n"
			<< "2. Maski bitowe \n"
			<< "3. Bramki logiczne \n"
			<< "4. Wylosuj liczbe \n"
			<< "5. Koniec tej czesci \n";
	}
	int LosowanieLiczby(int a, int b)
	{
		std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
		std::uniform_int_distribution zakres {a, b};
		int WylosowanaLiczba{static_cast<int> (zakres(mersenne))};
		return WylosowanaLiczba;
	}
	void PrzesuwanieBitow(bool a)
	{
		std::bitset<4> bity{ 0b1010 };
		if (a == 0)
		{
			bity <<= 1;
		}
		if (a == 1)
		{
			bity >>= 1;
		}
		std::cout << bity << "\n";
	}

	void MaskiBitowe()
	{
		std::bitset<5> Maska{ 0b11001 };
		std::bitset<5> WDG{ 0b1 };
		std::bitset<5> WD{ 0b1 << 1 };
		std::bitset<5> ZN{ 0b1 << 2 };
		std::bitset<5> ZP{ 0b1 << 3 };
		std::bitset<5> ZS{ 0b1 << 4 };
		std::cout << "Osiagniecie : Wejdz Do gry " << ((Maska & WDG).any() ? "Odblokowane" : "Zablokowane")  << "\n";
		std::cout << "Osiagniecie : Wykop Drewno " << ((Maska & WD).any() ? "Odblokowane" : "Zablokowane")   << "\n";
		std::cout << "Osiagniecie : Zasadz Nasiono " << ((Maska & ZN).any() ? "Odblokowane" : "Zablokowane") << "\n";
		std::cout << "Osiagniecie : Zbierz Plony " << ((Maska & ZP).any() ? "Odblokowane" : "Zablokowane")   << "\n";
		std::cout << "Osiagniecie : Znajdz Skarb " << ((Maska & ZS).any() ? "Odblokowane" : "Zablokowane")   << "\n";
 	}
	void BramkiLogiczne(char a, int b)
	{
		std::bitset<3> BramkaLogiczna{ 0b110 };
		std::bitset<5> konf{ ~0b110u };
		switch (a)
		{
		case '~':
			std::cout << konf.to_string() << "\n";
			break;
		case '&':
			switch (b)
			{
			case 1:
				BramkaLogiczna &= 0b101;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 2:
				BramkaLogiczna &= 0b010;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 3:
				BramkaLogiczna &= 0b011;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 4:
				BramkaLogiczna &= 0b111;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			default:
				break;
			}
			break;
		case '|':
			switch (b)
			{
			case 1:
				BramkaLogiczna |= 0b101;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 2:
				BramkaLogiczna |= 0b010;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 3:
				BramkaLogiczna |= 0b011;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 4:
				BramkaLogiczna |= 0b111;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			default:
				break;
			}
			break;
		case '^':
			switch (b)
			{
			case 1:
				BramkaLogiczna ^= 0b101;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 2:
				BramkaLogiczna ^= 0b010;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 3:
				BramkaLogiczna ^= 0b011;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			case 4:
				BramkaLogiczna ^= 0b111;
				std::cout << BramkaLogiczna.to_string() << "\n";
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
}