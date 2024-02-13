#include <stdio.h>
#include <string.h>
#include <iostream>

class alumnos
{
private:
    char* nombre;
    int grades;
public:
   
};

class aprobados: alumnos
{
private:
    char*  aprobado;
public:
    aprobados(/* args */);
    ~aprobados();
};

int lista(int grades,char* nombre,int turno)
{
    if (grades>=7)
    {
        turno++;
        void UseSmartPointer()
        {
            SmartPointer* sp=new SmartPointer(nombre);
        }
        
    }
     return turno;  
}

int main (){

int turno=0;

printf("ingresa nombre de alumnos y sus califiaciones; cuando el numero de aprobados sea 10 se mostrará la lista y se detendrá el programa");

do
{
    printf("nombre");
    scanf("%s",nombre);
    printf("calificación");
    scanf("%i",grades);
    lista(grades,nombre,turno);
} while (turno=10);




    return 0;
}




//profe la verdad ya se me achichanorro el cerebro, me marca errores si uso el lunguaje de c++ pero tampoco me auto completa con c tons ya me hize bolas, pero ahí esta mas o menos lo poqito que entendi