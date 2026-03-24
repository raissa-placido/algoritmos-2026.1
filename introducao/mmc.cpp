#include <iostream>

int mmc(int a, int b){
    int x = a;
    if (a < b){
        x = b; // x é sempre guarda o valor maior
    }
    while ((x % a) != 0 || (x % b) != 0 ){ 
        // quando encontrar um número que seja múltiplo por A e B, para
        x = x +1;
    }
    return x;
}

int main(){
    int b, a;
    std::cin >> a >> b;
    int resultado = mmc( a, b);
    std::cout << resultado << std::endl;

}