#include "grafo.h"
#include "nodo.h"

#include <iostream>

using namespace std;

Grafo::Grafo()
{
    m_vertices = new Nodo *[K+1];
    m_vertices[A] = new Nodo("A");
    m_vertices[B] = new Nodo("B");
    m_vertices[C] = new Nodo("C");
    m_vertices[D] = new Nodo("D");
    m_vertices[E] = new Nodo("E");
    m_vertices[F] = new Nodo("F");
    m_vertices[G] = new Nodo("G");
    m_vertices[H] = new Nodo("H");
    m_vertices[I] = new Nodo("I");
    m_vertices[J] = new Nodo("J");
    m_vertices[K] = new Nodo("K");
    m_vertices[A]->agregaVecino(m_vertices[B]);
    m_vertices[A]->agregaVecino(m_vertices[C]);
    m_vertices[A]->agregaVecino(m_vertices[D]);
    m_vertices[B]->agregaVecino(m_vertices[E]);
    m_vertices[C]->agregaVecino(m_vertices[G]);
    m_vertices[D]->agregaVecino(m_vertices[H]);
    m_vertices[E]->agregaVecino(m_vertices[I]);
    m_vertices[F]->agregaVecino(m_vertices[I]);
    m_vertices[G]->agregaVecino(m_vertices[J]);
    m_vertices[H]->agregaVecino(m_vertices[K]);
    m_vertices[I]->agregaVecino(m_vertices[E]);
    m_vertices[I]->agregaVecino(m_vertices[F]);
    m_vertices[J]->agregaVecino(m_vertices[G]);
    m_vertices[J]->agregaVecino(m_vertices[K]);
    m_vertices[K]->agregaVecino(m_vertices[J]);
    m_vertices[K]->agregaVecino(m_vertices[H]);
}

Grafo::~Grafo()
{
    for (int x = A; x <= K; ++x)
    {
        delete m_vertices[x];
    }
    delete[] m_vertices;
}

void Grafo::imprimir()
{
    for (int x = 0; x <= K; ++x)
    {
        cout << m_vertices[x]->dato() << endl;
    }
}
