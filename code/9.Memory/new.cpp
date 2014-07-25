class Point {
public:
 int x, y;
 Point(int nx, int ny) {
 x = ny; x = ny; cout << "2-arg constructor" << endl;
 }
};

int main() {
 Point *p = new Point;
delete p;
}