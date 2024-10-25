
#ifndef MASS_FUNC
#define MASS_FUNC

#include <iostream>

int GetLongestDecreasingSequence(const int* arr, const int size) {
	if (arr == nullptr || size == 0) {
		return 0;
	}
	if (size == 1) {
		return 1;
	}
	int lastlong = 0;
	int currentLong = 1;
	for (int i = 1; i < size; i++) {
		if (arr[i] < arr[i - 1]) {
			currentLong++;
		}
		else {
			lastlong = (currentLong > lastlong) ? (currentLong) : (lastlong);
			currentLong = 1;
		}
	}
	lastlong = (currentLong > lastlong) ? (currentLong) : (lastlong);
	return lastlong;
}

void PaintArr(const int* arr, const int size) {
	std::cout << "Mass: ";
	if (arr == nullptr) {
		std::cout << '\n';
		return;
	}
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';

}


#endif // !MASS_FUNC

