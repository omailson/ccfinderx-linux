/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class utility_Decoder */

#ifndef _Included_utility_Decoder
#define _Included_utility_Decoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     utility_Decoder
 * Method:    decode
 * Signature: ([BLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_utility_Decoder_decode___3BLjava_lang_String_2
  (JNIEnv *, jclass, jbyteArray, jstring);

/*
 * Class:     utility_Decoder
 * Method:    decode
 * Signature: ([B)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_utility_Decoder_decode___3B
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     utility_Decoder
 * Method:    isValidEncoding
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_utility_Decoder_isValidEncoding
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif