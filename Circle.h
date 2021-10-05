#include <math.h>
# define M_PI          3.141592653589793238462643383279502884L /* pi */

class Circle {
private:
        double radius;
public:
        void set_radius(double);
        double area();
        double perimeter();
        double get_radius();
};


