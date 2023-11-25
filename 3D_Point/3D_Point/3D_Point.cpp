using namespace std;
#include <iostream>
#include <vector>

class Point2D {
private:
    
public:
    int x;
    int y;
    Point2D(int x, int y) : x(x), y(y) {}
    Point2D() : x(0), y(0) {}
};

class Z {
private:
    
public:
    int z;
    Z(int z) : z(z) {}
    Z() : z(0) {}
};

class Point3D : public Point2D, public Z 
{
public:
    Point3D(int x, int y, int z) : Point2D(x, y), Z(z) {}
    Point3D() : Point2D(), Z() {}
    void PrintCoords() {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }

};

int main()
{
    Point3D point;
    point.PrintCoords();
}

