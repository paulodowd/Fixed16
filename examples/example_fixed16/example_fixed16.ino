
#include "Fixed16.h"

// This configures as:
// (2) integer bits
//  5 fractional bits
//  1 sign bit
// Giving:
//  Min value: -4.0
//  Max value: +3.9998779296875
//  Frac resolution: ~0.0001220703125
Fixed16 fx(2);   

void setup() {
    Serial.begin(115200);

    int16_t a = fx.fromFloat(3.25);
    int16_t b = fx.fromFloat(-1.5);

    int16_t c1 = fx.add(a, b);
    int16_t c2 = fx.mul(a, b);
    int16_t c3 = fx.div(a, b);

    Serial.print("Format: ");
    Serial.print(fx.integerBits());
    Serial.print(".");
    Serial.println(fx.fractionalBits());

    Serial.print("a = "); Serial.println(fx.toFloat(a));
    Serial.print("b = "); Serial.println(fx.toFloat(b));
    Serial.print("a + b = "); Serial.println(fx.toFloat(c1));
    Serial.print("a * b = "); Serial.println(fx.toFloat(c2));
    Serial.print("a / b = "); Serial.println(fx.toFloat(c3));
}

void loop() {}
