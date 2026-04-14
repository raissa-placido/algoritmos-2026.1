#include <iostream>

bool primo_div2(int n){
    int divs=0;
    for (int i=1; i<= n/2; i++){
        if(n % i == 0){
            divs+=1;
        }
    }
    if(divs == 1){
        return true;
    }
    return false;
}

int main(){ 
    int n;
    std::cin >> n;
    bool r = primo_div2(n);
    std::cout << r << std::endl;
    return 0;
}