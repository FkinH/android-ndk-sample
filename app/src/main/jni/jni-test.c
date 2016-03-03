#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_fkinh_ndksample_NdkUtil_test(JNIEnv *env, jobject instance) {

    // TODO

    return (*env)->NewStringUTF(env, "HEHEHEHEHEH");
}