#include "../include/Cwiczenia.hpp" 

int main()
{

	int opcja;
	int ZakresLiczb1, ZakresLiczb2;
	bool PrzesuwanieBitow;
	char BramkaLogicznaOpcja;
	int BityDoWybrania;
	do
	{
		program::WypisanieOpcji();
		std::cin >> opcja;
		switch (opcja)
		{
		case 1:			// przesuwanie bitow
			std::cout << "Chcesz przesunac bity do przodu czy do tylu? (do przodu - 0, do tylu 1) \n";
			std::cin >> PrzesuwanieBitow;
			if (std::cin.fail())
				std::cin.clear();
			program::PrzesuwanieBitow(PrzesuwanieBitow);
			break;
		case 2:			// maski bitowe
			std::cout << "Twoje osiagniecia to : \n";
			program::MaskiBitowe();
			break;
		case 3:			// bramki logiczne
			std::cout << "Ktory rodzaj bramki logicznej chcesz uzyc : \n"
				<< "~ \n"
				<< "& \n"
				<< "| \n"
				<< "^ \n";
			std::cin >> BramkaLogicznaOpcja;
			if (std::cin.fail())
				std::cin.clear();
			std::cout << "Wybierz bity do ktorych chcesz uzyc bramke logiczna (bity do ktorych bedziesz uzywal bramke logiczna to 110)(jezeli wybrales bramke logiczna ~ wybierz opcje 5) \n"
				<< "1. 101 \n"
				<< "2. 010 \n"
				<< "3. 011 \n"
				<< "4. 111 \n"
				<< "5. Wybrales opcje ~\n";
			std::cin >> BityDoWybrania;
			if (std::cin.fail())
				std::cin.clear();
			program::BramkiLogiczne(BramkaLogicznaOpcja, BityDoWybrania);
			break;
		case 4:			// losowanie liczby
			std::cout << "Podaj zakres z jakich liczb chcesz wylosowac liczbe \n";
			std::cin >> ZakresLiczb1 >> ZakresLiczb2;
			if (std::cin.fail())
				std::cin.clear();
			std::cout << program::LosowanieLiczby(ZakresLiczb1, ZakresLiczb2) << "\n";
			break;
		case 5:			// zamykanie programu
			break;
		}
		if (opcja == 5)
		{
			std::cout << "Milego dnia. 5:) \n";
			break;
		}
	} while (true);

	// --------------------------------------------------- \\

	int* TablicaDynamiczna{ new int[] {1, 3, 5, 7, 11, 13, 17} };
	std::cout << "Ta tablica ma zapisane w sobie takie liczby : \n";
	for (size_t i{}; i < 7; ++i)
		std::cout << TablicaDynamiczna[i] << " ";
	delete[] TablicaDynamiczna;
	return 0;
}