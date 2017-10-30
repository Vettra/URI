///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1021//////////
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
        double x;
        int n100, n50, n20, n10, n5, n2;
        int c100, c50, c25, c10, c5, c1;
    /////////////////////////////
    scanf("%lf", &x);//%lf PARA DOUBLE
    
    
    //NOTAS//
    for(n100=0; 100<=x; n100++)//UM FOR PARA CADA NOTA, REMOVENDO A QUANTIDADE DE X E ADICIONANDO A CÉDULA EM UMA VARÍAVEL//
    {
      x = x - 100;
    }
    
    for(n50=0; 50<=x; n50++)
    {
      x = x - 50;
    }
    
    for(n20=0; 20<=x; n20++)
    {
      x = x - 20;
    }
    
    for(n10=0; 10<=x; n10++)
    {
      x = x - 10;
    }
    
    for(n5=0; 5<=x; n5++)
    {
      x = x - 5;
    }
    
    for(n2=0; 2<=x; n2++)
    {
      x = x - 2;
    }
    
    
    //MOEDAS//
    
    for(c100=0; 1<=x; c100++)//UM FOR PARA CADA NOTA, REMOVENDO A QUANTIDADE DE X E ADICIONANDO A MOEDA EM UMA VARÍAVEL//
    {
      x = x - 1;
    }
    
    for(c50=0; 0.50<=x; c50++)
    {
      x = x - 0.50;
    }
    
    for(c25=0; 0.25<=x; c25++)
    {
      x = x - 0.25;
    }
    
    for(c10=0; 0.10<=x; c10++)
    {
      x = x - 0.10;
    }
    
    for(c5=0; 0.05<=x; c5++)
    {
      x = x - 0.05;
    }
    
    for(c1=0; 0.01<=x; c1++)
    {
      x = x - 0.01;
    }
   
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, c100, c50, c25, c10, c5, c1);//ESPERO QUE ATÉ AQUI VOCÊ NÃO ESQUEÇA O \N!! LOL
    return 0;
}
