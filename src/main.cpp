#include <Arduino.h>
#include <wifi.h>
#include <dummy.h>
const char* ssid = "ZIEICD";
const char* password = "1999200120132016";
const uint16_t port = 4444;
const char* host = "192.168.1.54";

WiFiClient client;

void setup() {
  Serial.begin(115200);
 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("...");
  }
 
  Serial.print("WiFi connected with IP: ");
  Serial.println(WiFi.localIP());

  if (!client.connect(host, port)) {
 
        Serial.println("Connection to host failed");
 
        delay(1000);
        return;
    }

  Serial.println("Connected to server successful!");
}

void loop() {
  // put your main code here, to run repeatedly:
    
    Serial.println("Sending Data");
    client.print("Hellow world\n");
    delay(10000);
}