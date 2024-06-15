#include <Arduino.h>
extern "C"{
    #include "inc/pulsador.h"
}

#define boton 8
#define led 13

void setup() {
    // Configurar el pin LED como salida (para propósitos de prueba)
    pinMode(led, OUTPUT);
    pinMode(boton, INPUT_PULLUP);
    // Inicializar la MEF del botón
    mefIniciarBoton();
}

void loop() {
    mefActualizarBoton(boton);
}