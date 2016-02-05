#include "elastos/droid/media/CAudioPort.h"
#include "elastos/droid/media/CAudioPortConfig.h"
#include "elastos/droid/media/CFocusRequester.h"
#include "elastos/droid/media/CMediaFocusControl.h"
#include "elastos/droid/media/CMediaRouterClientState.h"
#include "elastos/droid/media/CMediaRouterClientStateRouteInfo.h"
#include "elastos/droid/media/CMediaSyncEvent.h"
#include "elastos/droid/media/CRemoteDisplayInfo.h"
#include "elastos/droid/media/CRemoteDisplayState.h"
#include "elastos/droid/media/CSRTRenderer.h"
#include "elastos/droid/media/CSRTTrack.h"
#include "elastos/droid/media/CSubtitleController.h"
#include "elastos/droid/media/CSubtitleData.h"
#include "elastos/droid/media/CTextTrackCue.h"
#include "elastos/droid/media/CTextTrackRegion.h"
#include "elastos/droid/media/CUnstyledTextExtractor.h"
#include "elastos/droid/media/CWebVttParser.h"
#include "elastos/droid/media/CWebVttRendererTextTrackCue.h"
#include "elastos/droid/media/CWebVttRendererTokenizer.h"
#include "elastos/droid/media/CWebVttRendererTokenizerDataTokenizer.h"
#include "elastos/droid/media/CWebVttRendererTokenizerTagTokenizer.h"
#include "elastos/droid/media/CWebVttRenderingWidget.h"
#include "elastos/droid/media/CWebVttTrack.h"
#include "elastos/droid/media/CTtmlRenderer.h"

namespace Elastos {
namespace Droid {
namespace Media {

CAR_OBJECT_IMPL(CAudioPort)
CAR_OBJECT_IMPL(CAudioPortConfig)
CAR_OBJECT_IMPL(CFocusRequester)
CAR_OBJECT_IMPL(CMediaFocusControl)
CAR_OBJECT_IMPL(CSubtitleController)
CAR_OBJECT_IMPL(CSubtitleData)
CAR_OBJECT_IMPL(CWebVttRendererTokenizer)
CAR_OBJECT_IMPL(CWebVttRendererTokenizerDataTokenizer)
CAR_OBJECT_IMPL(CWebVttRendererTokenizerTagTokenizer)
CAR_OBJECT_IMPL(CWebVttRendererTextTrackCue)
CAR_OBJECT_IMPL(CWebVttParser)
CAR_OBJECT_IMPL(CTextTrackRegion)
CAR_OBJECT_IMPL(CWebVttRenderingWidget)
CAR_OBJECT_IMPL(CTextTrackCue)
CAR_OBJECT_IMPL(CUnstyledTextExtractor)
CAR_OBJECT_IMPL(CMediaSyncEvent)
CAR_OBJECT_IMPL(CSRTRenderer)
CAR_OBJECT_IMPL(CSRTTrack)
CAR_OBJECT_IMPL(CWebVttTrack)
CAR_OBJECT_IMPL(CMediaRouterClientState)
CAR_OBJECT_IMPL(CMediaRouterClientStateRouteInfo)
CAR_OBJECT_IMPL(CRemoteDisplayState)
CAR_OBJECT_IMPL(CRemoteDisplayInfo)
CAR_OBJECT_IMPL(CTtmlRenderer)

} // namespace Media
} // namepsace Droid
} // namespace Elastos