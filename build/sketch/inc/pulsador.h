#line 1 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\inc\\pulsador.h"
// botones.h
#ifndef PULSADOR_H
#define PULSADOR_H

typedef enum {
    buttonUp,
    buttonDown,
    buttonFalling,
    buttonRising
} estadosBoton_t;

// Prototipos de funciones
void mefIniciarBoton();
void mefActualizarBoton(int16_t button);
int delayNoBloqueante(int16_t tiempo);
void botonPrecionado();
void botonLiberado();






















#endif // BOTONES_H
