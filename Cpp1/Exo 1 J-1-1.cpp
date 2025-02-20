#include <iostream>
using namespace std;


//Exercice 1 : Vérification de l'âge
int main()
{ 
    int age{};
    cout<<"Veuillez entrez votre âge : ";
    cin >> age;
    if (age<18)
    {
        cout<<"Vous êtes mineur"<<endl;
    }
    else if (age<=18 && age<60) 
    {
        cout<<"Vous êtes majeur"<<endl;
    }
    else 
    {   
        cout<<"Vous êtes senior"<<endl;
    }
    return 0;
}    
    