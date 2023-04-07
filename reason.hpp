#pragma once

#include"fixed_string.hpp"

template<fixed_string s>
concept reason = false;

// for use in concepts
// idea from Eric Niebler