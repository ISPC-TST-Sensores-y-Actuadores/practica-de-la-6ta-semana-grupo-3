/*
  GRUPO 3 de - VISUALIZADORES - APLICACION DE UNA MODULO DE MATRIS DE 8x8 CON MAX7912 
				UTILIZANDO UNA PLACA  Arduino .
 El Programa que muestra una flecha con animacion de movimiento en 9 cuadros.

 

*/
  // incluye libreria LedControl

#include "LedControl.h"     

// crea objeto que llamo matriz y defino los pines de la matriz que se conectan con la placa arduino

LedControl matriz=LedControl(12,11,10,0); // Los pines DIN = 12 , SCK =11 y CS= 10 conforman la interfaz de comunicación, mediante estos pines la placa Arduino le envía comandos al chip

#define demora 250      // constante demora con valor de 250 en unidad de tiempo 

byte flecha_arriba_1[8] = {   // array con primer cuadro de animacion de flecha, los pines que tienen el numero 1 son los LED que se van a encender. 
  B00000000, // Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000
};

byte flecha_arriba_2[8] = {   // array con segundo cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B00011000,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000
};

byte flecha_arriba_3[8] = {   // array con tercer cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B00111100,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000
};

byte flecha_arriba_4[8] = {   // array con cuarto cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B01111110,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000
};

byte flecha_arriba_5[8] = {   // array con quinto cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B11011011,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100
};

byte flecha_arriba_6[8] = {   // array con sexto cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B00011000,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110
};

byte flecha_arriba_7[8] = {   // array con septimo cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B00011000,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011
};

byte flecha_arriba_8[8] = {   // array con octavo cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B00011000,//Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000
};

byte flecha_arriba_9[8] = {   // array con noveno cuadro de animacion de flecha,  los pines que tienen el numero 1 son los LED que se van a encender
  B00000000,// Se usa la letra B porque uso  numeracion binaria con 0 y 1.Como la matriz es de 8x8 se tienen 8 filas y 8 columnas en total
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000
};

void setup() {
  matriz.shutdown(0,false);     // nombro el objeto matriz que se creo y llamo a la funcion shutdown que enciende la matriz
  matriz.setIntensity(0,4);     // nombro el objeto matriz que se creo y llamo a la funcion setIntensity que establece brillo con un valor de 4 que es un brillo medio
  matriz.clearDisplay(0);     // nombro el objeto matriz que se creo y llamo a la funcion clearDisplay y le envio un 0 que blanquea matriz
}

void loop(){
// aqui pongo el programa que se va arepetir indefinidamente mientras la placa este encendida, 
//llamo a las 9 funciones que muestran los 9 cuadros de animacion de la flecha y entre una funcion mostrar y otra defino una tiempo de demora, un delay
  mostrar_1();        // llama funcion mostrar_1
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_2();        // llama funcion mostrar_2
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_3();        // llama funcion mostrar_3
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_4();        // llama funcion mostrar_4
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_5();        // llama funcion mostrar_5
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_6();        // llama funcion mostrar_6
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_7();        // llama funcion mostrar_7
  delay(demora);      //le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_8();        // llama funcion mostrar_8
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
  mostrar_9();        // llama funcion mostrar_9
  delay(demora);      // le doy una demora de 250 ms, la variable demora se definio al inicio 
}

void mostrar_1(){     // funcion mostrar_1 que me va a mostrar el primer cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array del primer cuadro
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada
   
 matriz.setRow(0,i,flecha_arriba_1[i]);  // establece fila con valor de array flecha_arriba_1 definida arriba, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_2(){     // funcion mostrar_2 que me va a mostrar el segundo cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {

// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_2[i]);  // establece fila con valor de array flecha_arriba_2, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_3(){     // funcion mostrar_3 que me va a mostrar el tercer cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_3[i]);  // establece fila con valor de array flecha_arriba_3, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_4(){     // funcion mostrar_4 que me va a mostrar el 4° cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_4[i]);  // establece fila con valor de array flecha_arriba_4, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_5(){     // funcion mostrar_5 que me va a mostrar el quinto cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_5[i]);  // establece fila con valor de array flecha_arriba_5, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_6(){     // funcion mostrar_6 que me va a mostrar el sexto cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_6[i]);  // establece fila con valor de array flecha_arriba_6, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_7(){     // funcion mostrar_7 que me va a mostrar el septimo cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_7[i]);  // establece fila con valor de array flecha_arriba_7, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_8(){     // funcion mostrar_8 que me va a mostrar el octavo cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_8[i]);  // establece fila con valor de array flecha_arriba_8, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}

void mostrar_9(){     // funcion mostrar_9 que me va a mostrar el noveno cuadro de animacion de la flecha
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
// La funcion setRow() defino tres parametros, el primero es el numero de la matriz, el segundo el numero de la fila, 
//el tercero el valor que se le asigan a las ocho columnas de la fila mencionada

    matriz.setRow(0,i,flecha_arriba_9[i]);  // establece fila con valor de array flecha_arriba_9, la variable i toma el valor de 0 a 7 dentro del bucle for 
  }
}