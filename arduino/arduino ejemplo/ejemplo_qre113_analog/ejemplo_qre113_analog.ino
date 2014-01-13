
/******************************************************************
** Código creado en Electrónica 5Hz                              **
** www.5hz-electronica.com                                       **
** Por:                                                          **
** Basado en el código de:                                       **
** Descripción del código:                                       **
**                                                               **
** Ejemplo para el sensor de línea QRE1113 analógico             **
** indica si ha detectado algo o no                              **
*******************************************************************

Conexiones para la comunicacion i2c usando el breakout de 5Hz con un Arduino Uno / Duemilanove:
Arduino <-> Breakout board
Gnd      -  GND
5v       -  VCC
Analog 5 -  VO
*/



int QRE1113_Pin = A5; //conectado al pin A5
int umbral = 500;  //arriba de este valor lo toma como una linea negra, hacer pruebas para encontrar el mejor valor
//si no hay nada frente al sensor, lo detecta como linea negra al no haber ningun reflejo

void setup()
{
  Serial.begin(9600);
  pinMode(QRE1113_Pin, INPUT);
}

void loop()
{
  if(analogRead(QRE1113_Pin) > 500) Serial.println("linea negra! :D");
  else Serial.println("no hay linea");
  delay(250);
}



