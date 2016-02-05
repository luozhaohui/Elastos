
#ifndef __ELASTOS_DROID_APP_CMEDIA_ROUTE_BUTTON_H__
#define __ELASTOS_DROID_APP_CMEDIA_ROUTE_BUTTON_H__

#include "_Elastos_Droid_App_CMediaRouteButton.h"
#include "elastos/droid/app/MediaRouteButton.h"

namespace Elastos {
namespace Droid {
namespace App {

CarClass(CMediaRouteButton)
    , public MediaRouteButton
{
public:
    CAR_OBJECT_DECL()
};

} // namespace App
} // namespace Droid
} // namespace Elastos

#endif //__ELASTOS_DROID_APP_CMEDIA_ROUTE_BUTTON_H__