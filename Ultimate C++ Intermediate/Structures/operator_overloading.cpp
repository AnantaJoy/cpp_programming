// operator overloading in c++
#include <iostream>
using namespace std;

struct  Point
{
    int x;
    int y;
    Point operator+(const Point& p) const{
        Point tmp;
        tmp.x = x + p.x;
        tmp.y = y + p.y;
        return tmp;
    }
};

int main(){
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    Point p3 = p1 + p2;
    cout << p3.x << " " << p3.y << endl;
    return 0;
}
