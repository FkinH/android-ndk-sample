package com.fkinh.ndksample;

/**
 * Author: fkinh
 * Date: 2016-03-03
 */
public class NdkUtil {

    static {
        System.loadLibrary("jni-test");
    }

    //define native method
    public native String test();
}
