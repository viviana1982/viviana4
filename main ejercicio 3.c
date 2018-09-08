#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, *pun1, *pun2, *pun3, suma=0;

    printf("ingrese dos variables tipo entero\n");
    scanf("%d %d",&num1, &num2);

    suma= num1+num2;
    printf("el resultado es:%d\n",suma);

    pun1=&num1;
    pun2=&num2;

    pun3=&suma;
    printf("direcion de num1 es:%p\n",pun1);
    printf("direcion de num2 es:%p\n",pun2);
    printf("direcion de suma es:%p\n",pun3);




    return 0;
}
