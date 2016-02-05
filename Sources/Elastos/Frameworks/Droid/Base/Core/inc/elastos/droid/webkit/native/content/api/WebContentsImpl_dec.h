//This file is autogenerated for
//    WebContentsImpl.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_WEBCONTENTSIMPL_CALLBACK_DEC_HH
#define ELASTOS_WEBCONTENTSIMPL_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern String Elastos_WebContentsImpl_nativeGetTitle(IInterface* caller,Handle32 nativeWebContentsAndroid);
    extern String Elastos_WebContentsImpl_nativeGetVisibleURL(IInterface* caller,Handle32 nativeWebContentsAndroid);
    extern void Elastos_WebContentsImpl_nativeStop(IInterface* caller,Handle32 nativeWebContentsAndroid);
    extern void Elastos_WebContentsImpl_InitCallback(Handle32 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Content {
namespace Browser {
namespace Webcontents {

struct ElaWebContentsImplCallback
{
    AutoPtr<IInterface> (*elastos_WebContentsImpl_create)(Int64 nativeWebContentsAndroid, IInterface* navigationController);
    void (*elastos_WebContentsImpl_destroy)(IInterface* obj);
    Int64 (*elastos_WebContentsImpl_getNativePointer)(IInterface* obj);
};

void* WebContentsImpl::ElaWebContentsImplCallback_Init()
{
    static ElaWebContentsImplCallback sElaWebContentsImplCallback;

    sElaWebContentsImplCallback.elastos_WebContentsImpl_create = &WebContentsImpl::Create;
    sElaWebContentsImplCallback.elastos_WebContentsImpl_destroy = &WebContentsImpl::Destroy;
    sElaWebContentsImplCallback.elastos_WebContentsImpl_getNativePointer = &WebContentsImpl::GetNativePointer;

    Elastos_WebContentsImpl_InitCallback((Handle32)&sElaWebContentsImplCallback);
    return &sElaWebContentsImplCallback;
}

static void* sPElaWebContentsImplCallback = WebContentsImpl::ElaWebContentsImplCallback_Init();

} // namespace Webcontents
} // namespace Browser
} // namespace Content
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_WEBCONTENTSIMPL_CALLBACK_DEC_HH