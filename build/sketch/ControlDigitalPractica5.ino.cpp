#line 1 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino"
#include <Arduino.h>
extern "C"{
    #include "inc/pulsador.h"
}



#define boton 8
#define led 13

#line 11 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino"
void setup();
#line 21 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino"
void loop();
#line 11 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino"
void setup() {
    // Configurar el pin LED como salida (para propósitos de prueba)
    pinMode(led, OUTPUT);
    pinMode(boton, INPUT);
    Serial.begin(9600);

    // Inicializar la MEF del botón
    mefIniciarBoton();
}

void loop() {
    mefActualizarBoton(boton);
}
