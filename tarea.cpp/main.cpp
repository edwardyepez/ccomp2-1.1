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



   

    //ejercicio 6
  cout<<"ejercicio 7"<<endl;
  int num,a,b,c,d,e;
    cin >>num;

    a= num%10;
    b= num%100/10;
    c= num%1000/100;
    d= num%10000/1000;
    e= num%100000/10000;

    cout <<e<<"\t"<<d<<"\t"<<c<<"\t"<<b<<"\t"<<a;

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

cout<<"ejercicio 10"<<endl;
    int numero;
    cout<<"ingesa tu numero:"<<endl;
    cin >>numero;

    int a=0;
    int b=1;
    int c;
    for(int i=0;i!=numero;i++){
        c=b+a;
        a=b;
        b=c;
        cout <<a<<" "<<endl;
    }


  return 0;


}
