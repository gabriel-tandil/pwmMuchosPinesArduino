int   potValueR;
int   potValueG;
int   potValueB;
int   actual;
bool  r11;
bool  r12;
bool  r13;
bool  r14;
bool  r21;
bool  r22;
bool  r23;
bool  r24;
bool  r31;
bool  r32;
bool  r33;
bool  r34;
bool  g11;
bool  g12;
bool  g13;
bool  g14;
bool  g21;
bool  g22;
bool  g23;
bool  g24;
bool  g31;
bool  g32;
bool  g33;
bool  g34;
bool  b11;
bool  b12;
bool  b13;
bool  b14;
bool  b21;
bool  b22;
bool  b23;
bool  b24;
bool  b31;
bool  b32;
bool  b33;
bool  b34;
bool  boton;
bool    lecturaBoton;

void setup()
{
  pinMode(11, OUTPUT);// verde 1
  pinMode(12, OUTPUT);// azul 1
  pinMode(13, OUTPUT);// rojo1
  pinMode(8, OUTPUT);// verde 2
  pinMode(9, OUTPUT);// azul 2
  pinMode(10, OUTPUT);// rojo2
  pinMode(5, OUTPUT);// verde 3
  pinMode(6, OUTPUT);// azul 3
  pinMode(7, OUTPUT);// rojo3
  pinMode(2, INPUT);// boton
  pinMode(3, INPUT);// llave
  // Serial.begin(9600); // setup serial
}

void loop()
{
  lecturaBoton = digitalRead(2);

  if (lecturaBoton && !boton)// apreto el boton
  {
    actual = (actual + 1) % 3;
    // Serial.println(actual);
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(7, 0);
    digitalWrite(6, 0);
    digitalWrite(5, 0);

    if (actual == 0)
    {
      digitalWrite(13, 1);
      digitalWrite(12, 1);
      digitalWrite(11, 1);
    }
    if (actual == 1)
    {
      digitalWrite(10, 1);
      digitalWrite(9, 1);
      digitalWrite(8, 1);
    }
    if (actual == 2)
    {
      digitalWrite(7, 1);
      digitalWrite(6, 1);
      digitalWrite(5, 1);
    }
    delay(250);
  }
  boton = lecturaBoton;
  if (digitalRead(3))
  {
    potValueR = analogRead(1);
    potValueG = analogRead(2);
    potValueB = analogRead(3);
    if (actual == 0)
    {
      r11 = potValueR > 5;
      r12 = potValueR > 270;
      r13 = potValueR > 580;
      r14 = potValueR > 800;
      g11 = potValueG > 5;
      g12 = potValueG > 270;
      g13 = potValueG > 580;
      g14 = potValueG > 800;
      b11 = potValueB > 5;
      b12 = potValueB > 270;
      b13 = potValueB > 580;
      b14 = potValueB > 800;
    }
    if (actual == 1)
    {
      r21 = potValueR > 5;
      r22 = potValueR > 270;
      r23 = potValueR > 580;
      r24 = potValueR > 800;
      g21 = potValueG > 5;
      g22 = potValueG > 270;
      g23 = potValueG > 580;
      g24 = potValueG > 800;
      b21 = potValueB > 5;
      b22 = potValueB > 270;
      b23 = potValueB > 580;
      b24 = potValueB > 800;
    }
    if (actual == 2)
    {
      r31 = potValueR > 5;
      r32 = potValueR > 270;
      r33 = potValueR > 580;
      r34 = potValueR > 800;
      g31 = potValueG > 5;
      g32 = potValueG > 270;
      g33 = potValueG > 580;
      g34 = potValueG > 800;
      b31 = potValueB > 5;
      b32 = potValueB > 270;
      b33 = potValueB > 580;
      b34 = potValueB > 800;
    }
  }

  digitalWrite(13, r11);
  digitalWrite(12, g11);
  digitalWrite(11, b11);
  digitalWrite(10, r21);
  digitalWrite(9, g21);
  digitalWrite(8, b21);
  digitalWrite(7, r31);
  digitalWrite(6, g31);
  digitalWrite(5, b31);
  delayMicroseconds(250);
  digitalWrite(13, r12);
  digitalWrite(12, g12);
  digitalWrite(11, b12);
  digitalWrite(10, r22);
  digitalWrite(9, g22);
  digitalWrite(8, b22);
  digitalWrite(7, r32);
  digitalWrite(6, g32);
  digitalWrite(5, b32);
  delayMicroseconds(250);
  digitalWrite(13, r13);
  digitalWrite(12, g13);
  digitalWrite(11, b13);
  digitalWrite(10, r23);
  digitalWrite(9, g23);
  digitalWrite(8, b23);
  digitalWrite(7, r33);
  digitalWrite(6, g33);
  digitalWrite(5, b33);
  delayMicroseconds(250);
  digitalWrite(13, r14);
  digitalWrite(12, g14);
  digitalWrite(11, b14);
  digitalWrite(10, r24);
  digitalWrite(9, g24);
  digitalWrite(8, b24);
  digitalWrite(7, r34);
  digitalWrite(6, g34);
  digitalWrite(5, b34);
  delayMicroseconds(250);

  // Serial.println(potValue);
}
