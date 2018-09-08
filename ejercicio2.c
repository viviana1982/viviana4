#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
int contVocales(char*);

char dato[30];

int main()
{
    pedirDatos();
    contVocales(dato);

    return 0;
}

void pedirDatos(){

    printf("ingrese una cadena de caracteres\n");
    fgets(dato,30,stdin);

}

int contVocales(char *cadena){
    int cont=0, cont_a=0, cont_e=0, cont_i=0, cont_o=0, cont_u=0 ;
    while(*cadena){
        switch(*cadena){
        case 'a': cont_a ++;
        break;
        case 'e':cont_e ++;
        break;
        case 'i': cont_i ++;
        break;
        case 'o': cont_o ++;
        break;
        case 'u': cont_u ++;
        break;

        }
        cadena ++;
    }
    printf("la cantidad de a es: %d\n", cont_a);
    printf("la cantidad de e es: %d\n", cont_e);
    printf("la cantidad de i es: %d\n", cont_i);
    printf("la cantidad de o es: %d\n", cont_o);
    printf("la cantidad de u es: %d\n", cont_u);
    printf("la direccion de memoria: %p\n", cadena);


}



