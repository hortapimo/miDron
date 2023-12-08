#include "Arduino.h"
#include <cmath>

#define PIN_M1 17
#define PIN_M2 22
#define PIN_M3 32
#define PIN_M4 13

#define CH_M1 15
#define CH_M2 14
#define CH_M3 13
#define CH_M4 12

#define FREC 10000 //en hz
#define RES 12 //bits

#define FALLO 0
#define EXITO 1

const int maxRes = pow(2,RES);

//funciones privadas de este modulo
void iniciarPines()
{
ledcSetup(CH_M1, FREC, RES);
ledcSetup(CH_M2, FREC, RES);
ledcSetup(CH_M3, FREC, RES);
ledcSetup(CH_M4, FREC, RES);


ledcAttachPin(PIN_M1,CH_M1);//15 se refiere al canal que se va atar
ledcAttachPin(PIN_M2,CH_M2);
ledcAttachPin(PIN_M3,CH_M3);
ledcAttachPin(PIN_M4,CH_M4);

}




//funciones publicas del modulo
void iniciarDron()
{
    iniciarPines();
    
}

