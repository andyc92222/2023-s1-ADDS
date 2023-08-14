#include <string>
#include <iostream>
using namespace std;

int pow10(int number){
    int result = 1;
    while(number>0){
        number = number/10;
        result = result*10;
    }
    return result/10;
}

int main(){

    int i = 5000;
    cout<<6*pow10(i)<<endl;
    return 0;
}
