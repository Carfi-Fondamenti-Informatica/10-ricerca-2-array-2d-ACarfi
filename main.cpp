#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    char nomi[5][15], cognomi[5][15];
    init(nomi);
    init(cognomi);
    inserimento(nomi, cognomi);

    char nome[15], cognome[15];

    inserimento(nome, 15);
    inserimento(cognome, 15);

    int id = ricerca(nomi, cognomi, nome, cognome);

    if (id != -1) {
        cout << "trovato in posizione " << id << endl;
    }else{
        cout << "non trovato" <<endl;
    }
    return 0;
}
