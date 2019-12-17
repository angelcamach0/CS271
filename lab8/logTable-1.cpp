//Angel Camacho
//Oct 23, 2019
//lab 8 
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    
    cout << "Number\tLog base 2\tLog base 10\t Log base e" << endl;
    
    for(int i = 1; i <= 100; i++){
        
        //print numbers
        cout << setw(4) << i ; 
        // log2
        cout << setw(11) << setprecision(3) << fixed << log2(i);
        // log 10
        cout << setw(17) << setprecision(3) << fixed << log10(i);
        // log e
        cout << setw(17) << setprecision(3) << fixed << log(i) << endl;
        
    }
    return 0;
}
