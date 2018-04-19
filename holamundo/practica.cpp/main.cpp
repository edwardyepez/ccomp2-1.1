#include <iostream>
using namespace std;



/*/bool es_perfecto(int x){
int c=0;
//para determinar los divisores
for(int i=1;i<x;i++){
    if(x%i==0){
        cout<<i;
        c=c+i;
    }}

if(c==x){
    return true;
}
else{
    return false;
}}*/





int potencia(int base, int exponente){

    if (exponente==1){

      return base;}
    else{
    return base * potencia(base, exponente-1);
}
}
bool esprimo(int num){
    if(num<1){
        return false;
        }
    for(int i=2;i<num;i++){
        if(!(num%i)){
            return false;
        }
    }
    return true;
}


void secuenciaPrimos(int num){
    int i=0;
    int x=2;
    while(i<num){
        if(esprimo(x)){
            cout<<x<<" ";
            i++;
        }
        x++;
    }
}

void intercambio(int a,int b){
a=a+b;
b=a-b;
a=a-b;
cout<<"el valor de a es:"<<a;
cout<<" \n";
cout<<"el valor de b es:"<<b;
cout<<" \n";
}
void bits(int a , int b){
a=a^b;
b=a^b;
a=a^b;
cout<<"el valor de a es:"<<a;
cout<<"\n";
cout<<"el valor de b es:"<<b;


}


int main(){
 cout<<"la potencia es:"<<potencia(7,4);
 //cout<<"la secuencia de primos es:"<<secuenciaPrimos(15)<<endl;
 //cout<<"Ingrese un limite: ";
 //cin>>n;
 cout<<" \n";
 cout<<"EL NUMERO ES PRIMO?:"<<esprimo(121);
 //lista_primos(n);
 //cout<<es_perfecto(8);
 cout<<"\n";
 intercambio(1,2);
 bits(4,5);
  return 0;
}
