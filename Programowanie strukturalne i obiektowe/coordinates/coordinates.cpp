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

    //double distance = sqrt(x * x + y * y);
    std::cout << "Odleglosc to: " << distance << "\n";
}
void CoordinateTestVersion2()
{
    Point userPoint;
    std::cout << "Podaj X";
    std::cin >> userPoint.x;
    std::cout << "Podaj Y";
    std::cin >> userPoint.y;

    //double distance = sqrt(x * x + y * y);
    std::cout << "Odleglosc to: " << distance << "\n";
}
double calculateDistance(int a, int b)
{
    return sqrt(a * a + b * b);
}
int main()
{
    CoordinateTestVersion2();
}