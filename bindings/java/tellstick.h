/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tellstick */

#ifndef _Included_tellstick
#define _Included_tellstick
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     tellstick
 * Method:    devTurnOn
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_tellstick_devTurnOn
  (JNIEnv *, jobject, jint);

/*
 * Class:     tellstick
 * Method:    devTurnOff
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_tellstick_devTurnOff
  (JNIEnv *, jobject, jint);

/*
 * Class:     tellstick
 * Method:    devBell
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_tellstick_devBell
  (JNIEnv *, jobject, jint);

/*
 * Class:     tellstick
 * Method:    devDim
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_tellstick_devDim
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     tellstick
 * Method:    devMethods
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_tellstick_devMethods
  (JNIEnv *, jobject, jint);

/*
 * Class:     tellstick
 * Method:    devGetNumberOfDevices
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tellstick_devGetNumberOfDevices
  (JNIEnv *, jobject);

/*
 * Class:     tellstick
 * Method:    devGetDeviceId
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_tellstick_devGetDeviceId
  (JNIEnv *, jobject, jint);

/*
 * Class:     tellstick
 * Method:    devGetName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tellstick_devGetName
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
