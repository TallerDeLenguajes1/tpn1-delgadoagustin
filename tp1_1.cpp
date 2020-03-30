#include <stdio.h>

int main(){
    int a = 5;
    int * ptra = &a;

    printf("a. Contenido de ptra: %d\n",*ptra);
    printf("b. Direccion de memoria almacenada en el puntero ptra: %p\n",ptra);
    printf("c. Direccion de memoria de la variable a: %p\n",&a);
    printf("d. Direccion de memoria del puntero ptra: %p\n",&ptra);
    printf("e. Tamaño de memoria de la variable a: %d bytes\n",sizeof(a));
    
    getchar();//Detiene el programa
    return 0;
}