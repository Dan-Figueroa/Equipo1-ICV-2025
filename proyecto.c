#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//declarar variables para el menu 
int opcion1, opcion2, opcion3;
//declarar variables para la conversion de temperatura
float M=0, KM= 0, Cm =0; 


void Conversiones(){
    //Cm a metros
    printf("Ingrese la cantidad de centimetros: ");
    scanf("%f", &Cm);
    M = Cm / 100;
    printf("La cantidad de centimetros a metros es: %.2f m\n", M);
    
}
void Conversiones2(){
    //metros a kilometros
    printf("Ingrese la cantidad de metros: ");
    scanf("%f", &M);
    KM = M / 1000;
    printf("La cantidad de metros a kilometros es: %.2f km\n", KM);
}

void Conversiones3(){
    //Celsius a Fahrenheit
    float C, F;
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("La temperatura en Fahrenheit es: %.2f °F\n", F);
}

void Conversiones4(){
    //Fahrenheit a Celsius
    float F, C;
    printf("Ingrese la temperatura en Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32) * 5/9;
    printf("La temperatura en Celsius es: %.2f °C\n", C);
}

void Conversiones5(){
    //Kelvin a Celsius
    float K, C;
    printf("Ingrese la temperatura en Kelvin: ");
    scanf("%f", &K);
    C = K - 273.15;
    printf("La temperatura en Celsius es: %.2f °C\n", C);
}

void Conversiones6(){
    //Celsius a Kelvin
    float K, C;
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("La temperatura en Kelvin es: %.2f K\n", K);
}

void menu1()
{

    printf("Seleccione una opcion:\n");
    printf("1. Convertir temperatura\n");
    printf("2. Convertir longitud\n");
    printf("3. Salir\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion1);
}

void menu2()
{
    printf("Seleccione una opcion:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Salir\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion1);
}   



void menu3()
{
    printf("Seleccione una opcion:\n");
    printf("1. Centimetros a metros\n");
    printf("2. Metros a kilometros\n");
    printf("3. Salir\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion2);
}

int main(int argc, char const *argv[])
{
do{
    menu1 ();
    switch (opcion1)
    {
    case 1: 
        menu2();
        switch (opcion1)
        {
        case 1 :
            Conversiones3();
            break;
        case 2:
         Conversiones4();   
        break;

        default:
            break;
        };
        break;

        case 2:
             menu3();
        switch (opcion2)
        {
        case 1:
            Conversiones();

            
            break;
            case 2:
            Conversiones2();
            break;
        
        default:

            break;
        };
            break;

    default:
        break;
    }
}while(opcion1!=3);

    return 0;
}

