#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    string x1 = "This app will determine your investment result after 10 years";
    string x2 = "Please input investment amount, and interest rate";

    float investment, interest, total;

    cout << x1 << endl;
    cout << x2 << endl; 

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







