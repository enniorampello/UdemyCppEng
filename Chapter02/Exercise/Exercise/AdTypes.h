#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad {
    namespace Types {

        enum class Lane {
            LEFT,
            CENTER,
            RIGHT
        };

        struct Vehicle {
            int32_t id;
            Lane lane;

            float speed; // m/s
            float relative_distance; // m
        };
    } // namespace Types
} // namespace Ad
