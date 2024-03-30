#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;




int main() {
    double a,b,c;
    cin >> a >> b >> c;
    double d;
    d = b*b - 4 * a * c;
    if (d > 0){
        double x1,x2;
        x1 = (-b) + sqrt(d) / (2 * a);
        x2 = (-b) - sqrt(d) / (2 * a);
        cout << x1 << " " << x2 << endl;
    }
    else if (d == 0){
        double x12;
        x12 = -b / (2*a);
        cout <<  x12 << endl;
    }
    else{
        cout << "none";
    }
 
    
    
}