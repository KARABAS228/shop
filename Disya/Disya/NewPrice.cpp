#include "values.h"
#include "Sklad.h"
#include "NewPrice.h"

void NewPrice(int ID, int newPrice)
{
	Sklad();
	std::cout << "������� ����� ������: ";
	std::cin >> ID;
	std::cout << "������� ����� ����: ";
	std::cin >> newPrice;
	arrPrice[ID - 1] = newPrice;
	Sklad();
}