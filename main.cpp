#include <QCoreApplication>
#include <QTextStream>
#include "rational.h"

QTextStream cin(stdin);
QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Rational a(2, 3); // 2/3
    cout << "a = " << a << endl;
    cout.flush();

    // Перемножаем дроби и выводим результат на экран
//    Rational a(2, 3), b(1, 2), c(3, 4), product;
//    product = a * b * c;
//    cout << "product = " << product << endl;
//    cout.flush();

//    // Складываем дроби и выводим результат на экран
//    Rational x(47, 48), y(15, 16), sum;
//    sum = x + y;
//    cout << "sum = " << sum.numerator() << "/" << sum.denominator() << endl;
//    cout.flush();

//    // Вычитаем дроби и выводим результат на экран
//    Rational m(47, 48), n(15, 16), sub;
//    sub = m - n;
//    cout << "sub = " << sub.numerator() << "/" << sub.denominator() << endl;
//    cout.flush();

    return app.exec();
}
