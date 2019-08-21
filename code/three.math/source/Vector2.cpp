#include "linmath/vector2_type.h"
#include "Types.h"
using three::linmath::vector2_type;

namespace three {

template<> constexpr vector2_type<i32> vector2_type<i32>::Zero  { 0 };
template<> constexpr vector2_type<i32> vector2_type<i32>::One   { 1 };
template<> constexpr vector2_type<i32> vector2_type<i32>::UnitX { 1, 0 };
template<> constexpr vector2_type<i32> vector2_type<i32>::UnitY { 0, 1 };

template<> constexpr vector2_type<f32> vector2_type<f32>::Zero  { 0 };
template<> constexpr vector2_type<f32> vector2_type<f32>::One   { 1 };
template<> constexpr vector2_type<f32> vector2_type<f32>::UnitX { 1, 0 };
template<> constexpr vector2_type<f32> vector2_type<f32>::UnitY { 0, 1 };

template<> constexpr vector2_type<f64> vector2_type<f64>::Zero  { 0 };
template<> constexpr vector2_type<f64> vector2_type<f64>::One   { 1 };
template<> constexpr vector2_type<f64> vector2_type<f64>::UnitX { 1, 0 };
template<> constexpr vector2_type<f64> vector2_type<f64>::UnitY { 0, 1 };

static_assert(sizeof(vector2_type<f32>::Zero) == 2 * sizeof(f32));
static_assert(sizeof(vector2_type<f64>::Zero) == 2 * sizeof(f64));

} // namespace three
