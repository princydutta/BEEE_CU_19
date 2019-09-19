void setup()
{
  for(int i=3;i<=6;i++)
  {
  	pinMode(i, OUTPUT);
  }
}
void loop()
{
  for(int i=3;i<=6;i++)
  {
    allLEDsOff();
    if(i!=6)
    {
      digitalWrite(i, HIGH);
  	  digitalWrite(i+1, HIGH);
	  delay(200);
    }
    else
    {
      digitalWrite(i, HIGH);
  	  digitalWrite(i-3, HIGH);
	  delay(200);
      allLEDsOff();
    }
  }
}
void allLEDsOff(void)
{
	for(int i=3;i<=6;i++)
  	{
    digitalWrite(i,LOW);
  	}
  delay(100);
}