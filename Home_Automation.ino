//Code by Smart Tech Tuition
//Home Automation
int R1 = 5;
int R2 = 6;
char val;

void setup() {
  // put your setup code here, to run once:
pinMode(R1, OUTPUT);
pinMode(R2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()==1)
{
val=Serial.read();
Serial.println(val);

if(val == 'A')
{
  digitalWrite(R1,LOW);
}
if(val == 'a')
{
  digitalWrite(R2,HIGH);
}
if(val == 'B')
{
  digitalWrite(R2,LOW);
}
if(val == 'b')
{
  digitalWrite(R2, HIGH);
}
}
}
