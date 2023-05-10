#include "WholePurchase.h"

void AddValue(int addValue, int ID)
{
	Sklad();

	std::cout << "¬ведите номер товара: ";
	std::cin >> ID;
	std::cout << "¬ведите кол-во добавл€емого товара: ";
	std::cin >> addValue;
	arrValue[ID - 1] += addValue;
	Sklad();

}
void RevueValue(int addValue, int ID)
{
	Sklad();

	std::cout << "¬ведите номер товара: ";
	std::cin >> ID;
	std::cout << "¬ведите кол-во убавл€емого товара: ";
	std::cin >> addValue;
	arrValue[ID - 1] -= addValue;
	Sklad();
}
void Purchase()
{
	short totalsum = 0;
	int value, currID = 0, currCount = 0;
	int choise = -1;
	int* checkID;
	int size = 0;

	std::cout << "¬ведите количество покупок: ";
	std::cin >> size;
	checkID = new int[size];
	for (short i = 0; i < size; i++)
	{


		do
		{
			std::cout << "\n¬ведите ID товара: ";
			std::cin >> currID;
			std::cout << "\n¬ведите количество товара: ";
			std::cin >> currCount;
		} while ((currID < 1 && currID> 10) && (currCount > arrValue[currID - 1] && currCount < 1));
		totalsum += arrPrice[currID - 1] * currCount;
		arrValue[currID - 1] -= currCount;
	}
	std::cout << "»того: " << totalsum << "\n";
	delete[]checkID;
}