//
//  NSData+AES.h
//  Smile
//
//  Created by apple on 15/8/25.
//  Copyright (c) 2015年 Weconex. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface NSData (Encryption)
/*
- (NSData *)AES128EncryptWithKey:(NSString *)key gIv:(NSString *)Iv;   //加密
- (NSData *)AES128DecryptWithKey:(NSString *)key gIv:(NSString *)Iv;   //解密
- (NSData *)AES128EncryptWithDataKey:(NSData *)key gIv:(NSString *)Iv;   //加密
- (NSData *)AES128DecryptWithDataKey:(NSData *)key gIv:(NSString *)Iv; //解密
*/
//256
- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;


@end
