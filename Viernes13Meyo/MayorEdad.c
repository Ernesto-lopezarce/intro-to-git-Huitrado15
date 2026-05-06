#include <stdio.h>

int main(){

    int edad;
    printf("Indique su edad: ");
    scanf("%d", &edad);
    if(edad >= 18){
        printf("Eres mayor de edad");
    }else{
        printf("Mejor vete a dormir");
    }

    return 0;

}
