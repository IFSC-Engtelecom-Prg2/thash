//
// Created by msobral on 28/05/23.
//

#ifndef THASH_THASH_IMPL_H
#define THASH_THASH_IMPL_H

namespace prg2 {
    template<typename V>
    thash<V> thash_cria() {
        return thash<V>();
    }

    template<typename V>
    thash<V> thash_destroi(thash<V> &tab) {
        return thash<V>();
    }

    template<typename V>
    void thash_adiciona(thash<V> &tab, const string &chave, const V &valor) {

    }

    template<typename V>
    bool thash_existe(const thash<V> &tab, const string &chave) {
        return 0;
    }

    template<typename V>
    V thash_obtem(thash<V> &tab, const string &chave) {
        return V{};
    }

    template<typename V>
    void thash_remove(thash<V> &tab, const string &chave) {

    }

    template<typename V>
    bool thash_vazio(const thash<V> &tab) {
        return 0;
    }

    template<typename V>
    uint32_t thash_tamanho(const thash<V> &tab) {
        return 0;
    }
}
#endif //THASH_THASH_IMPL_H
