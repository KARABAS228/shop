#include "values.h"
#include "Sklad.h"
#include "NewPrice.h"

void NewPrice(int ID, int newPrice)
{
	Sklad();
	std::cout << "¬ведите номер товара: ";
	std::cin >> ID;
	std::cout << "¬ведите новую цену: ";
	std::cin >> newPrice;
	arrPrice[ID - 1] = newPrice;
	Sklad();
}