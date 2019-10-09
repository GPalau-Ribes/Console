#include <iostream>

const int width = 25;
const int height = 50;

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

void paintMap(const char(&map)[height][width])
{
	system("cls");
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
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
	paintMap(map);

	std::cin.ignore();
	std::cin.get();
	return 0;
}