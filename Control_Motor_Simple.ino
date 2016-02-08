/*
  EEE_T03_Control_Motor_Simple.ino
  
  Elegimos el puerto 11 porque es PWM.
  Motor sencillo: un borne a GND y el otro a pin 11.
  Motor potente:
    - un borne a GND y el otro a colector NPN.
    - cable de pin 11 Arduino a resistencia 1k y a base transistor.
    - cable de 5V Arduino a emisor NPN
*/  

void setup() {
  // Esto sólo ocurre una vez
  pinMode(11, OUTPUT);
}

void loop() {
  // Esto se ejecuta toda la vida, una y otra vez:
  analogWrite(11, 20); // ¡¡¡PELIGRO!!! para velocidades altas, poner una resistencia de 1k
                       // entre el pin 11 y la base del transistor
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
}
