#include "nodo.h"

Nodo::Nodo(const std::string &dato)
{
    m_dato = dato;
    m_nvecinos = 0;
    m_vecinos = nullptr;
}

Nodo::~Nodo()
{
    delete[] m_vecinos;
}

void Nodo::setDato(const std::string &dato)
{
    m_dato = dato;
}

std::string Nodo::dato() const
{
    return m_dato;
}

void Nodo::agregaVecino(Nodo *vecino)
{
    if (vecino != nullptr)
    {
        // verificamos que el vecino no exista ya
        for (int x = 0; x < m_nvecinos; ++x)
        {
            if (m_vecinos[x] == vecino)
            {
                return;
            }
        }

        // agregamos vecino a este nodo
        if (m_vecinos == nullptr)
        {
            // agregamos el primer vecino a la lista de vecinos
            m_vecinos = new Nodo *[1];
            m_vecinos[0] = vecino;
            m_nvecinos = 1;
        }
        else
        {
            // agregamos vecino a la lista de vecinos
            Nodo **copia = new Nodo *[m_nvecinos + 1];
            for (int x = 0; x < m_nvecinos; ++x)
            {
                copia[x] = m_vecinos[x];
            }
            copia[m_nvecinos] = vecino;
            delete[] m_vecinos;
            m_vecinos = copia;
            m_nvecinos = m_nvecinos + 1;
        }

        // agregamos este nodo como vecino del vecino
        vecino->agregaVecino(this);
    }
}

Nodo *Nodo::vecinoAt(int pos)
{
    if (pos >= 0 && pos < m_nvecinos)
    {
        return m_vecinos[pos];
    }
    else
    {
        return nullptr;
    }
}

int Nodo::nvecinos() const
{
    return m_nvecinos;
}
