//Angel Camacho
//Oct 23, 2019
//lab 8 
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std; // all ways use this

int main(){
    
    int limit = 25, count = 0;
    string array[limit];
    // this while loop serves as a sentinel loop but untill it reaches the limit (27) and untill the user does CTRL D
    while ( !cin.eof() && count != limit){
        // for redability
        cout << " Please input another string: ";
        // this just alocated what the user inputed
        cin >> array[count];
        count++;
    }
    
    int k = 0; 
    cout << endl;   
    for(k = 0; k < count; k++){
        // first print the word
        cout << endl << array[k] << endl;
        for(int i = 0; array[k][i] != '\0'; i++ ){
            // second print the letters dependant on k since strings are arrays of characters print for i
            cout << array[k][i] << endl;
        }
    }
    
    return 0;
}
