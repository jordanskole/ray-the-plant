// Stuff for the soil moisture sensor
int soilPowerPin = D5; // whatever pin is powering the soil moisture sensor
int soilMoisturePin = A1; // whatever pin is reading the soil moisture

// runs through once, right when the photon turns on
void setup()

{

  // set our soil moisture probe power pin as an output
  pinMode(soilPowerPin, OUTPUT);

  // and then set the pin mode to low to preserve the life of the sensor
  digitalWrite(soilPowerPin, LOW);

}

// runs through forever, as long as the photon is on
void loop()

{

  // power the soil moisture sensor just to get a reading
  digitalWrite(soilPowerPin, HIGH);

  // take a soil moisture reading
  int moistureReading;
  moistureReading = analogRead(soilMoisturePin);

  // and now power it down again to preserve the longevity of the sensor
  digitalWrite(soilPowerPin, LOW);


  // Do some webhook stuff (this is the magic)
  char payload[255];
  snprintf(payload, sizeof(payload), "{ \"plant_name\":\"Maggy\", \"moisture\":\"%i\" }", moistureReading);

  // THIS IS THE MAGIC
  //
  Particle.publish("plant-status", payload);

  // wait for 30s to do it all again
  delay(30000);


}
