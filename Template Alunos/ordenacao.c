#include "ordenacao.h"

#include <string.h>

void getNome(char nome[]) {
    // substitua por seu nome
    strncpy(nome, "Paulo Ricardo Lisboa de Almeida", MAX_CHAR_NOME);
    nome[MAX_CHAR_NOME - 1] =
        '\0';  // adicionada terminação manual para caso de overflow
}

// a função a seguir deve retornar o seu número de GRR
uint32_t getGRR() { return 1234; }

ssize_t buscaSequencial(int vetor[], size_t tam, int valor,
                        uint64_t* numComparacoes) {
    *numComparacoes = 99;
    return -1;
}

ssize_t buscaSequencialRec(int vetor[], size_t tam, int valor,
                           uint64_t* numComparacoes) {
    *numComparacoes = 99;
    return -1;
}

ssize_t buscaBinaria(int vetor[], size_t tam, int valor,
                     uint64_t* numComparacoes) {
    *numComparacoes = 99;
    return -1;
}

ssize_t buscaBinariaRec(int vetor[], size_t tam, int valor,
                        uint64_t* numComparacoes) {
    *numComparacoes = 99;
    return -1;
}

uint64_t insertionSort(int vetor[], size_t tam) {
    vetor[0] = 99;
    return -1;
}

uint64_t insertionSortRec(int vetor[], size_t tam) {
    vetor[0] = 99;
    return -1;
}

uint64_t selectionSort(int vetor[], size_t tam) {
    vetor[0] = 99;
    return -1;
}

uint64_t selectionSortRec(int vetor[], size_t tam) {
    vetor[0] = 99;
    return -1;
}

uint64_t mergeSortRec(int vetor[], size_t tam) {
    vetor[0] = 99;
    return -1;
}