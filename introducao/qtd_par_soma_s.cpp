#include <iostream>

int qtd_par_s(int s, int n, int a[]){
    int qtd = 0;
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            if(a[i] + a[j] == s){
                qtd+=1;
            }
        }
    }
    return qtd;             
}

int main(){
    int s, n;
    std::cin >> s >> n;
    int a[n];
    for (int i=0; i < n; i++){
        std::cin >> a[i];
    }
    int r = qtd_par_s(s, n, a);
    std::cout << r << std::endl;
    return 0;
}