#include <stdio.h>
#include <math.h>

float ingresarComponente(char comp, int num){
    float c;
    printf("Ingrese la componente %c del punto %d: ",comp,num);
    scanf("%f",&c);
    return c;
}

void calcularDistancias(float p[3][3], float *a, float *b, float *c, float *d, float *e, float *f){
    *a = sqrt(pow(p[0][0]-p[1][0],2)+pow(p[0][1]-p[1][1],2)+pow(p[0][2]-p[1][2],2));
    *b = sqrt(pow(p[0][0]-p[2][0],2)+pow(p[0][1]-p[2][1],2)+pow(p[0][2]-p[2][2],2));
    *c = sqrt(pow(p[1][0]-p[2][0],2)+pow(p[1][1]-p[2][1],2)+pow(p[1][2]-p[2][2],2));
    *d = sqrt(pow(p[0][0]-p[3][0],2)+pow(p[0][1]-p[3][1],2)+pow(p[0][2]-p[3][2],2));
    *e = sqrt(pow(p[1][0]-p[3][0],2)+pow(p[1][1]-p[3][1],2)+pow(p[1][2]-p[3][2],2));
    *f = sqrt(pow(p[2][0]-p[3][0],2)+pow(p[2][1]-p[3][1],2)+pow(p[2][2]-p[3][2],2));
}

void calcularPerimetro(float *p, float *a, float *b, float *c){
    *p=*a + *b + *c;
}

float calcularArea(float *p, float *a, float *b, float *c){
    float s= *p /2;
    float area = sqrt(s*(s-*a)*(s-*b)*(s-*c));
    return area;
}

void areaTotal(float *at, float a1, float a2, float a3, float a4){
    *at=a1+a2+a3+a4;
}

void imprimir(float area, float p){
    printf("El perimetro de la base piramidal es: %.2f\n",p);
    printf("El area de la piramide es: %.2f\n",area);
}