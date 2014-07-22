#include "vector.h"

// vector.cpp - method implementation
void Point::offset(double offsetX, double offsetY) {
 x += offsetX; y += offsetY;
}
void Point::print() {
 cout << "(" << x << "," << y << ")";
}
void Vector::offset(double offsetX, double offsetY) {
 start.offset(offsetX, offsetY);
 end.offset(offsetX, offsetY);
}
void Vector::print() {\\:: indicates which class’ method is being implemented.
 start.print();
 cout << " -> ";
 end.print();
 cout << endl;
}