#include <Ultrasonic.h>

#include <Servo.h>

#define echoPin 13

#define trigPin 12

 

Servo servo_objeto;

Ultrasonic ultrasonic(12,13);

 

int posicao_inicial_servo = 0;

int ledPin =  10;

/*-----------------------------------------*/

void setup()

{

  Serial.begin(9600);

  pinMode(echoPin, INPUT);

  pinMode(trigPin, OUTPUT);

  pinMode(ledPin, OUTPUT);

  servo_objeto.attach(9);

 

}

/*-----------------------------------------*/

void loop()

{

   digitalWrite(ledPin, LOW);

   servo_objeto.write(posicao_inicial_servo);

   int valor = func_distancia_ultrasonico();

    if(valor <=15)

    {

        func_controladora();

        delay(5000);

    }

 

  delay(500);

}

/*----------------------------------------*/

void func_controladora()

{

   func_liga_led();

   func_chama_servo();

}

/*----------------------------------------*/

void func_liga_led()

{

  digitalWrite(ledPin, HIGH);

}

/*----------------------------------------*/

void func_chama_servo()

{

  int posicao_final_servo = 90;

  servo_objeto.write(posicao_final_servo);

}

/*----------------------------------------*/

int func_distancia_ultrasonico()

{

  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);

 

  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);

 

  digitalWrite(trigPin, LOW);

  int distancia = (CM);

  Serial.print("Distancia em CM: ");

  Serial.println(distancia);

  return distancia;

}
