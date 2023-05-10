#include "FullShop.h"

void Shop()
{
	while (true)
	{
		short choise, totalSum = 0;

		do
		{


			std::cout << "\t\tВас приветствует магазин 23 февраля!!!\n";
			std::cout << "1 - Начать продажу\n2 - Показать склад\n3 - Пополнить склад\n4 - Уменьшить склад\n5 - Изменить цену товаров\n0 - Выход\n\nВыбор: ";
			std::cin >> choise;
			if (choise == 1)
			{
				Purchase();
			}
			else if (choise == 2)
			{
				Sklad();
			}
			else if (choise == 3)
			{
				AddValue(addValue, ID);
			}
			else if (choise == 4)
			{
				RevueValue(addValue, ID);
			}
			else if (choise == 5)
			{
				NewPrice(ID, newPrice);
			}
			else if (choise == 0)
			{
				break;
			}
		} while (choise >= 0 && choise < 6);


	}
}