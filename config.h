// configuration options
// esp8285 pin out 
// GPIO 12 = D6
// GPIO 14 = D5
// GPIO 13 = D7
// 15 =8
// GPIO 4 = D2 (SDA)
// GPIO 5 = D1 (SCL)
// GPIO 2/3 = D4/RX

#define CO2_RX 12
#define CO2_TX 14

#define SCL 5
#define SDA 4

// ota updater stuff
const String VERSION = "1";

#define LED_PIN 16 // ESP M2 Strong has LED on GPIO 16.
#define INITIALIZED_MARKER 7216

#define METADATA_CHK_SECS 24 * 60 * 60 // Check for updated config metadata once a day
