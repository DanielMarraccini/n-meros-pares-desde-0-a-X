#include <iostream>

using namespace std;

int main(){

int n;

cout<<"Ingrese un número: "; cin >> n;

cout<<endl<<endl;

for (int i = 0; i <= n; i++){

    if (i % 2 == 0){

        cout << i;
        cout<<endl;
    }
}

return 0;
}
