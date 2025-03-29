#include <iostream>

int main()
{
    int somme=0;
    int tab[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {somme = somme + tab[i] ;}
    std::cout << "la somme des entiers dans le tableau est"<< somme << std::endl;
 
    
    return 0;
}