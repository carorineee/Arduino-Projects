#define speakerPin 11
#define C_BUTTON 8
#define D_BUTTON 7
#define E_BUTTON 6
#define F_BUTTON 5
#define G_BUTTON 4
#define A_BUTTON 3
#define B_BUTTON 2

#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494

int buttonstate_C = 0;
int buttonstate_D = 0;
int buttonstate_E = 0;
int buttonstate_F = 0;
int buttonstate_G = 0;
int buttonstate_A = 0;
int buttonstate_B = 0;

//#include<pitches.h>

void setup()
{
  pinMode(speakerPin, OUTPUT);
  pinMode(C_BUTTON, INPUT);
  pinMode(D_BUTTON, INPUT);
  pinMode(E_BUTTON, INPUT);
  pinMode(F_BUTTON, INPUT);
  pinMode(G_BUTTON, INPUT);
  pinMode(A_BUTTON, INPUT);
  pinMode(B_BUTTON, INPUT);

}

int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 }; //freq
int Cur_tone = 0;

void loop()
{
  buttonstate_C = digitalRead(C_BUTTON);
  buttonstate_D = digitalRead(D_BUTTON);
  buttonstate_E = digitalRead(E_BUTTON);
  buttonstate_F = digitalRead(F_BUTTON);
  buttonstate_G = digitalRead(G_BUTTON);
  buttonstate_A = digitalRead(A_BUTTON);
  buttonstate_B = digitalRead(B_BUTTON);

if((buttonstate_C == HIGH) || (buttonstate_E == HIGH) || 
    (buttonstate_G == HIGH) || (buttonstate_D == HIGH) || 
    (buttonstate_F == HIGH) || (buttonstate_A == HIGH) || 
    (buttonstate_B == HIGH))
  { 
    if (buttonstate_C == HIGH)
    {
      Cur_tone = tones[0];
    } 
    if (buttonstate_D == HIGH)
    {
      Cur_tone = tones[1];
    }
    if (buttonstate_E == HIGH)
    {
      Cur_tone = tones[2];
    }
    if (buttonstate_F == HIGH)
    {
      Cur_tone = tones[3];
    }
    if (buttonstate_G == HIGH)
    {
      Cur_tone = tones[4];
    }
    if (buttonstate_A == HIGH)
    {
      Cur_tone = tones[5];
    }
    if (buttonstate_B == HIGH)
    {
      Cur_tone = tones[6];
    }

    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(Cur_tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(Cur_tone);
}
  else //in case no button is pressed , close the piezo
  {
    digitalWrite(speakerPin, LOW);
  }
}
