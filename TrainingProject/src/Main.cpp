#include "../include/Zlecenie.hpp"
#include <iostream>
#include <iterator>

namespace api
{
	enum class TypBota
	{
		CASUAL,
		CARKOWY,
		POD_SERWER_MC,
		JOCHEMA
	};

	struct BotDiscord
	{
		std::string nazwa{ "Dawid" };
		unsigned int id{ 0u };
		std::string wiadomoscPowitalna{ "H e l o!" };
		TypBota typ{ TypBota::CASUAL };
	};

	void ZamienBota(BotDiscord* bot, BotDiscord zamiennik)
	{
		*bot = zamiennik;
	}
}

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
		
		zadanie::StanPacjenta Stan{ zadanie::StanPacjenta::MARTWY};
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

		return 0;
	}

	