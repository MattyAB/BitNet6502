#import "math.h"

void addInt8ToInt16(int16_t* val16, signed char val8) {
    signed char originalLow = val16->low;
    val16->low += val8;
    
    // Check for overflow or underflow
    if ((val8 >= 0 && val16->low < originalLow) || (val8 < 0 && val16->low > originalLow)) {
        // Overflow or underflow occurred
        val16->high += (val8 >= 0) ? 1 : -1;
    }
}

void subtractInt8FromInt16(int16_t* val16, signed char val8) {
    signed char originalLow = val16->low;
    val16->low -= val8;
    
    // Check for underflow or overflow
    if ((val8 >= 0 && val16->low > originalLow) || (val8 < 0 && val16->low < originalLow)) {
        // Borrow or overflow/underflow occurred
        val16->high -= (val8 >= 0) ? 1 : -1;
    }
}

