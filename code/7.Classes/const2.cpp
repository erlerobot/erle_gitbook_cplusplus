class Point {
public:
 double x, y;
 Point(double nx, double ny) {
 x = nx; y = ny; cout << "2-parameter constructor" << endl;
 }
};

int main() {
 Point p(2.0, 3.0); // 2-parameter constructor
                   // p.x is 2.0, p.y is 3.0
}