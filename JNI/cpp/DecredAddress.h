// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#ifndef JNI_TW_DECREDADDRESS_H
#define JNI_TW_DECREDADDRESS_H

#include <jni.h>
#include <TrustWalletCore/TWBase.h>

TW_EXTERN_C_BEGIN

JNIEXPORT
jlong JNICALL Java_wallet_core_jni_DecredAddress_nativeCreateWithString(JNIEnv *env, jclass thisClass, jstring string);

JNIEXPORT
jlong JNICALL Java_wallet_core_jni_DecredAddress_nativeCreateWithPublicKey(JNIEnv *env, jclass thisClass, jobject publicKey);

JNIEXPORT
void JNICALL Java_wallet_core_jni_DecredAddress_nativeDelete(JNIEnv *env, jclass thisClass, jlong handle);

JNIEXPORT
jboolean JNICALL Java_wallet_core_jni_DecredAddress_equals(JNIEnv *env, jclass thisClass, jobject lhs, jobject rhs);

JNIEXPORT
jboolean JNICALL Java_wallet_core_jni_DecredAddress_isValidString(JNIEnv *env, jclass thisClass, jstring string);

JNIEXPORT
jstring JNICALL Java_wallet_core_jni_DecredAddress_description(JNIEnv *env, jobject thisObject);


TW_EXTERN_C_END

#endif // JNI_TW_DECREDADDRESS_H
