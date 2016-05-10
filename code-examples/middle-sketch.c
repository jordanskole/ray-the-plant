// This #include statement was automatically added by the Particle IDE.
#include "SparkFun_Photon_Weather_Shield_Library/SparkFun_Photon_Weather_Shield_Library.h"

char Org[] = "The Iron Yard";
char Disp[] = "Ray the Plant";
char Locn[] = "Detroit, MI";

// Stuff for the soil moisture sensor
int soilPower = D5;
int soilMoisture = A1;


//Create Instance of HTU21D or SI7021 temp and humidity sensor and MPL3115A2 barrometric sensor
Weather sensor;

void setup()

{

  Serial.begin(9600);

  //Initialize the I2C sensors and ping them
  sensor.begin();

  /*You can only receive acurate barrometric readings or acurate altitiude
  readings at a given time, not both at the same time. The following two lines
  tell the sensor what mode to use. You could easily write a function that
  takes a reading in one made and then switches to the other mode to grab that
  reading, resulting in data that contains both acurate altitude and barrometric
  readings. For this example, we will only be using the barometer mode. Be sure
  to only uncomment one line at a time. */

  sensor.setModeBarometer();//Set to Barometer Mode

  // baro.setModeAltimeter();//Set to altimeter Mode
  // These are additional MPL3115A2 functions the MUST be called for the sensor to work.
  sensor.setOversampleRate(7); // Set Oversample rate
  // Call with a rate from 0 to 7. See page 33 for table of ratios.
  // Sets the over sample rate. Datasheet calls for 128 but you can set it
  // from 1 to 128 samples. The higher the oversample rate the greater
  // the time between data samples.

  // set our soil moisture probe power pin as an output
  pinMode(soilPower, OUTPUT);

  // and then set the pin mode to low to preserve the life of the sensor
  digitalWrite(soilPower, LOW);

  Serial.println("Device ready. Booting up...");

  delay(10000);
  Serial.println("Booted.");
}

void loop()

{


  // Measure Relative Humidity from the HTU21D or Si7021
  float h = sensor.getRH();

  // Measure Temperature from the HTU21D or Si7021
  float f = sensor.getTempF();
  // Temperature is measured every time RH is requested.
  // It is faster, therefore, to read it from previous RH
  // measurement with getTemp() instead with readTemp()

  // power the soil moisture sensor just to get a reading
  digitalWrite(soilPower, HIGH);

  // take a soil moisture reading
  int moistureReading;
  moistureReading = analogRead(soilMoisture);

  // and now power it down again to preserve the longevity of the sensor
  digitalWrite(soilPower, LOW);
  Serial.printlnf("Soil moisture is %i", moistureReading);


  // Do some webhook stuff
  // char payload[255];
  // snprintf(payload, sizeof(payload), "{ \"s\":\"wthr\", \"u\":\"F\",\"l\":\"%s\",\"m\":\"Temperature\",\"o\":\"%s\",\"v\": %f,\"d\":\"%s\" }", Locn, Org, f, Disp);
  // Serial.println(payload);
  // Spark.publish("WeatherDweet", payload);

  // wait for 30s to do it all again
  delay(30000);


}
