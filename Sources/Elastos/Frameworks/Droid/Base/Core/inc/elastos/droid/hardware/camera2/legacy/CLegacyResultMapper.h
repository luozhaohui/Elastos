
#ifndef __ELASTOS_DROID_HARDWARE_CAMERA2_LEGECY_CLEGACYRESULTMAPPER_H__
#define __ELASTOS_DROID_HARDWARE_CAMERA2_LEGECY_CLEGACYRESULTMAPPER_H__

#include "_Elastos_Droid_Hardware_Camera2_Legacy_CLegacyResultMapper.h"
#include "elastos/droid/hardware/camera2/legacy/LegacyResultMapper.h"

namespace Elastos {
namespace Droid {
namespace Hardware {
namespace Camera2 {
namespace Legacy {

CarClass(CLegacyResultMapper)
    , public LegacyResultMapper
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Legacy
} // namespace Camera2
} // namespace Hardware
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_HARDWARE_CAMERA2_LEGECY_CLEGACYRESULTMAPPER_H__