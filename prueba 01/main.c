#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prueba;
    char continua ='s';
    int contadorPos=0;
    int contadorNeg=0;
    int contadorCeros=0;
    int contadorPar=0;
    int contadorImpar=0;

    do{
        printf("Ingrese un numero del -100 al +100\n");
        setbuf(stdin, NULL);
        scanf("%d",&prueba);

        if(prueba>0){
            contadorPos++;
        }

        if(prueba<0){
            contadorNeg++;
        }

        if (prueba ==0){
            contadorCeros++;
        }

        if(prueba%2==0){
            contadorPar++;
        }

        if(prueba%2!=0){
            contadorImpar++;
        }


        printf("El contador de positivos es %d \n", contadorPos);
        printf("El contador de negativos es %d \n", contadorNeg);
        printf("El contador de ceros es %d \n", contadorCeros);
        printf("El contador de pares es %d \n", contadorPar);
        printf("El contador de impares es %d \n", contadorImpar);
        setbuf(stdin, NULL);
        printf("Desea ingresar otro numero\n");
        scanf ("%c",&continua);

    }while(continua != 'n');
return 0;
}
