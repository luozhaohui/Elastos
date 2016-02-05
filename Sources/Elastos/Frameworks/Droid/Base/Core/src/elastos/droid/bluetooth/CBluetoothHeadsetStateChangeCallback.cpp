
#include "elastos/droid/bluetooth/CBluetoothHeadsetStateChangeCallback.h"
#include "elastos/droid/content/CIntent.h"
#include "elastos/core/AutoLock.h"
#include <elastos/utility/logging/Logger.h>

using Elastos::Droid::Content::CIntent;
using Elastos::Droid::Content::IIntent;
using Elastos::Droid::Os::EIID_IBinder;
using Elastos::Core::AutoLock;
using Elastos::Utility::Logging::Logger;

namespace Elastos {
namespace Droid {
namespace Bluetooth {

CAR_INTERFACE_IMPL_2(CBluetoothHeadsetStateChangeCallback, Object, IIBluetoothStateChangeCallback, IBinder);

CAR_OBJECT_IMPL(CBluetoothHeadsetStateChangeCallback);

CBluetoothHeadsetStateChangeCallback::CBluetoothHeadsetStateChangeCallback()
{
}

ECode CBluetoothHeadsetStateChangeCallback::OnBluetoothStateChange(
    /* [in] */ Boolean up)
{
    if (BluetoothHeadset::DBG) Logger::D(BluetoothHeadset::TAG, "onBluetoothStateChange: up=%d", up);
    if (!up) {
        if (BluetoothHeadset::VDBG) Logger::D(BluetoothHeadset::TAG, "Unbinding service...");
        AutoLock lock(mHost->mConnectionLock);
        // try {
        mHost->mService = NULL;
        ECode ec = mHost->mContext->UnbindService(mHost->mConnection);
        if (FAILED(ec)) {
            Logger::E(BluetoothHeadset::TAG, "0x%08x", ec);
        }
        // } catch (Exception re) {
        //     Log.e(TAG,"",re);
        // }
    }
    else {
        AutoLock lock(mHost->mConnectionLock);
        // try {
        if (mHost->mService == NULL) {
            if (BluetoothHeadset::VDBG) Logger::D(BluetoothHeadset::TAG, "Binding service...");
            AutoPtr<IIntent> intent;
            CIntent::New(String("IBluetoothHeadset")/*IBluetoothHeadset.class.getName()*/, (IIntent**)&intent);
            Boolean result;
            ECode ec = mHost->mContext->BindService(intent, mHost->mConnection, 0, &result);
            if (FAILED(ec)) {
                Logger::E(BluetoothHeadset::TAG, "0x%08x", ec);
            }
            else if (!result) {
                Logger::E(BluetoothHeadset::TAG, "Could not bind to Bluetooth Headset Service");
            }
        }
        // } catch (Exception re) {
        //     Log.e(TAG,"",re);
        // }
    }
    return NOERROR;
}

ECode CBluetoothHeadsetStateChangeCallback::constructor(
    /* [in] */ IInterface* host)
{
    mHost = (BluetoothHeadset*)(IBluetoothHeadset::Probe(host));
    return NOERROR;
}

} // namespace Bluetooth
} // namespace Droid
} // namespace Elastos