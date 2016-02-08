/*
  T09_Pruebas_Bluetooth_switch.ino

  Control del LED de Arduino vía Bluetooth.
  
  Hay que cargar el programa antes de conectar el HC-05 porque después
  no será posible. Luego, alimentar el Arduino con pilas.
  El montaje incluye un adaptador Bluetooth HC-05, que se conecta así:
    HC-05     ARDUINO
      STATE   No conectado
      RXD     1 (está marcado como TX)
      TXD     0 (está marcado como RX)
      GND     GND (cualquiera)
      VCC     5V
      KEY     No conectado
  
  Se recomienda conectar un LED al pin 13 para que se vea mejor.
*/

void setup() {
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    switch(Serial.read()) {
      // Encender
      case 'e':
      case 'E':
        digitalWrite(13, HIGH);
        break;
      // Apagar
      case 'a':
      case 'A':
        digitalWrite(13,LOW);
        break;
      }
  }
}
