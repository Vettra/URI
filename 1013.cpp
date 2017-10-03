///////////////////////////////////
//////Maratona de Programação//////
////Supervisor: Douglas Cardoso////
///////////////////////////////////
//////URI JUGDE: Nível básico//////
//////////Exercício: 1013//////////
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
 
////////RESOLVIDO COM APLICAÇÃO DE FÓRMULA////////
int main()
{
 
    //////////VÁRIAVEIS//////////
        int a, b, c, maior;
    /////////////////////////////
    scanf("%d %d %d", &a, &b, &c);//%d PARA INT
 
 
    maior = (((a + b + abs(a - b)) /2) + ((b + c + abs(b - c)) /2) + abs(((a + b + abs(a - b)) /2) - ((b + c + abs(b - c)) /2))) /2 ;//ABS É UMA FUNÇÃO DE "VALOR ABSOLUTO", DA BIBLIOTECA MATH.H
    printf("%d eh o maior\n", maior);
    return 0;
}




////////EXEMPLO POR IF'S////////
int main()
{
 
    //////////VÁRIAVEIS//////////
        int a, b, c;
    /////////////////////////////
    scanf("%d %d %d", &a, &b, &c);//%d PARA INT
    
 
    if(a > b && a > c)// SE "A" FOR MAIOR DO QUE "B" E "A" FOR MAIOR DO QUE "C" OS "{ }" IRAM SER EXECUTADAS POR CUMPRIREM A CONDIÇÃO
    {
      printf("%d eh o maior\n", a);
    }
    
    if(b > a && b > c)// SE "B" FOR MAIOR DO QUE "A" E "B" FOR MAIOR DO QUE "C" OS "{ }" IRAM SER EXECUTADAS POR CUMPRIREM A CONDIÇÃO
    {
      printf("%d eh o maior\n", b);
    }
    
    if(c > a && c > b)// SE "C" FOR MAIOR DO QUE "A" E "C" FOR MAIOR DO QUE "B" OS "{ }" IRAM SER EXECUTADAS POR CUMPRIREM A CONDIÇÃO
    {
      printf("%d eh o maior\n", c);
    }
    return 0;
}
