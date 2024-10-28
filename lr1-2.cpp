#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "ru");
    double z1, z2, b, a;
    std::cout << "Введите a \n";
    std::cin >> a;
    std::cout << "Введите b \n";
    std::cin >> b;
    z1 = pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
    std::cout << "z1 = " << " ; z2 = " << z2;
    return 0;
}

