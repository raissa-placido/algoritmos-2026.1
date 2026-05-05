#include <iostream>
#include <cmath>

int maior_soma(int a[], int tamanho){
    
    int maior_soma= 0;
    
    for(int i = 0; i<tamanho-1; i++){
        int soma_atual = std::abs(a[i] + a[i+1]);
        if (soma_atual > maior_soma){
            
            maior_soma= soma_atual;
        }
    }
    return maior_soma;
}

int main(){
    int n ;
    std::cin >> n;
    int a[n];
    for( int i=0; i<n; i++){
        std::cin >> a[i];
    }
    int r = maior_soma(a, n);
    std::cout << r << std::endl;
    return 0;
}