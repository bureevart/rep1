#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    int x;
    int y;
};

/**
 * Расстояние между двумя точками
 *
 * @param point1 первая точка
 * @param point2 вторая точка
 * @return расстояние
 */
double getDistanceBetweenTwoPoints (Point point1, Point point2) {
    double distance = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
    return distance;
}

int main() {
    setlocale(LC_ALL, "Rus");

    Point point1, point2;

    cout << "Введите координаты (x, y) первой точки:" << endl;
    cin >> point1.x;
    cin >> point1.y;

    cout << "Введите координаты (x, y) второй точки:" << endl;
    cin >> point2.x;
    cin >> point2.y;

    cout << "Расстояние между точками: " << getDistanceBetweenTwoPoints(point1, point2) << endl;

    return 0;
}
