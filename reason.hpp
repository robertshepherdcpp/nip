#pragma once

#include"fixed_string.hpp"

template<fixed_string s>
static constexpr auto reason = false;

// for use in concepts
// idea from Eric Niebler