//Rename to conf.h
#define CONFIG_DEVICE_ID "R2D2Airco"

#define CONFIG_DHTPIN 5     // what digital pin we're connected to
#define CONFIG_DHTTYPE DHT11   

#define CONFIG_IRPIN 4

// WiFi
#define CONFIG_WIFI_SSID "SSID"
#define CONFIG_WIFI_PASS "MySampleWifiPassword"

// MQTT
#define CONFIG_MQTT_HOST "mqtt.example.com"
#define CONFIG_MQTT_PORT 1883
#define CONFIG_MQTT_USER "MQTTUserName"
#define CONFIG_MQTT_PASS "SamplePassword"
#define CONFIG_MQTT_CLIENT_ID "R2D2Blaster" 

// MQTT Topics
#define CONFIG_MQTT_MODE_COMMAND_TOPIC "climate/R2D2/mode/set"
#define CONFIG_MQTT_MODE_STATE_TOPIC "climate/R2D2/mode/state"
#define CONFIG_MQTT_TEMPERATURE_COMMAND_TOPIC "climate/R2D2/temperature/set"
#define CONFIG_MQTT_TEMPERATURE_STATE_TOPIC "climate/R2D2/temperature/state"
#define CONFIG_MQTT_TEMPERATURE_SENSOR_TOPIC "climate/R2D2/temperature/sensor"
