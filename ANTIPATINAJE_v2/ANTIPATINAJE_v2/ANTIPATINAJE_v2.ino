/*
Programampara probar las valvulas de antipatinaje.
D2 Entrada de aire
D3 Desalojo
D4 pulsador de marcha


 */


int pulsador = 4;
 int valor = 0;


void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
      digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
}

// the loop function runs over and over again forever
void loop() {

  int temporizacion = 300;

    valor = digitalRead(pulsador);  //lectura digital de pin
 
  //mandar mensaje a puerto serie en función del valor leido
  if (valor == HIGH) {
       delay(2000); 
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(temporizacion);              // wait for a second

  

  /////******26 REPETICIONES

     for (int i=0; i <= 26; i++){

  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(temporizacion);              // wait for a second
  digitalWrite(3, HIGH);    // turn the LED off by making the voltage LOW
    delay(temporizacion);  
    
     }
 

 //*******LOS DOS CUERPOS A 0   
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW  
      delay(3000);              // wait for a second

 //***LOS DOS CUERPOS A 1
  digitalWrite(3, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(2, HIGH);    // turn the LED off by making the voltage LOW  
      delay(3000);              // wait for a second
    
   digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW  
 

  }
  else {
      Serial.println("Apagado");
  }

}
