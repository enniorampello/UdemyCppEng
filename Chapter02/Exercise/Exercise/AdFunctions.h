#pragma once

#include "AdTypes.h"

namespace Ad {
    namespace Data {
        Ad::Types::Vehicle init_ego_vehicle();
    }
    namespace Visualize {
        void print_vehicle(const Ad::Types::Vehicle& vehicle);
    }
    namespace Utils {
        float kph_to_mps(const float kph);
        float mps_to_kph(const float mps);
    }
}
