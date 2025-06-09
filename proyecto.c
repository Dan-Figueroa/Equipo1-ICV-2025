#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int op;
    menuprincipal(op);
}

int menuprincipal(int op){
    printf("Bienvenido al conversor de unidades\n");
    printf("1 Temperatura\n");
    printf("2 Distancia");

    return op;
}

int temperatura(int op){
    printf("Que desea convertir\n");
    printf("1 Celius a Farenheit");
    printf("2 Celius a Kelvin");
    printf("3 Farenheit a Celsius");
    printf("4 Kelvin a Celsius");

}

int distancia(int op){  
}

