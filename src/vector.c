#include "include/vector.h"
#include "math.h"

float VEC_Magnitude(vector2 self){
    return sqrt(self.x*self.x + self.y*self.y);
}

vector2 VEC_Normalize(vector2 self){
    vector2 retval;
    retval.x = self.x / VEC_Magnitude(self);
    retval.y = self.y / VEC_Magnitude(self);

    return retval;
}
