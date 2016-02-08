/*
  Bombilla_Rele_1V.ino
  
  Arduino controlando una lámpara con 1 relé de 1 vía.
  Utilizamos la tarjeta de 2 relés SRD-95-VDC-SL-C o una similar.
  
  Con el pin 1 controlaremos el relé 1.

  Montaje físico:
    GND de Arduino a GND de placa
    5V de Arduino a VCC de placa
    pin 1 de Arduino a IN1 de placa
    
    relé 1: izquierdo a regleta, central a bomtilla, derecho sin conectar
    bombilla: un lado a regleta, el otro al relé como se ha dicho
    (de este modo la bombilla permanece apagada por defecto)
 */
 
int in1 = 1;  // pin de Arduino para controlar el relé 1

void setup() {
  pinMode(in1, OUTPUT);
}

void loop() {
  // Encendemos
  digitalWrite(in1, HIGH);
  delay(200);
  // Tras 2 décimas de segundo apagamos
  digitalWrite(in1,LOW);
  delay(200);

  // Repetimos acción similar pero más lenta
  digitalWrite(in1, HIGH);
  delay(500);
  digitalWrite(in1,LOW);
  delay(500);

  digitalWrite(in1, HIGH);
  delay(900);
  digitalWrite(in1,LOW);
  delay(900);
}
