#include <iostream>

using namespace std;

bool primo(int n)
{
    if(n<1){
        return false;
        for(int i = 2;i<=n;i++){
                cout<<","<<i;
            if ((n%2)){
                return true;
            }
        }
    }
    return true;
}

bool palindrome(int numero){
    int r;
    int reverso = 0;
    int resto;

    while(r>0){
        resto=r%10;
        r=r/10;
        reverso=reverso*10+resto;

        (reverso==numero)? return true:return false;
            return true;

    }
    return true;
    }




int main(){
cout << primo(121);
cout << palindrome (121);
return 0;

}







