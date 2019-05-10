//Current bug: this code prints 5 4 3 2 1 0, instead of 5 4 3 2 1
//
//Although it's usually presented as "my code is not passing the tests"

#include <iostream>
using namespace std;
 
int main() {
    // Simple for loop that counts down from n to 1
 
    int n=5;
 
    for (int i=n; i >= 0; i--) {
       cout << i << " ";
    }

    cout << endl;

    return 0;
}

