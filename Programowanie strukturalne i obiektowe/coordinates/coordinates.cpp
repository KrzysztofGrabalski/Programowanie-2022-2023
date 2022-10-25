#include <iostream>

struct Point
{
    int x;
    int y;
};



void CoordinateTestVersion1()
{
    int x, y;
    std::cout << "Podaj X";
    std::cin >> x;
    std::cout << "Podaj Y";
    std::cin >> y;

    double distance = sqrt(x * x + y * y);
    std::cout << "Odleglosc to: " << distance << "\n";
}
void CoordinateTestVersion2()
{
    Point userPoint;
    std::cout << "Podaj X";
    std::cin >> userPoint.x;
    std::cout << "Podaj Y";
    std::cin >> userPoint.y;

    //double distance = sqrt(a * a + b * b);
    std::cout << "Odleglosc to: " << distance << "\n";
}   
double calculateDistance(int a, int b)
{
    return sqrt(a * a + b * b);
}
std::string name;
std::string surname;
int age;
int height;

struct Person
{
    std::string name;
    std::string surname;
    int age;
    int height;
    Point coordinate;
};
int main()
{
    CoordinateTestVersion2();
}
Person p1;
//p1.name


std::string nametab[5];
std::string surnameTab[5];
int ageTab[5];
int heightTab[5];

Person pTab[5];
//pTab[1].name = "Ala"