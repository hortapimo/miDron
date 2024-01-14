#include "Arduino.h"
#include <cmath>

#define PIN_M1 17
#define PIN_M1_DIR1 18
#define PIN_M1_DIR2 19
#define PIN_M2 22
#define PIN_M3 32
#define PIN_M4 13

#define CH_M1 15
#define CH_M2 14
#define CH_M3 13
#define CH_M4 12

#define FREC 1000 //en hz
#define RES 12 //bits

#define FALLO 0
#define EXITO 1

const int maxRes = pow(2,RES);
int dutyCicle = maxRes/2;
//funciones privadas de este modulo

void iniciarPines()
{
//Pines direccion
    pinMode(PIN_M1_DIR1, OUTPUT);
    pinMode(PIN_M1_DIR2, OUTPUT);
    //inicio direccion de las velocidades del motor
    digitalWrite(PIN_M1_DIR1, HIGH);
    digitalWrite(PIN_M1_DIR2, LOW);

//setup pines vel motores
    ledcSetup(CH_M1, FREC, RES);
    ledcSetup(CH_M2, FREC, RES);
    ledcSetup(CH_M3, FREC, RES);
    ledcSetup(CH_M4, FREC, RES);


    ledcAttachPin(PIN_M1,CH_M1);//15 se refiere al canal que se va atar
    ledcAttachPin(PIN_M2,CH_M2);
    ledcAttachPin(PIN_M3,CH_M3);
    ledcAttachPin(PIN_M4,CH_M4);
    //arrancan al 50 % los motores
    ledcWrite(CH_M1,dutyCicle);
    ledcWrite(CH_M2,dutyCicle);
    ledcWrite(CH_M3,dutyCicle);
    ledcWrite(CH_M4,dutyCicle);

}

namespace mover{

    void subir()
    {

        if(dutyCicle + 0.1* dutyCicle < maxRes){
            dutyCicle = dutyCicle + 0.1* dutyCicle;
        }

        ledcWrite(CH_M1,dutyCicle);
        ledcWrite(CH_M2,dutyCicle);
        ledcWrite(CH_M3,dutyCicle);
        ledcWrite(CH_M4,dutyCicle);
    }

    void bajar()
    {

        if(dutyCicle - 0.1* dutyCicle > 0){
            dutyCicle = dutyCicle - 0.1* dutyCicle;
        }

        ledcWrite(CH_M1,dutyCicle);
        ledcWrite(CH_M2,dutyCicle);
        ledcWrite(CH_M3,dutyCicle);
        ledcWrite(CH_M4,dutyCicle);
    }
}


//funciones publicas del modulo
void iniciarDron()
{
    iniciarPines();
    
}

