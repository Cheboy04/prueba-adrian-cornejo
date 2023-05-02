#include <math.h>
#include <stdio.h>
float ingresarCoordenadaX()
{
    float cordx;
    printf("Ingrese la coordenada en x: \n");
    scanf("%f", &cordx);

    return cordx;
}
float ingresarCoordenadaY()
{
    float cordy;
    printf("Ingrese la coordenada en y: \n");
    scanf("%f", &cordy);

    return cordy;
}
float obtenerRadio(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, r, d, e, f, x, y, z;
    b = y3 - y1;
    c = x2 - x1;
    e = pow(b, 2);
    f = pow(c, 2);
    x = e + f;
    y = sqrt(x);
    z = b * c;
    a = b + c + y;
    r = z / a;
    return r;
}

void obtenerArea(float radio, float x1, float y1, float x2, float y2, float x3, float y3)
{
    float pi, b, c, area1, area2, areatot, a;

    b = y3 - y1;
    c = x2 - x1;
     
    area1 = b * c;
    area1 = area1 / 2;

    a = pow(radio,2);
    area2 = 3.14 * a;
    areatot = area1 - area2;

    printf("El radio del circulo es: %.2f\n",radio);
    printf("El area pedida del triangulo es: %.2f\n", areatot);
}
