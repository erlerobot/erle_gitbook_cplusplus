class Point {
public:
 double x, y;
 Point() {
 x = 0.0; y = 0.0; cout << "Point instance created" << endl;
 }
};

int main() {
 Point p; // Point instance created
         // p.x is 0.0, p.y is 0.0
}