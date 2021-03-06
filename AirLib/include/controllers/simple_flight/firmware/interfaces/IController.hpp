#pragma once

#include <cstdint>
#include "IUpdatable.hpp"
#include "IGoalInput.hpp"
#include "IStateEstimator.hpp"
#include "IBoardClock.hpp"

namespace simple_flight {

class IController : public IUpdatable {
public:
    virtual void initialize(const IGoalInput* goal_input, const IStateEstimator* state_estimator) = 0;
    virtual void reset() override = 0;
    virtual void update() override = 0;
    virtual const Axis4r& getOutput() = 0;
};

} //namespace