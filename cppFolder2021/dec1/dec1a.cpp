#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    float investment, interest, total;

    cout << "How Much to Invest : ";
    cin >> investment;
    total = investment;
    cout << "Interest Rate : ";
    cin >> interest;
    interest = interest * .01;
    for(int i = 0; i < 10; ++i){
        total = total + investment + (total * interest);
    }
    printf("Investment After 10 Years : %.2f\n", total);



}







