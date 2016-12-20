#define button_C 1
#define button_D 2
#define button_E 3
#define button_F 4
#define button_G 5
#define button_A 6
#define button_B 7

#define speaker 13

int buttonstate_C = 0;
int buttonstate_D = 0;
int buttonstate_E = 0;
int buttonstate_F = 0;
int buttonstate_G = 0;
int buttonstate_A = 0;
int buttonstate_B = 0;
int buttonstate_Cup = 0;

//NOTES         'c'  , 'd',  'e',  'f',  'g', 'a',  'b',  'C'
int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014}; //freq
int Cur_tone = 0;

void setup()
{
//  Serial.begin(9600);
  pinMode(button_C, INPUT);
  pinMode(button_D, INPUT);
  pinMode(button_E, INPUT);
  pinMode(button_F, INPUT);
  pinMode(button_G, INPUT);
  pinMode(button_A, INPUT);
  pinMode(button_B, INPUT);

  pinMode(speaker, OUTPUT);
}

void loop()
{
//  buttonstate_C = digitalRead(button_C);
//  buttonstate_D = digitalRead(button_D);
//  buttonstate_E = digitalRead(button_E);
//  buttonstate_F = digitalRead(button_F);
//  buttonstate_G = digitalRead(button_G);
//  buttonstate_A = digitalRead(button_A);
//  buttonstate_B = digitalRead(button_B);
////  Serial.println(buttonstate_C);
//
//  if((buttonstate_C == HIGH) || (buttonstate_E == HIGH) || 
//    (buttonstate_G == HIGH) || (buttonstate_D == HIGH) || 
//    (buttonstate_F == HIGH) || (buttonstate_A == HIGH) || 
//    (buttonstate_B == HIGH) || (buttonstate_Cup == HIGH) )
//  { 
//    if (buttonstate_C == HIGH)
//    {
//      Cur_tone = tones[0];
//    } 
//    if (buttonstate_E == HIGH)
//    {
//      Cur_tone = tones[1];
//    }
//    if (buttonstate_G == HIGH)
//    {
//      Cur_tone = tones[2];
//    }
//    if (buttonstate_D == HIGH)
//    {
//      Cur_tone = tones[3];
//    }
//    if (buttonstate_F == HIGH)
//    {
//      Cur_tone = tones[4];
//    }
//    if (buttonstate_A == HIGH)
//    {
//      Cur_tone = tones[5];
//    }
//    if (buttonstate_B == HIGH)
//    {
//      Cur_tone = tones[6];
//    }
//
//    digitalWrite(speaker, HIGH);
//    delayMicroseconds(Cur_tone);
//    digitalWrite(speaker, LOW);
//    delayMicroseconds(Cur_tone);
//  }
//  else //in case no button is pressed , close the piezo
//  {
//    digitalWrite(speaker, LOW);
//  }
digitalWrite(speaker, HIGH);
delayMicroseconds(1915);
digitalWrite(speaker, LOW);
}
