#include "../include/Math.hpp"
#include <iostream>
#include <iterator>

	int main()
	{
		int dzialanie{};
		int a{}, b{}, c{};
		std::cout << "Witaj w kalkulatorze. \n Wybierz dzialanie :\n 1. Dodawanie \n 2. Odejmowanie \n 3. Mnozenie \n 4. Dzielenie \n 5. Dzielenie z reszta \n";
		std::cout << " 6. Potega\n 7. Pierwiastek\n 8. Twierdzenie Pitagorasa\n 9. Obwod kwadratu\n 10. Obwod prostokata\n 11. Obwod trojkata rownobocznego\n 12. Obwod trojkata roznobocznego\n 13. Obwod trojkata rownoramiennego\n 14. Pole kwadratu\n 15. Pole prostokata\n 16. NWD\n 17. NWW\n";
		do
		{
			std::cin >> dzialanie;
			switch (dzialanie)
			{
			case 1:
				std::cout << "\nPodaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::dodawanie(a, b) << "\n\n";
				break;
			case 2:
				std::cout << "\nPodaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::odejmowanie(a, b) << "\n\n";
				break;
			case 3:
				std::cout << "\nPodaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::mnozenie(a, b) << "\n\n";
				break;
			case 4:
				std::cout << "\nPodaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::dzielenie(a, b) << "\n\n";
				break;
			case 5:
				std::cout << "\nPodaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::dzielenie_z_reszta(a, b) << "\n\n";
				break;
			case 6:
				std::cout << "\nPodaj podstawe potegi i wykladnik potegi : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::potega(a, b) << "\n\n";
				break;
			case 7:
				std::cout << "\nPodaj liczbe a (pierwiastek 2 stopnia) :\n";
				std::cin >> a;
				std::cout << "Wynik : " << dzialania::pierwiastek(a) << "\n\n";
				break;
			case 8:
				std::cout << "\nPodaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::pitagoras(a, b) << "\n\n";
				break;
			case 9:
				std::cout << "\n Podaj liczbe a : \n";
				std::cin >> a;
				std::cout << "Wynik : " << dzialania::obwod_kwadratu(a) << "\n\n";
				break;
			case 10:
				std::cout << "\n Podaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::obwod_prostokota(a, b) << "\n\n";	
				break;
			case 11:
				std::cout << "\n Podaj liczbe a  : \n";
				std::cin >> a;
				std::cout << "Wynik : " << dzialania::obwod_trojkata_rownobocznego(a) << "\n\n";
				break;
			case 12:
				std::cout << "\n Podaj liczbe a, b i c : \n";
				std::cin >> a >> b >> c;
				std::cout << "Wynik : " << dzialania::obwod_trojkata_roznobocznego(a, b, c) << "\n\n";
				break;
			case 13:
				std::cout << "\n Podaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::obwod_trojkata_rownoramiennego(a, b) << "\n\n";
				break;
			case 14:
				std::cout << "\n Podaj liczbe a : \n";
				std::cin >> a;
				std::cout << "Wynik : " << dzialania::pole_kwadratu(a) << "\n\n";
				break;
			case 15:
				std::cout << "\n Podaj liczbe a i b : \n";
				std::cin >> a;
				std::cout << "Wynik : " << dzialania::pole_prostokata(a, b) << "\n\n";
				break;
			case 16:
				std::cout << "\n Podaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::nwd(a, b) << "\n\n";
				break;
			case 17:
				std::cout << "\n Podaj liczbe a i b : \n";
				std::cin >> a >> b;
				std::cout << "Wynik : " << dzialania::nww(a, b) << "\n\n";
				break;
			default:
				std::cout << "\nNie wolno!\n\n";
			}
		} while (true);

		return 0;
	}

	