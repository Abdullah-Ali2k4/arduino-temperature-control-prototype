# Arduino Temperature Control Prototype

This project demonstrates temperature control using an Arduino Nano and a potentiometer to simulate temperature changes. When the temperature exceeds a predefined threshold, a buzzer sounds and a fan activates to cool down the system.

## Components Used

- Arduino Nano
- Potentiometer
- Buzzer
- Fan
- Breadboard
- Serial Analyzer (for data visualization)
- npn trasister

## Mathematical Concepts

### Analog-to-Digital Conversion (ADC)

The potentiometer outputs an analog voltage proportional to the simulated temperature. This voltage is converted to a digital value (`adcVal`) using the Arduino's built-in ADC, which ranges from 0 to 1023 (10-bit resolution).

### Temperature Calculation

The analog voltage (`milliVolt`) is converted to temperature in Celsius (`temperature_C`) and Fahrenheit (`temperature_F`):
1. **To convert millivolts to degrees Celsius (°C)**:
   - Substitute the millivolt value into the formula:
     ```
     temperature_C = milliVolt / 10
     ```
   - Example: If `milliVolt` is 1000 mV, then `temperature_C = 1000 / 10 = 100` °C.

2. **To convert degrees Celsius (°C) to degrees Fahrenheit (°F)**:
   - First, calculate the temperature in degrees Celsius using the above formula.
   - Then, substitute the result into the Fahrenheit conversion formula:
     ```
     temperature_F = temperature_C * 9/5 + 32
     ```
   - Example: If `temperature_C` is 100 °C, then `temperature_F = 100 * 9/5 + 32 = 212` °F.



### Temperature Threshold and Control

The project sets a temperature threshold of 70°C. When the simulated temperature exceeds this threshold, the buzzer sounds and the fan activates to cool the system.

## Setup and Usage

1. **Hardware Setup**:
   - Connect the potentiometer, buzzer, and fan to the Arduino Nano as per the circuit diagram.

2. **Upload Code**:
   - Cheakout the provided Arduino sketch in the repository.

3. **Monitor Temperature**:
   - Open the Serial Monitor in the Arduino IDE to view temperature readings and control actions.

## Conclusion

This project showcases the integration of Arduino programming, mathematical calculations for temperature conversion, and practical application of temperature control using basic electronic components. It serves as a prototype for further development in temperature monitoring and regulation systems.

Feel free to contribute, modify, or use this project for educational purposes.

