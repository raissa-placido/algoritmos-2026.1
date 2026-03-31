#include <iostream>

int soma_max(int n, int a[]){
    int soma_max = a[0];
    int soma_atual = a[0];
    

    for (int i = 1; i < n; i++){
        soma_atual += a[i];
        if(soma_max < soma_atual){
            soma_max = soma_atual;
        }
        if(soma_atual < 0){
            soma_atual = 0;
        }
    }
    return soma_max;

}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for (int i =0; i <n; i++){
        std::cin >> a[i];
    }
    int r = soma_max(n, a);
    std::cout << r << std::endl;
    return 0;
}