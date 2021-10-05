#include "Circle.h"

void Circle::set_radius(double r) {
        radius = r;
}
double Circle::area() {
        return M_PI * radius * radius;
}
double Circle::perimeter() {
        return 2 * M_PI * radius;
}
double Circle::get_radius() {
        return radius;
}


