#include <iostream>
using namespace std;
 
int main() 
{
    int N, M;
    cin >> N;
    cin >> M;
    
    if(M % N == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    
}