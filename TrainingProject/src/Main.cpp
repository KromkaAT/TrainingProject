#include "../include/Zlecenie.hpp"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	const char cio[]{ "tak o" };
	std::cout << std::size(cio) << "\n";
	std::cout << std::strlen(cio) << "\n";
	const char* tez{ "tak o" };
	std::cout << std::strlen(tez) << "\n";

	if (!std::strcmp(cio, tez))
		std::cout << "brawo\n";
	else
		std::cout << "nie dla psa\n";

	std::string_view zmienna{ "smierc konfidentom" };
	zmienna = zmienna.substr(0, 6);
	std::cout << zmienna << "\n";

	return 0;
}