#include <iostream>

bool primo_new(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n % 2 ==0){
        return false;
    }

    int divs = 1;
    for (int i=3; i<= n/2; i++){
        if(n % i == 0){
            divs +=1;
        }
    }
    return divs;
}

int main(){ 
    int n;
    std::cin >> n;
    bool r = primo_new(n);
    std::cout << r << std::endl;
    return 0;
}