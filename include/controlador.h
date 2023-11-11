#include "modelo.h"

class Controlador
{
private:
    /* data */
public:
    Modelo& refModelo;
    
    Controlador(Modelo& modelo)
        : refModelo(modelo)
    {}
    
};

