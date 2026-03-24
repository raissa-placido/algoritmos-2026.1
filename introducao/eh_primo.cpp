#include <iostream>

int eh_primo(int n){
    int qtd = 0;
    if (n <= 1){
        return false; 
    }
    for (int i =1; i<=n; i++){
        if( n % 2 == 0){
            ++qtd;
        }
    }
    if (qtd > 2){
        return false;
    }

    return true;
}


int main(){
    int n;
    std::cin >> n;
    bool r = eh_primo(n);
    std::cout << r << std::endl;
    return 0;
}


//ifrn#2024