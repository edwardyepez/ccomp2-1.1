#include <iostream>
using namespace std;
int main() {
  cout<<"ejercicio 1"<<endl;

  int x;
  cout<<"dime tu edad:"<<endl;
  cin>>x;
  if(x<18){
    cout<<"eres menor de edad"<<endl;

  }else{
    cout<<"eres mayor de edad"<<endl;
  }

  cout<<"ejercicio 2"<<endl;

  int l,i=0;
    cout<<"Escriba un numero limite: "<<endl;
    cin>>l;
    cout<<i;
    while(i<l){
        i++;
        cout<<","<<i;
    }
  cout<<"ejercicio 3"<<endl;

  float a,b,c,mayor;
    float promedio;
    cout<<""<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    cout<<"Ingrese el tecer numero: "<<endl;
    cin>>c;
    mayor=a;
    if(b>a){
        mayor=b;
    }
    if(c>a){
        mayor=c;
    }
    cout<<"El mayor numero es: "<<mayor<<endl;
    promedio=(a+b+c)/3;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;

    /*cout<<"ejercicio 4"<<endl;

    int pri,sec;
    cout<<"Ingrese el primero numero: "<<endl;
    cin>>pri;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>sec;

    if(pri%2==0){
        cout<<pri<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<pri<<" No es multiplo de 2"<<endl;
    }
    if(sec%2==0){
        cout<<sec<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<sec<<" No es multiplo de 2"<<endl;
    }
    if(pri%sec==0){
        cout<<pri<<" Es multiplo de "<<sec<<endl;
    }
    else{
        cout<<pri<<" no es multiplo de "<<sec<<endl;
    }
    if(pri*pri==sec){
        cout<<pri<<" al cuadrado tiene como resultado pri "<<sec<<endl;
    }
    else{
        cout<<pri<<" al cuadrado no tiene como resultado pri "<<sec<<endl;
    }}
    '
    */



    cout<<"ejercicio 5"<<endl;
    int p;
    cout<<"Ingrese un numero: "<<endl;
    cin>>p;
    if(p%2!=0 and p%3!=0 and p%5!=0 and p%7!=0 and p%11){
        cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"No es primo"<<endl;
    }

    //ejercicio 6
    //ejercicio 7

  cout<<"ejercicio 8"<<endl;

  int r,numero,resto,reverso=0;
  cout <<"ingrese numero"<<endl;
  cin >> numero;
  r=numero;
  while(r>0){
    resto=r%10;
    r=r/10;
    reverso=reverso*10+resto;

  }
  if(reverso==numero){
    cout<<"es palindromo"<<endl;

  }
  else{
    cout<<"no es palindromo"<<endl;
  }

  cout<<"ejercicio 9"<<endl;

  int year;
  cout<<"ingrese su anio"<<endl;
  cin>>year;
  if(year%4==0 and year%100!=0 and year%400==0){
    cout<<"es bisiesto"<<endl;
  }
  else{
    cout<<"no es bisiesto"<<endl;
  }





  return 0;


}
