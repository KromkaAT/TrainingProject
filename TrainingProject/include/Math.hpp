#ifndef TP_MATH_HPP
#define TP_MATH_HPP
#include <cmath>


namespace dzialania
{
	inline int dodawanie(int a, int b)
	{
		int x{a + b};
		return x;
	}
	inline int odejmowanie(int a, int b)
	{

		int x{a - b};
		return x;
	}
	inline int mnozenie(int a, int b)
	{
		int x{a * b};
		return x;
	}
	inline int dzielenie(int a, int b)
	{
		int x{a / b};
		return x;
	}
	inline int dzielenie_z_reszta(int a, int b)
	{
		int x{a % b};
		return x;
	}
	inline double potega(int a, int b)
	{
		double x{ std::pow(a, b) };
		return x;
	}
	inline double pierwiastek(int a)
	{
		double x{ std::sqrt(a) };
		return x;		
	}
	inline double pitagoras(int a, int b)
	{
		double c{ std::pow(a, 2) + std::pow(b, 2) };
		double x{ std::sqrt(c) };
		return x;
	}
	inline double obwod_kwadratu(double a)
	{
		double x{ a * 4 };
		return x;
	}
	inline int obwod_prostokota(int a, int b)
	{
		int x{ (a * 2) + (b * 2) };
		return x;
	}
	inline int obwod_trojkata_rownobocznego(int a)
	{
		int x{ a * 3 };
		return x;
	}
	inline int obwod_trojkata_roznobocznego(int a, int b, int c)
	{
		int x{ a + b + c };
		return x;
	}
	inline int obwod_trojkata_rownoramiennego(int a, int b)
	{
		int x{ a + (b * 2) };
		return x;
	}
	inline int pole_kwadratu(int a)
	{
		int x{ a * a };
		return x;
	}
	inline int pole_prostokata(int a, int b)
	{
		int x{ a * b };
		return x;
	}
	inline double nwd(double a, double b)
	{
		double x{};
		if (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}

		}
		else
			return a;
	}
	inline double nww(double a, double b)
	{
		double x{ a * b / nwd(a, b) };
		return x;
	}
}

#endif
