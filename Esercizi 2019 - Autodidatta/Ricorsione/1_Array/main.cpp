#include <iostream>

using namespace std;

void RimuoviNumeroLista(int v[], int max) {
    for(int i=0; i < max; i++) {
        cout << v[i] << endl;
    }
    
    cout << endl;
    if(max < 0) return;
    else RimuoviNumeroLista(v, --max);
}


int SommaNumeriLista(int v[], int max, int tot) {
    if(max < 0) return tot;
    else {
        tot += v[max];
        cout << tot << endl;
        SommaNumeriLista(v, --max, tot);
    }
}


int main(int argc, char const *argv[])
{
    int v[3] = {1, 2, 3};
    RimuoviNumeroLista(v, 3);
    int tot = SommaNumeriLista(v, 2, 0);
    cout << tot << endl;
    return 0;
}


