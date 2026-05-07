#include <iostream>

int qtd_infectados(int n){
    int qtd_dias = 1;
    for (int i=2; i < n; i *=2){ 
        qtd_dias +=1;
    } 
    return qtd_dias;
}

int main(){
    int n;
    std::cin >> n;
    int r = qtd_infectados(n);
    std::cout << r << std::endl;
    return 0;

}