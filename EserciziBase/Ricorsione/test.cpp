#include <iostream>

using namespace std;

int res(int numero, int molt) {
    if(molt == 0) {
        return 0;
    }
    else {
        return numero + res(numero, molt-1);
    }
}


int main(int argc, char const *argv[]) {

    int numero = 2;
    int molt = 4;

    int tot = res(numero, molt);

    cout << tot << endl;
  
    return 0;
}
