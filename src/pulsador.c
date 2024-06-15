#include <Arduino.h>
#include <stdbool.h>
#include "../inc/pulsador.h"

// Variables globales
unsigned long tiempoInicial = 0;
estadosBoton_t estadosBoton;

void mefIniciarBoton() {
    estadosBoton = buttonUp;
}

void botonPrecionado() {
    digitalWrite(13, HIGH);
}

void botonLiberado() {
    digitalWrite(13, LOW);
}

int delayNoBloqueante(int16_t tiempo) {
    // Obtener el tiempo actual
    unsigned long tiempoActual = millis();
    // Verificar si el tiempo transcurrido es mayor o igual al tiempo especificado
    if (tiempoActual - tiempoInicial >= tiempo) {
        tiempoInicial = tiempoActual;
        return 1;  // Han pasado al menos 'tiempo' milisegundos
    } else {
        return 0; // Aún no han pasado 'tiempo' milisegundos
    }
}

void mefActualizarBoton(int16_t button) {
    switch (estadosBoton) {
    case buttonUp:
        if (!digitalRead(button)) {
            estadosBoton = buttonFalling;
        }
        break;

    case buttonDown:
        if (digitalRead(button)) {
            estadosBoton = buttonRising;
        }
        break;

    case buttonFalling:
        if (delayNoBloqueante(40)) {
            if (!digitalRead(button)) {
                estadosBoton = buttonDown;
                botonPrecionado();
            } else {
                estadosBoton = buttonUp;
            }
        }
        break;

    case buttonRising:
        if (delayNoBloqueante(40)) {
            if (digitalRead(button)) {
                estadosBoton = buttonUp;
                botonLiberado();
            } else {
                estadosBoton = buttonDown;
            }
        }
        break;

    default:
        mefIniciarBoton();
        break;
    }
}