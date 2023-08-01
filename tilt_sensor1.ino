# define tilt 10
# define motor 9
int reading;
void setup()
{
 pinMode(tilt,INPUT);
 pinMode(motor,OUTPUT);
}

void loop()
{
   reading=digitalRead(tilt);
  digitalWrite(motor,reading);
}
