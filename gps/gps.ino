#include <TinyGPS++.h>
#include <HardwareSerial.h>

// GPS serial connection
#define GPS_RX 16  // ESP32 RX pin
#define GPS_TX 17  // ESP32 TX pin

HardwareSerial gpsSerial(2);  // Use UART2
TinyGPSPlus gps;

void setup() {
  Serial.begin(115200);
  gpsSerial.begin(9600, SERIAL_8N1, GPS_RX, GPS_TX);
  
  Serial.println("GPS NEO-6M Test");
  Serial.println("Waiting for GPS signal...");
}

void loop() {
  // Read GPS data
  while (gpsSerial.available() > 0) {
    char c = gpsSerial.read();
    gps.encode(c);
    
    if (gps.location.isUpdated()) {
      Serial.println("===========================");
      
      // Latitude and Longitude
      Serial.print("Latitude: ");
      Serial.println(gps.location.lat(), 6);
      Serial.print("Longitude: ");
      Serial.println(gps.location.lng(), 6);
      
      // Altitude
      Serial.print("Altitude: ");
      Serial.print(gps.altitude.meters());
      Serial.println(" meters");
      
      // Speed
      Serial.print("Speed: ");
      Serial.print(gps.speed.kmph());
      Serial.println(" km/h");
      
      // Date and Time
      Serial.print("Date: ");
      Serial.print(gps.date.day());
      Serial.print("/");
      Serial.print(gps.date.month());
      Serial.print("/");
      Serial.println(gps.date.year());
      
      Serial.print("Time: ");
      Serial.print(gps.time.hour()+7);
      Serial.print(":");
      Serial.print(gps.time.minute());
      Serial.print(":");
      Serial.println(gps.time.second());
      
      // Number of satellites
      Serial.print("Satellites: ");
      Serial.println(gps.satellites.value());
      
      Serial.println("===========================");
    }
  }
  
  // Check if GPS is working
  if (millis() > 5000 && gps.charsProcessed() < 10) {
    Serial.println("No GPS data received. Check wiring!");
  }
}