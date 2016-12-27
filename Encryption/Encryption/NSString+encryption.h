//
//  NSString+encryption.h
//  Encryption
//
//  Created by LiCheng on 16/8/4.
//  Copyright © 2016年 Li_Cheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (encryption)


/**
 *  md5加密 32位 小写
 */
- (NSString *)md5ForLower32Bate;

/**
 *  MD5加密 16位 小写
 */
- (NSString *)md5ForLower16Bate;


/**
 *  md5加密 32位 大写
 */
- (NSString *)md5ForUpper32Bate;

/**
 *  MD5加密 16位 大写
 */
- (NSString *)md5ForUpper16Bate;


- (NSString *)md5;
- (NSString *)sha1;

- (NSString *)desForkey:(NSString *)key;
@end
