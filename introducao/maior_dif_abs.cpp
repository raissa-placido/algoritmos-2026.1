#include <iostream>
#include <cmath>

int maior_dif_abs(int a[], int tamanho){
    
    int maior_dif = 0;
    
    for(int i = 1; i<tamanho; i++){
        int dif_atual = std::abs(a[i] - (a[i-1]));
        if (dif_atual > maior_dif){
            maior_dif = dif_atual;
        }
    }
    return maior_dif;
}

int main(){
    int n ;
    std::cin >> n;
    int a[n];
    for( int i=0; i<n; i++){
        std::cin >> a[i];
    }
    int r = maior_dif_abs(a, n);
    std::cout << r << std::endl;
    return 0;
}