#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double heron(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a + b <= c || a + c <= b || b + c <= a) {
            continue;
        }

        double area_total = heron(a, b, c);
        double s = (a + b + c) / 2.0;
        double r = area_total / s;
        double area_inscrito = PI * r * r;
        
        double R = (a * b * c) / (4.0 * area_total);
        double area_circunscrito = PI * R * R;

        double area_sunflowers = area_circunscrito - area_total;
        double area_violets = area_total - area_inscrito;
        double area_roses = area_inscrito;

        printf("%.4lf %.4lf %.4lf\n", area_sunflowers, area_violets, area_roses);
    }

    return 0;
}
