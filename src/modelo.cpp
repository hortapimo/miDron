#include "Arduino.h"
#include <cmath>

#define PIN_M1 15
#define PIN_M2 22
#define PIN_M3 32
#define PIN_M4 13
#define CH_M1 15
#define CH_M2 14
#define CH_M3 13
#define CH_M4 12

#define FREC 10000 //en hz
#define RES 12 //bits

const int maxRes = pow(2,RES);

void iniciarPines()
{

 ledcAttachPin(PIN_M1,15);//15 se refiere al canal que se va atar
 ledcAttachPin(PIN_M2,14);
 ledcAttachPin(PIN_M3,13);
 ledcAttachPin(PIN_M4,12);

//defino los parametros de los canales
ledcSetup(CH_M1, FREC, RES);
ledcSetup(CH_M2, FREC, RES);
ledcSetup(CH_M4, FREC, RES);
ledcSetup(CH_M3, FREC, RES);

}

void iniciarDron()
{
    iniciarPines();

    ledcWrite(CH_M1,maxRes/2);
    ledcWrite(CH_M2,maxRes/2);
    ledcWrite(CH_M3,maxRes/2);
    ledcWrite(CH_M4,maxRes/2);
}