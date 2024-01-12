#include "controlador.h"
#include "modelo.h"

#define MOVER_NORTE 'A'
#define MOVER_NORESTE 'B'
#define MOVER_ESTE 'C'
#define MOVER_SURESTE 'D'
#define MOVER_SUR 'E'
#define MOVER_SUROESTE 'F'
#define MOVER_OESTE 'G'
#define MOVER_NOROESTE 'H'
#define SUBIR 'X'
#define BAJAR 'Y'

void Controlador::procesarComando(char comando)
{
    switch (comando)
    {
        case MOVER_NORTE:
            /* code */
            break;
        case MOVER_NORESTE:
            /* code */
            break;
        case MOVER_ESTE:
            /* code */
            break;
        case MOVER_SURESTE:
            /* code */
            break;
        case MOVER_SUR:
            /* code */
            break;
        case MOVER_SUROESTE:
            /* code */
            break;
        case MOVER_OESTE:
            /* code */
            break;
        case MOVER_NOROESTE:
            /* code */
            break;
        case SUBIR:
            mover::subir();
            break;
        case BAJAR:
            mover::bajar();
            break;
        
        default:
            break;
    }
};

void Controlador::iniciar()
{
    iniciarDron();
}