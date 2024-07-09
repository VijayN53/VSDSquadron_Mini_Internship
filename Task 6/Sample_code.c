#include <stdio.h>
#include <wiringPi.h>

#define SOUND_SENSOR_PIN 0  // GPIO0
#define LED_PIN 1           // GPIO1

void setup() {
    wiringPiSetup();              // Initialize wiringPi library
    pinMode(SOUND_SENSOR_PIN, INPUT);  // Set sound sensor pin as input
    pinMode(LED_PIN, OUTPUT);     // Set LED pin as output
}

void loop() {
    if (digitalRead(SOUND_SENSOR_PIN) == HIGH) {  // Detect clap
        digitalWrite(LED_PIN, HIGH);              // Turn on LED
        delay(500);                               // Keep LED on for 500ms
        digitalWrite(LED_PIN, LOW);               // Turn off LED
    }
    delay(100);  // Short delay to debounce sensor
}

int main() {
    setup();
    while (1) {
        loop();
    }
    return 0;
}
