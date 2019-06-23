#include <ESP8266WiFi.h>
#include <SPI.h>
#include <Ethernet.h>

byte mac[] = { 0x14, 0x4F, 0x8A, 0x12, 0x88, 0xD3 };
char serverName[] = {172,20,10,8};
int serverPort = 80;
const char* ssid = "Louis ardilly";
const char* password = "12345678";
WiFiServer server(80);
EthernetClient client;

#include "DHT.h"

#define DHTPIN 0 // broche ou l'on a branche le capteur

#define DHTTYPE DHT22 // DHT 22 (AM2302)

DHT dht(DHTPIN, DHTTYPE);//déclaration du capteurmù

char donnees;

int temperature;



void setup()

{

  temperature = 20;

  Serial.begin(115200);

  dht.begin();

  delay(100);

  Serial.println();

  Serial.print("Connecting to ");

  Serial.println(ssid);


  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)

  {

    delay(500);

    Serial.print(".");

  }



  Serial.println("WiFi connecter");

  server.begin();

  Serial.println("Serveur demarrer !");

  Serial.print("Utiliser cette adresse URL pour la connexion :");

  Serial.print("http://");

  Serial.print(WiFi.localIP());

 Serial.println("/");


}


void loop()

{
 

float h = dht.readHumidity();

int t = dht.readTemperature();
float hic = dht.computeHeatIndex(t, h, false);



 

//Serial.print(h);
Serial.println(t);
Serial.print("°C");
Serial.println(h);
Serial.print("%");

String temperature = "temperature=5";
Serial.println(temperature);

 Serial.println("connecting...");
  if (client.connect(serverName,serverPort)){
    Serial.println("connected");

    client.print("GET /database.php" );
    client.println(" HTTP/1.1 ");
    client.print("Host: ");
    client.println(serverName);
    client.println("User-Agent: Arduino/1.0");
    client.println("Connection: close");
    client.println("Content-Type: application/x-www-form-urlencoded");
    client.print(temperature.length());
    client.print("\n\n");
    client.print(temperature);
     
  } else {
    Serial.println("connection failed");
  }

if (isnan(h) || isnan(t))

{

   Serial.println("Failed to read from DHT sensor!");

   return;

}

delay(2000);
 
   client.stop();

}
