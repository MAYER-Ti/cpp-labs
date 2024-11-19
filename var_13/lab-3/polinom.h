#ifndef POLINOM_H
#define POLINOM_H

#include <iostream>

class Polinom
{
public:
    Polinom();
    Polinom(double k[], int degree);
    ///
    /// \brief getValue
    /// \param x
    /// \return
    /// Возвращает значение полинома при заданном значении
    double operator()(double x);
    Polinom operator+(const Polinom& pol);
    Polinom operator-(const Polinom& pol);
    Polinom operator*(const Polinom& pol);
    friend std::ostream& operator<<(std::ostream& out, const Polinom& pol);
private:
    ///
    /// \brief MAX_DEGREE
    /// Максимальная степень
    static const int MAX_DEGREE = 100;
    ///
    /// Коэффициенты полинома, где индекс массива это степень члена полинома
    double m_koefs[MAX_DEGREE] {0};
};

#endif //POLINOM_H
