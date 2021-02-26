#ifndef NODO_H
#define NODO_H

#include <string>

/** nodo */
class Nodo
{
public:
    /** constructor */
    explicit Nodo(const std::string &dato = "");

    /** destructor */
    virtual ~Nodo();

    /** asigna dato */
    void setDato(const std::string &dato);

    /** obtiene dato */
    std::string dato() const;

    /** agrega vecino */
    void agregaVecino(Nodo *vecino);

    /** obtiene vecino */
    Nodo *vecinoAt(int pos);

    /** obtiene cantidad de vecinos */
    int nvecinos() const;
private:
    std::string m_dato; //!< dato
    int m_nvecinos; //!< cantidad de vecinos
    Nodo **m_vecinos; //!< arreglo de vecinos
};

#endif // NODO_H
