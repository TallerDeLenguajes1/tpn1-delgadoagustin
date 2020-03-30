#include <stdio.h>

int cuadrado(int base);
void vcuadrado(int base);
void Invertir(int *a, int *b);
void ordenar(int *a, int *b);

int main(){
    int base, a, b, x=54;

    printf("Ingrese una base entera: ");
    scanf("%d",&base);
    printf("El cuadrado de %d es: %d\n\n",base, cuadrado(base));

    vcuadrado(base);

    printf("\nDireccion de x: %p\n",&x);
    printf("Contenido de x: %d\n\n",x);

    printf("Ingresa el valor de a: ");
    scanf("%d",&a);
    printf("Ingresa el valor de b: ");
    scanf("%d",&b);
    printf("a=%d   b=%d\n",a,b);
    Invertir(&a,&b);
    printf("Invertidos: \n");
    printf("a=%d   b=%d\n",a,b);

    printf("Ordenar dos valores:\nIngrese primer valor: ");
    scanf("%d",&a);
    printf("Ingrese segundo valor: ");
    scanf("%d",&b);
    ordenar(&a,&b);
    printf("%d < %d",a,b);

    getchar();
    return 0;
}

int cuadrado(int base){
    return base*base;
}
void vcuadrado(int base){
    printf("El cuadrado de %d es: %d\n",base, base*base);
}
void Invertir(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b= aux;
}
void ordenar(int *a, int *b){
    if(*a>*b){
        Invertir(a,b);
    }
}
