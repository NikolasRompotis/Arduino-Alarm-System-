// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char GPRS_APN[]      = SECRET_OPTIONAL_APN;
const char PINNUMBER[]     = SECRET_OPTIONAL_PIN;
const char GPRS_LOGIN[]    = SECRET_OPTIONAL_USERNAME;
const char GPRS_PASSWORD[] = SECRET_OPTIONAL_PASSWORD;


String message;
float ACCurrentValue;
float Vo_Value;
int temp1;
int temp2;

void initProperties(){

  ArduinoCloud.addProperty(message, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(ACCurrentValue, READ, 5 * SECONDS, NULL);
  ArduinoCloud.addProperty(Vo_Value, READ, ON_CHANGE, NULL, 1);
  ArduinoCloud.addProperty(temp1, READ, ON_CHANGE, NULL, 1);
  ArduinoCloud.addProperty(temp2, READ, ON_CHANGE, NULL, 1);

}

NBConnectionHandler ArduinoIoTPreferredConnection(PINNUMBER, GPRS_APN, GPRS_LOGIN, GPRS_PASSWORD);