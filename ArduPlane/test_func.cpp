#include "Plane.h"
#include <AP_HAL/AP_HAL.h>
#include <AP_Common/AP_Common.h>

#include <AP_HAL/system.h>

#include <AP_BoardConfig/AP_BoardConfig.h>
#include <AP_BoardConfig/AP_BoardConfig_CAN.h>

#include <AP_HAL_PX4/AP_HAL_PX4_Namespace.h>


void test_msg() {
   // const_cast <AP_HAL::HAL&> (hal).can_mgr = new AP_HAL::CANManager;
    gcs().send_text(MAV_SEVERITY_INFO,"test");
    //hal.can_mgr.is_initialized());
}