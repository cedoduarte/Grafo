#ifndef GRAFO_H
#define GRAFO_H

class Nodo;

/** grafo */
class Grafo
{
public:
    enum Vertice
    {
        A, B, C, D, E, F, G, H, I, J, K
    };

    explicit Grafo();
    virtual ~Grafo();
    void imprimir();
private:
    Nodo **m_vertices;
};

#endif // GRAFO_H
