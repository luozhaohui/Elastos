//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#ifndef __ELASTOS_DROID_CONTENT_PM_CPERMISSIONINFOHELPER_H__
#define __ELASTOS_DROID_CONTENT_PM_CPERMISSIONINFOHELPER_H__

#include "_Elastos_Droid_Content_Pm_CPermissionInfoHelper.h"
#include <elastos/core/Singleton.h>

namespace Elastos {
namespace Droid {
namespace Content {
namespace Pm {

CarClass(CPermissionInfoHelper)
    , public Singleton
    , public IPermissionInfoHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    /** @hide */
    CARAPI FixProtectionLevel(
        /* [in] */ Int32 level,
        /* [out] */ Int32* retLevel);

    /** @hide */
    CARAPI ProtectionToString(
        /* [in] */ Int32 level,
        /* [out] */ String* protLevel);
};

} // namespace Pm
} // namespace Content
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_CONTENT_PM_CPERMISSIONINFOHELPER_H__
