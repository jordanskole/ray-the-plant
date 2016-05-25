char Org[] = "The Iron Yard";
char Disp[] = "Ray the Plant";
char Locn[] = "Detroit, MI";

// Stuff for the soil moisture sensor
int soilPower = D5;
int soilMoisture = A1;

void setup()

{

  // set our soil moisture probe power pin as an output
  pinMode(soilPower, OUTPUT);

  // and then set the pin mode to low to preserve the life of the sensor
  digitalWrite(soilPower, LOW);

}

void loop()

{

  // power the soil moisture sensor just to get a reading
  digitalWrite(soilPower, HIGH);

  // take a soil moisture reading
  int moistureReading;
  moistureReading = analogRead(soilMoisture);

  // and now power it down again to preserve the longevity of the sensor
  digitalWrite(soilPower, LOW);


  // Do some webhook stuff
  char payload[255];
  snprintf(payload, sizeof(payload), "{ \"plant_name\":\"Maggy\", \"moisture\":\"%i\" }", moistureReading);
  Particle.publish("plant-status", payload);

  // wait for 30s to do it all again
  delay(30000);


}
