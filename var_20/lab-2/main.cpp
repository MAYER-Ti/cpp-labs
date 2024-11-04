#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>

/// Сусликов В.А. 30022 Вариант 20
/// Задание:
///  Сформировать новую строку, содержащую все латинские буквы, присутствующие в двух
///  заданных строках. Заглавные и строчные буквы не различаются. В итоговой строке буквы
///  должны встречаться по одному разу и следовать в порядке возрастания их кодов ASCII.
/// Примечание:
///  В функциях разрешается использовать библиотечные функции из <cctype> и методы класса
///  string, но запрещается(!) пользоваться функциями из <cstring>.
///

bool Contain(const char* str, const char& c){
    while(*str){
        if(std::tolower(*str) == std::tolower(c)){
            return true;
        }
        str++;
    }
    return false;
}

void GetSortedInAsciiEqualChars(const char* str1, const char* str2, char* sortedEqualChars){
    int iEqualChars = 0;
    while(*str1){
        //Если буква
        if(std::isalpha(*str1)){
            //Если такого символа еще не было
            if(!Contain(sortedEqualChars, *str1)){
                //Если такой символ есть во второй строке
                if(Contain(str2, *str1)){
                    sortedEqualChars[iEqualChars] = *str1;
                    iEqualChars++;
                }
            }
        }
        str1++;
    }
    std::string SortedStr(sortedEqualChars);
    std::sort(SortedStr.begin(), SortedStr.end());
    for(int i = 0; i < SortedStr.size(); i++){
        sortedEqualChars[i] = SortedStr[i];
    }
}

int main()
{
    const int   MAX_N_STRING = 256;
    char*       pBuffer      = new char[MAX_N_STRING];
    char*       pBuffer2     = new char[MAX_N_STRING];
    char*       pBufferOut   = new char[MAX_N_STRING];

    //Чтение исходных данных
    std::ifstream file("input.txt");
    if(file.is_open()){
        file.getline(pBuffer, MAX_N_STRING);
        file.getline(pBuffer2, MAX_N_STRING);
    }
    else {
        std::cout << "Ошибка!: файл не открыт";
    }
    file.close();

    //Обработка данных
    GetSortedInAsciiEqualChars(pBuffer, pBuffer2, pBufferOut);

    std::string tmp = "bacd";
    std::string& stmp = tmp;
    std::sort(stmp.begin(), stmp.end());
    std::cout << tmp.c_str() << "!\n";

    //Вывод обработанных данных
    std::cout << "Строка 1: " << pBuffer << '\n' <<
                 "Строка 2: " << pBuffer2 << '\n' <<
                 "Одинаковые отсортированные буквы ASCII: " << pBufferOut << '\n';

    delete[] pBuffer;
    delete[] pBuffer2;
    delete[] pBufferOut;
    return 0;
}
