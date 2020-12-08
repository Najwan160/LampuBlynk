#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial
char auth[] = "TH4O2RyUIvkbq-2wxBif9bD6UKGGK-6l";
char ssid[] = "NajwanNuha";
char pswd[] = "blacktrajet";

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pswd);
}

void loop() {
  Blynk.run();

}
