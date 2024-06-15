# 1 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino"
# 2 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino" 2
extern "C"{
# 4 "C:\\Users\\CarlosAP\\Documents\\Ciclo 8\\Control Digital\\ControlDigitalPractica5\\ControlDigitalPractica5.ino" 2
}






void setup() {
    // Configurar el pin LED como salida (para propósitos de prueba)
    pinMode(13, 0x1);
    pinMode(8, 0x0);
    Serial.begin(9600);

    // Inicializar la MEF del botón
    mefIniciarBoton();
}

void loop() {
    mefActualizarBoton(8);
}
