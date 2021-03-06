#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Pascalsches Dreieck\n";

	const int iteratationen = 50;
	unsigned long long pascal[iteratationen][iteratationen];

	pascal[0][0] = 1;
	std::cout << pascal[0][0] << "\n";
	
	for (int i = 1; i < iteratationen; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				pascal[i][j] = 1;
			}else
			{
				pascal[i][j] = pascal[i - 1][j-1] + pascal[i - 1][j];
			}

			std::cout << pascal[i][j] << " ";

		}
		std::cout << "\n";
	}

	getchar();

	return 0;
}