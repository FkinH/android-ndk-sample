#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_fkinh_ndksample_NdkUtil_test(JNIEnv *env, jobject instance) {
    //return a simple string
    return (*env)->NewStringUTF(env, "simple string");
}