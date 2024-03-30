#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    setlocale(LC_ALL,"ressian");
    int x;
    double tochn;
    cout << "введите точность" << "\n";
    cin >> tochn;
    cout <<  "введите х" << "\n";
    cin >> x;
    double sin1 = (double) x;
    int x2 = x * x;
   int n = 1;
double t = x;
    while (true){
        t*=  (double)- x2 / ((2 * n ) * ( 2 * n + 1));
        if (fabs(t) < tochn){
            break;
        }
        sin1 += t;
        n++;
    }
    cout <<setprecision(16)<< sin1 << "\n";
    cout << setprecision(16)<< sin(x) << "\n";
    return 0;

}