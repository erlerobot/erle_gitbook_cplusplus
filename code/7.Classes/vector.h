
class Point {
public:
 double x, y;
 void offset(double offsetX, double offsetY);
 void print();
};
class Vector {
public:
 Point start, end;
 void offset(double offsetX, double offsetY);
 void print();
};