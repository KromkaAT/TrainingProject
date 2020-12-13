#include "../include/Zlecenie.hpp"
#include <iostream>
#include <bitset>
	
int main()
{ 
	unsigned int liczbadziesietna{ 0b110111u };	// W {} podajemy liczbe zapisan¹ w systemie binarnym zakoñczona 'u', przed liczba musi byc '0b'
	std::bitset<6> liczbabinarna { liczbadziesietna }; // W <> podajemy z ilu cyfer jest zbudowana liczba binarna
	std::cout << "Liczba w zapisie binarnym : " << liczbabinarna.to_string() << "\n";
	std::cout << "Liczba w zapisie dziesietym : " << liczbadziesietna << "\n";
	return 0;
}

	