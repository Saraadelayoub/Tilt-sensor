# define tilt 10
# define motor 9
void setup()
{
 pinMode(tilt,INPUT);
 pinMode(motor,OUTPUT);
}

void loop()
{
if(digitalRead(tilt)==1)
{
 // for(int i=0 ; i<=255 ; i++){ 
  digitalWrite(motor,1);
  }
  else{
    digitalWrite(motor,0);
  }
 
}