#include <iostream>

bool array_ord(int n, int a[]){
    for(int i =1; i<=n; i++){
        if(a[i-1] > a[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    bool r = array_ord(n,a);
    std::cout << r << std::endl;
    return 0;
}