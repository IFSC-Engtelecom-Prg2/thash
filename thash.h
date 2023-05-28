//
// Created by msobral on 28/05/23.
//

#ifndef THASH_THASH_H
#define THASH_THASH_H

#include <string>
#include <stdexcept>
#include <cstdint>

using std::string;

namespace prg2 {

    // Uma tabela hash com chaves do tipo string, e valores de um tipo genérico
    template <typename V>
    struct thash {
        // ???
    };

    // Cria uma tabela hash
    template <typename V>
    thash<V> thash_cria();

    // Destroi uma tabela hash
    template <typename V>
    thash<V> thash_destroi(thash<V> & tab);

    // Adiciona à tabela um par formado por valor e chave
    template <typename V>
    void thash_adiciona(thash<V> & tab, const string & chave, const V & valor);

    // Verifica se uma chave existe na tabela
    template <typename V>
    bool thash_existe(const thash<V> & tab, const string & chave);

    // Obtem o valor associado à chave
    // Se chave não existir, dispara uma exceção std::invalid_argument
    template <typename V>
    V thash_obtem(thash<V> & tab, const string & chave);

    // Remove da tabela uma chave e seu valor asdociado
    // Se chave não existir, dispara uma exceção std::invalid_argument
    template <typename V>
    void thash_remove(thash<V> & tab, const string & chave);

    // Verifica se a tabela está vazia
    template <typename V>
    bool thash_vazio(const thash<V> & tab);

    // Retorna a quantidade de chaves armazenadas na tabela
    template <typename V>
    uint32_t thash_tamanho(const thash<V> & tab);

}

#include "thash-impl.h"
#endif //THASH_THASH_H
