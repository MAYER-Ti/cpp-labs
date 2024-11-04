#include <iostream>
#include <fstream>
#include "haveEqualsChar.h"

/// Лютов А.В. 30022 Вариант 13
/// Задание:
///  Проверить, есть ли в двух заданных строках одинаковые символы. Функция должна
///  возвращать true, если есть одинаковые символы, false – в противном случае
/// Примечание:
///  В функциях разрешается использовать библиотечные функции из <cctype> и методы класса
///  string, но запрещается(!) пользоваться функциями из <cstring>.
///

int main()
{
    const int MAX_N_STRING = 256;
    char* pBuffer = new char[MAX_N_STRING];
    std::ifstream file("./input.txt");
    if(file.is_open()){
        while(file.getline(pBuffer, MAX_N_STRING)){
            std::cout << "Строка: " << pBuffer << '\n' <<
                         "Одинаковые символы char*: " << HaveEqualsChar(pBuffer) << '\n' <<
                         "Одинаковые символы std::string: " << HaveEqualsChar(std::string(pBuffer)) << '\n';
        }
    }
    else {
        std::cout << "Ошибка!: файл не открыт";
    }
    file.close();
    delete[] pBuffer;
    return 0;
}
