
// Message to post
char msg[] = "Hi, I'm tweeting from a freaking arduino right now!";
#include <string.h>
#define LIB_DOMAIN "arduino-tweet.appspot.com"
#define TOKEN "**PLACE TOKEN HERE**"
TCPClient client;
// EXAMPLE USAGE

void setup()
{
  delay(1000);
  // or you can use DHCP for autoomatic IP address configuration.
  // Ethernet.begin(mac);
  Serial.begin(9600);
  
  Serial.println("connecting .test..");
   client.connect(LIB_DOMAIN, 80);
    client.println("POST /update HTTP/1.0");
    client.println("Host: " LIB_DOMAIN);
    client.print("Content-Length: ");
    client.println(strlen(msg)+strlen(TOKEN)+14);
    client.println();
    client.print("token=");
    client.print(TOKEN);
    client.print("&status=");
    client.println(msg);
}

void loop() 
{
  Serial.println("connecting .test");
}
