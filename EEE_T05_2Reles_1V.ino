/*
  EEE_T05_2Reles_1V.ino
  
  Arduino controlando el giro de un motor con 2 relés de 1 vía.
  Utilizamos la tarjeta de 2 relés SRD-95-VDC-SL-C.
  
  Con el pin 1 controlaremos el relé 1.
  Con el pin 2 controlaremos el relé 2.

  Montaje físico:
    GND de Arduino a GND de placa
    5V de Arduino a VCC de placa
    pin 1 de Arduino a IN1 de placa
    pin 2 de Arduino a IN2 de placa
    
    relé 1: izquierdo a negativo, central a positivo motor, derecho a positivo
    relé 2: izquierdo a negativo, central a negativo motor, derecho a positivo
    (de este modo los motores permanecen parados por defecto)
    (los relés se conectan a Arduino o, mejor, a una fuente de alimentación aparte)
 */
 
int in1 = 1;  // pin de Arduino para controlar el relé 1
int in2 = 2;  // pin de Arduino para controlar el relé 2

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Giramos hacia la derecha durante 1 segundo
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(1000);
  // Paramos 1 segundo
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  delay(1000);

  // Giramos hacia la izquierda durante 1 segundo
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  delay(1000);
  
  // Paramos 1 segundo
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  delay(1000);
}
