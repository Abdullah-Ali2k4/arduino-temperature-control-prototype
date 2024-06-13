

#define ADC_VREF_mV    5000.0 // in millivolt
#define ADC_RESOLUTION 1024.0
#define PIN_LM35       A0 // The Arduino Nano pin connected to LM35 sensor
float value = 0.10;

void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  // get the ADC value from the temperature sensor
  int adcVal = analogRead(PIN_LM35);
  // convert the ADC value to voltage in millivolt
  float milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);
  // convert the voltage to the temperature in Celsius
  int temperature_C = milliVolt / 10;
  // convert the Celsius to Fahrenheit
  float temperature_F = temperature_C * 9 / 5 + 32;

  Serial.print(temperature_C);   // print the temperature in Celsius
   Serial.print (" ");

  if(temperature_C >75){
    Serial.print( 100 );
    digitalWrite(3,HIGH);
  }else{
    Serial.println(70);
    digitalWrite(3,LOW);
    }
Serial.println();
  delay(100);
}


