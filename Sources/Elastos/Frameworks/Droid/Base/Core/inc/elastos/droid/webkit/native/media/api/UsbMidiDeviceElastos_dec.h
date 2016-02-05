//This file is autogenerated for
//    UsbMidiDeviceAndroid.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_USBMIDIDEVICEANDROID_CALLBACK_DEC_HH
#define ELASTOS_USBMIDIDEVICEANDROID_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_UsbMidiDeviceAndroid_nativeOnData(Handle32 nativeUsbMidiDeviceAndroid,Int32 endpointNumber,ArrayOf<Byte>* data);
    extern void Elastos_UsbMidiDeviceAndroid_InitCallback(Handle32 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Media {

struct ElaUsbMidiDeviceAndroidCallback
{
    void (*elastos_UsbMidiDeviceAndroid_registerSelf)(IInterface* obj, Int64 nativePointer);
    void (*elastos_UsbMidiDeviceAndroid_send)(IInterface* obj, Int32 endpointNumber, ArrayOf<Byte>* bs);
    AutoPtr<ArrayOf<Byte> > (*elastos_UsbMidiDeviceAndroid_getDescriptors)(IInterface* obj);
    void (*elastos_UsbMidiDeviceAndroid_close)(IInterface* obj);
};

void* UsbMidiDeviceElastos::ElaUsbMidiDeviceElastosCallback_Init()
{
    static ElaUsbMidiDeviceAndroidCallback sElaUsbMidiDeviceAndroidCallback;

    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_registerSelf = &UsbMidiDeviceElastos::RegisterSelf;
    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_send = &UsbMidiDeviceElastos::Send;
    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_getDescriptors = &UsbMidiDeviceElastos::GetDescriptors;
    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_close = &UsbMidiDeviceElastos::Close;

    // Elastos_UsbMidiDeviceAndroid_InitCallback((Handle32)&sElaUsbMidiDeviceAndroidCallback);
    return &sElaUsbMidiDeviceAndroidCallback;
}

static void* sPElaUsbMidiDeviceAndroidCallback = UsbMidiDeviceElastos::ElaUsbMidiDeviceElastosCallback_Init();

} // namespace Media
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_USBMIDIDEVICEANDROID_CALLBACK_DEC_HH