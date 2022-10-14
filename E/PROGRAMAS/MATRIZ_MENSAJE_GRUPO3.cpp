// INCLUYO LA LIBRERIA MATRIZLED.H
#include <MatrizLed.h>

/*
 * Texto que aparece por la derecha y sale por la izquierda
 */

// CREO EL OBJETO pantalla en funcion de la libreria que utilizo

MatrizLed pantalla;

void setup() {
// configuracion de la matriz 8x8 que se utiliza
  pantalla.begin(12, 11, 10, 2); // inicializo el objeto matriz , defino los pines de conexion entre el modulo de la matriz y la placa arduino dataPin, clkPin, csPin, numero de matrices de 8x8
  pantalla.rotar(false);
}

void loop() { 

// programacion que se va a repetir siempre

  pantalla.borrar();// borro el mensaje enviado a la matriz, los led se apagan 
  pantalla.escribirFraseScroll("GRUPO 3", 150); // escribo el texto , en este caso GRUPO 3, defino el tiempo de espera en milisegundos entre los cuadros que se van a visualizar en la matriz
}