/*
 * mathlib.h - GoldSrc Math Library
 * Copyright (c) 1996-2002, Valve LLC. All rights reserved.
 *
 * This product contains software technology licensed from Id 
 * Software, Inc. ("Id Technology"). Id Technology (c) 1996 Id Software, Inc.
 * All Rights Reserved.
 *
 * Use, distribution, and modification of this source code and/or resulting
 * object code is restricted to non-commercial enhancements to products from
 * Valve LLC. All other use, distribution, or modification is prohibited
 * without written permission from Valve LLC.
*/

#pragma once

#ifndef MATHLIB_H
#define MATHLIB_H

#include <math.h>

typedef float vec_t;
typedef vec_t vec3_t[3];

float M_PI_F = (float)M_PI;

static float anglemod(float a);
static float Length(const vec3_t v);

static float DotProduct(const vec3_t x, const vec3_t y);
static void CrossProduct(const vec3_t v1, const vec3_t v2, vec3_t cross);

static void AngleVectors(const vec3_t angles, vec3_t forward, vec3_t right, vec3_t up);
static void AngleVectorsTranspose(const vec3_t angles, vec3_t forward, vec3_t right, vec3_t up);
static void AngleMatrix(const vec3_t angles, float (*matrix)[4]);
static void AngleIMatrix(const vec3_t angles, float matrix[3][4]);
static void NormalizeAngles(float *angles);
static void InterpolateAngles(float *start, float *end, float *output, float frac);
static float AngleBetweenVectors(const vec3_t v1, const vec3_t v2);

static void VectorAdd(const vec3_t a, const vec3_t b, vec3_t c);
static void VectorSubtract(const vec3_t a, const vec3_t b, vec3_t c);
static void VectorCopy(const vec3_t in, vec3_t out);
static void VectorClear(vec3_t a);
static void VectorInverse(vec3_t v);
static void VectorScale(const vec3_t in, vec_t scale, vec3_t out);

static void VectorTransform(const vec3_t in1, float in2[3][4], vec3_t out);
static int VectorCompare(const vec3_t v1, const vec3_t v2);
static float VectorNormalize(vec3_t v);
static void VectorAngles(const vec3_t forward, vec3_t angles);
static void VectorMA(const vec3_t veca, float scale, const vec3_t vecb, vec3_t vecc);
static void VectorMatrix(vec3_t forward, vec3_t right, vec3_t up);

static float Distance(const vec3_t v1, const vec3_t v2);

#endif // MATHLIB_H