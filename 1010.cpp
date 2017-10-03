///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1010//////////
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
            int a, a2;
            double b, c, b2, c2, t;
    /////////////////////////////
    
    scanf("%d %lf %lf\n %d %lf %lf", &a, &b, &c, &a2, &b2, &c2);//A ORDENAÇÃO DAS VARIÁVEIS NESTE PROBLEMA É FUNDAMENTAL
    
    t = (b*c) + (b2*c2);// O PROBLEMA PEDE A ENTRADA DA UNIDADE COMO VALOR INTEIRO, MAS LEMBRE DOS EXERCÍCIOS ANTERIORES, EVITE FAZER CONTAS DOUBLE COM INT, TRANSFORME TUDO EM DOUBLE
 
    printf("VALOR A PAGAR: R$ %.2lf\n", t);//2.lf PARA APENAS 2 CASAS DECIMAIS
    return 0;
}
