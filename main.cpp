#include <iostream>
#include "thash.h"

using namespace prg2;
using namespace std;

int main() {
    auto tab = thash_cria<int>();

    thash_adiciona(tab, "coisa", 10);
    thash_adiciona(tab, "algo", 20);
    thash_adiciona(tab, "treco", 30);

    cout << "Tamanho da tabela: " << thash_tamanho(tab) << endl;
    cout << "Valor da chave \"coisa\": " << thash_obtem(tab, "coisa") << endl;
    cout << "Valor da chave \"treco\": " << thash_obtem(tab, "treco") << endl;
    cout << "Chave \"bagaça\" existe na tabela ? " << thash_existe(tab, "bagaça") << endl;

    thash_destroi(tab);

    return 0;
}
