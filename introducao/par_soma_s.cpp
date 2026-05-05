#include <iostream>

bool par_soma_s(int a[], int n, int s){
    for( int i =0; i<n;i++){
        for (int j = i+1; j<n;j++){
            if(a[i] + a[j] == s){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int s, n;
    std::cin >> s >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    bool r = par_soma_s(a,n, s);
    std::cout << r << std::endl;
    return 0;
}