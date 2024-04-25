#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdFunctions.h"

namespace Ad {
    namespace Utils {
        float kph_to_mps(const float kph) {
            return kph / Ad::Constants::KPH_TO_MPS;
        }

        float mps_to_kph(const float mps) {
            return mps * Ad::Constants::KPH_TO_MPS;
        }
    }
    namespace Data {
        Ad::Types::Vehicle init_ego_vehicle() {
            return Ad::Types::Vehicle {
                .id = Ad::Constants::EGO_VEHICLE_ID,
                .lane = Ad::Types::Lane::CENTER,
                .speed = Ad::Utils::kph_to_mps(135.0F),
                .relative_distance = 0.0F
            };
        }
    }
    namespace Visualize {
        void print_vehicle(const Ad::Types::Vehicle& vehicle) {
            std::cout <<
                "Vehicle ID: " << vehicle.id << "\n" <<
                "Vehicle speed: " << Ad::Utils::mps_to_kph(vehicle.speed) << "\n" <<
                "Vehicle distance: " << vehicle.relative_distance << "\n";
        }
    }
}
