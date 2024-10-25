// Вариант 13. Лютов А.В. группа 30022

//Напишите функцию, выполняющую действие в соответствии с вашим вариантом. Напишите
//функцию main, в которой примените вашу функцию для нескольких массивов :
//- Для встроенных массивов, количество и значения элементов которых заданы при
//инициализации.Создайте несколько массивов, чтобы протестировать различные случаи.
//- Для массива, размещённого в динамической памяти, количество элементов которого
//должно быть введено с клавиатуры, а значения элементов сгенерированы случайно.

// Задание: В массиве целых чисел определить наибольшую длину монотонно убывающего фрагмента
// последовательности(то есть такого фрагмента, где каждый элемент меньше предыдущего)
// Примечание:
#include "massFunc.cpp"

int main()
{
	const int SIZE = 5;
	int mass[SIZE]  { 5, 4, 3, 10, 9 };
	int mass2[SIZE] { 1, 3, 3, 3, 2 };
	int* pmass = new int[SIZE](1, 2, 3, 2, 1);
	int nullMass[SIZE] {0, 0, 0, 0, 0};
	int* pNullMass = nullptr;

	PaintArr(mass, SIZE);
	std::cout << "Longest decreasing sequence: "
		      << GetLongestDecreasingSequence(mass, SIZE) << '\n';

	PaintArr(mass2, SIZE);
	std::cout << "Longest decreasing sequence: "
		      << GetLongestDecreasingSequence(mass2, SIZE) << '\n';

	PaintArr(pmass, SIZE);
	std::cout << "Longest decreasing sequence: "
		      << GetLongestDecreasingSequence(pmass, SIZE) << '\n';

	PaintArr(nullMass, SIZE);
	std::cout << "Longest decreasing sequence: "
		<< GetLongestDecreasingSequence(nullMass, SIZE) << '\n';

	PaintArr(pNullMass, SIZE);
	std::cout << "Longest decreasing sequence: "
		<< GetLongestDecreasingSequence(pNullMass, SIZE) << '\n';

	return 0;
}
