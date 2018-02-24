#include <jni.h>
#include <string>



extern "C"
JNIEXPORT jstring

JNICALL
Java_me_mehdi_objdetectopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Mehdi Haghgoo";
    return env->NewStringUTF(hello.c_str());
}
