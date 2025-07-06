#pragma once

struct {
    float x;
    float y;
} typedef vector2;

float VEC_Magnitude(vector2 self);
vector2 VEC_Normalize(vector2 self);
