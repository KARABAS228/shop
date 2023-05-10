#include "values.h"
#include "Sklad.h"

void Sklad()
{
	std::cout << "  ID            Название      кол-во  цена\n";
	for (short i = 0; i < sizeID; i++)
	{
		std::cout << arrID[i] << "  "
			<< arrName[i] << "  "
			<< arrValue[i] << "  "
			<< arrPrice[i] << "  \n";

	}
}
