#include <Arduino.h>
#include <stdint.h>

#if defined(ARDUINO_AVR_UNO)

#error Uno unsupported test OK!

#endif

class libTestClass{

public:
  libTestClass( uint8_t a_p );

private:
  uint8_t a = 0;

};
