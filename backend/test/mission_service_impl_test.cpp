#include <gmock/gmock.h>

#include "mission/missionrpc_impl.h"
#include "mission/mocks/mission_mock.h"

namespace {

using testing::NiceMock;
using testing::Return;

using MockMission = NiceMock<dronecore::testing::MockMission>;
using MissionServiceImpl = dronecore::backend::MissionServiceImpl<MockMission>;

} // namespace
