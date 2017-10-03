///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1012//////////
//////////Gustavo B. Ruiz//////////
///////////////////////////////////
 
///////////////////////////////////
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <locale>
#include <map>
#include <math.h>
#include <set>
#include <sstream>
#include <string>
#include <vector>
///////////////////////////////////
 
int main()
{
 
    //////////VÁRIAVEIS//////////
        double pi=3.14159, a, b, c, t;
    /////////////////////////////
 
    scanf("%lf %lf %lf", &a, &b, &c);//%lf PARA DOUBLE
 
    t = (a*c)/2.0;//ÁREA DO TRIÂNGULO
    printf("TRIANGULO: %.3lf\n", t);
 
    t = pi * pow(c, 2);//ÁREA DO CÍRCULO
    printf("CIRCULO: %.3lf\n", t);
    
    t = ((a + b) * c)/2.0;//ÁREA DO TRAPÉZIO
    printf("TRAPEZIO: %.3lf\n", t);
    
    t = pow(b, 2);//ÁREA DO QUADRADO
    printf("QUADRADO: %.3lf\n", t);
    
    t = a * b;//ÁREA DO RETÂNGULO
    printf("RETANGULO: %.3lf\n", t);
    return 0;
}



//OBS: NESTE CASO PROVAMOS QUE VOCÊ PODE USAR APENAS UMA VARÍAVEL, TROCANDO SEU VALOR POR OUTRO, NÃO TORNANDO NECESSÁRIA UMA VARIAVÉL PARA CADA ÁREA
