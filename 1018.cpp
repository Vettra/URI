///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1018//////////
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
        int x;
        int n100, n50, n20, n10, n5, n2, n1;
    /////////////////////////////
    scanf("%d", &x);//%d PARA INT
    printf("%d\n", x);//DAR O PRINT DA QUANTIDADE ANTES PARA FACILITAR RESOLUÇÃO
    
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
    
    for(n1=0; 1<=x; n1++)
    {
      x = x - 1;
    }
    
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);//ESPERO QUE ATÉ AQUI VOCÊ NÃO ESQUEÇA O \N!! LOL
    return 0;
}
