#include <WiFi.h>
#include <WebServer.h>
#include "wifi_info.hpp"
#include "frontpage.hpp"

WebServer server(80);

void handleRoot() {
  String html = "<html><body><h1>Hello from ESP32!</h1></body></html>";
  server.send(200, "text/html", html);
}

void wifi_setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP()); // Print the IP address of the ESP32

  // Set up server routes
  // server.on("/", handleRoot);
  server.on("/", []() {
    server.send(200, "text/html", htmlContent);
  });
  server.on("/projects", []() {
    server.send(200, "text/html", NULL);
  });
  server.on("/about-me", []() {
    server.send(200, "text/html", NULL);
  });
  server.on("/contact", []() {
    server.send(200, "text/html", NULL);
  });
  server.begin();
}


void setup() {
  wifi_setup();
}


void loop() {
  server.handleClient();
}
