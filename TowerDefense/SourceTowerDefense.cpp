#include <iostream>

const int width = 50;
const int height = 25;

//Función que inicializa el mapa en #
void initMap(char(&map)[height][width])
{
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			map[i][j] = '#';
		}
	}
}

void setHouse(unsigned int x, unsigned int y, unsigned int houseWidth, unsigned int houseHeight, char(&map)[height][width])
{
	if (x - (houseHeight / 2) < 0 || y - (houseWidth / 2) < 0 || x + (houseHeight / 2) >= height || y + (houseWidth / 2) >= width) { std::cout << "ERROR: Out Of Map." << std::endl; std::cin.get(); return; }
	
	for (size_t i = 0; i < houseHeight; i++)
	{
		for (size_t j = 0; j < houseWidth; j++)
		{

		}
	}
	
	return;
}

void paintMap(const char(&map)[height][width])
{
	system("cls");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << map[i][j];
		}
		std::cout << std::endl;
	}
}



int main()
{
	char map[height][width];

	initMap(map);
	setHouse(5, 7, 3, 3, map);
	paintMap(map);

	std::cin.ignore();
	std::cin.get();
	return 0;
}