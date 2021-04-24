#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int edad = 20;
        char nombre[13];
 
        printf("%s \n", "Ingrese su nombre");
        scanf("%s",&nombre);
        printf("%s \n", "Ingrese su edad");
        scanf("%d",&edad);

        printf("Su nombre es %s y su edad es %d. \n",nombre,edad);

        system("pause");
        return 0;
       
}