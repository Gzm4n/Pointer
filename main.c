#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float a, b, c, d, e, f, pb, p1, p2, p3, area1, area2, area3, area4, at;
    float puntos[3][3];
    puntos[0][0]=ingresarComponente('X',1);
    puntos[0][1]=ingresarComponente('Y',1);
    puntos[0][2]=ingresarComponente('Z',1);
    puntos[1][0]=ingresarComponente('X',2);
    puntos[1][1]=ingresarComponente('Y',2);
    puntos[1][2]=ingresarComponente('Z',2);
    puntos[2][0]=ingresarComponente('X',3);
    puntos[2][1]=ingresarComponente('Y',3);
    puntos[2][2]=ingresarComponente('Z',3);
    puntos[3][0]=ingresarComponente('X',4);
    puntos[3][1]=ingresarComponente('Y',4);
    puntos[3][2]=ingresarComponente('Z',4);
    calcularDistancias(puntos,&a,&b,&c,&e,&d,&f);
    calcularPerimetro(&pb,&a,&b,&c);
    calcularPerimetro(&p1,&d,&e,&a);
    calcularPerimetro(&p2,&e,&f,&c);
    calcularPerimetro(&p3,&d,&b,&f);
    area1= calcularArea(&pb,&a,&b,&c);
    area2= calcularArea(&p1,&d,&e,&a);
    area3= calcularArea(&p2,&e,&f,&c);
    area4= calcularArea(&p3,&d,&b,&f);
    areaTotal(&at, area1, area2, area3, area4);
    imprimir(at,pb);


    return 0;
}