#include "FullShop.h"

void Shop()
{
	while (true)
	{
		short choise, totalSum = 0;

		do
		{


			std::cout << "\t\t��� ������������ ������� 23 �������!!!\n";
			std::cout << "1 - ������ �������\n2 - �������� �����\n3 - ��������� �����\n4 - ��������� �����\n5 - �������� ���� �������\n0 - �����\n\n�����: ";
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