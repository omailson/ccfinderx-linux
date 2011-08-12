/* DO NOT EDIT THIS FILE - it is machine generated */
#include <linux/jni_md.h>
#include <jni.h>
/* Header for class ccfinderx_CCFinderX */

#ifndef _Included_ccfinderx_CCFinderX
#define _Included_ccfinderx_CCFinderX
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ccfinderx_CCFinderX
 * Method:    setModuleDirectory
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ccfinderx_CCFinderX_setModuleDirectory
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    invokeCCFinderX
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ccfinderx_CCFinderX_invokeCCFinderX
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    getVersion
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_ccfinderx_CCFinderX_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    getUserID
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ccfinderx_CCFinderX_getUserID
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    getExpireDate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ccfinderx_CCFinderX_getExpireDate
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    openOfficialSiteTop
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ccfinderx_CCFinderX_openOfficialSiteTop
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    openOfficialSiteUserRgistrationPage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ccfinderx_CCFinderX_openOfficialSiteUserRgistrationPage
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    openOfficialSiteDocumentPage
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ccfinderx_CCFinderX_openOfficialSiteDocumentPage
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    openPrepFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_ccfinderx_CCFinderX_openPrepFile
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    clearPrepFileCacheState
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ccfinderx_CCFinderX_clearPrepFileCacheState
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    getPythonInterpreterPath
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ccfinderx_CCFinderX_getPythonInterpreterPath
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    getApplicationDataPath
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ccfinderx_CCFinderX_getApplicationDataPath
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    getCurrentProcessId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ccfinderx_CCFinderX_getCurrentProcessId
  (JNIEnv *, jobject);

/*
 * Class:     ccfinderx_CCFinderX
 * Method:    isProcessAlive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_ccfinderx_CCFinderX_isProcessAlive
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
