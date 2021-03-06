/*
 * pattern.h
 *
 *  Created on: Jun 4, 2016
 *      Author: aliaksei
 */

#ifndef PATTERN_H_
#define PATTERN_H_

#include "exports.h"
#include "2d/2D.h"

using namespace mozilla::gfx;

#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------------------------- */
/* --------------------- C O L O R ------------------- */
/* --------------------------------------------------- */
LIBRARY_API Pattern* moz2d_pattern_color_create(Color *color);
LIBRARY_API Pattern* moz2d_pattern_color_create_rgba(Float red, Float green, Float blue, Float alpha);
LIBRARY_API void moz2d_pattern_color_get_color(ColorPattern* aPattern, Color* aColor);
LIBRARY_API void moz2d_pattern_color_set_color_rgba(ColorPattern* aPattern, Float red, Float green, Float blue, Float alpha);

LIBRARY_API Pattern* moz2d_pattern_linear_gradient_create(Point *aBegin, Point *anEnd, GradientStops *aStops, Matrix *aMatrix);
LIBRARY_API Pattern* moz2d_pattern_linear_gradient_create_flat(DrawTarget* drawTarget, Float beginX, Float beginY, Float endX, Float endY, Float * rawStops, uint32_t stopsNum, Float * rawMatrix, ExtendMode aExtendMode);
LIBRARY_API Pattern* moz2d_pattern_radial_gradient_create(Point *innerCenter, Point *outerCenter, Float innerRadius, Float outerRadius, GradientStops *aStops, Matrix *aMatrix);
LIBRARY_API Pattern* moz2d_pattern_radial_gradient_create_flat(DrawTarget* drawTarget, Float innerCenterX, Float innerCenterY, Float innerRadius, Float outerCenterX, Float outerCenterY, Float outerRadius, Float * rawStops, uint32_t stopsNum, Float * rawMatrix, ExtendMode aExtendMode);
LIBRARY_API Pattern* moz2d_pattern_surface_create (SourceSurface* surface, int32_t samplingX, int32_t samplingY, int32_t samplingWidth, int32_t samplingHeight, SamplingFilter samplingFilter, ExtendMode aExtendMode, Float a11, Float a12, Float a21, Float a22, Float a31, Float a32);

LIBRARY_API void moz2d_pattern_delete(Pattern* pattern);

#ifdef __cplusplus
}
#endif

already_AddRefed<GradientStops> create_gradient_stops (DrawTarget* drawTarget, Float * rawStops, uint32_t stopsNum, ExtendMode aExtendMode);

#endif /* PATTERN_H_ */
