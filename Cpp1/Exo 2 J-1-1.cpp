#include <iostream>
using namespace std;

//Exercice 2 : Vérification et classification d'un triangle 
int main()
{
    int a{}; int b{}; int c{};
    
    cout<<"Veuillez saisir le premier longueur d'un côté d'un triangle : ";
    cin>>a;
    cout<<"Veuillez saisir le second longueur d'un côté d'un triangle : ";
    cin>>b; 
    cout<<"Veuillez saisir la troisième longueur d'un côté d'un triangle : ";
    cin>>c;
   
    bool est_rectangle = (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a);
    
   if (a + b > c && a + c > b && b + c > a)
   {
       cout << "C'est bien un triangle " ;
       if (a==b && b==c)
       {
           cout<<"qui est équilatéral mais n'est pas rectangle ";
       }
       else if ((a==b || b==c || a==c) && est_rectangle)
       {
           cout<<"qui est rectangle isocèle  " ;
       }
       else if (a==b or b==c || a==c)
       {   cout<<"qui est isocèle mais non rectangle " ;
       }
       else if (est_rectangle)
       {
           cout<<"qui est scalène et rectangle ";
       } 
       else
       {
           cout<<"qui est scalène et non rectangle" ;
       }    
   }
       
   else
   {
       cout << "Ces côtés ne forment pas un triangle " << endl;
   }
   
   return 0;
}

    
    