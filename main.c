#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *p;
    p = &a;
    system("cls");
    printf("ingrese un valor para la variable:\n");
    scanf("%d",&a);

    while(a>=47 && a<=57){
        printf("error, el valor debe ser mayor que cero:\n");
        scanf("%d",&a);
    }
    system("cls");
    printf("a %d\n",a);
    printf("la direccion es %d\n",&a);
    printf("*p=%p\n", p);
    printf("a=%d\n", *p);
    printf("el tamaño de *p es %d\n", sizeof(p));
//    delete[] p;
    printf("el valor de p es: %d\n", p);
    p= NULL;
    printf("valor de p: %d\n", p);
    getch();
    return 0;
}
