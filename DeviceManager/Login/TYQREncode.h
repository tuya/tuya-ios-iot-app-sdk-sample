//
//  TYQREncode.h
//  DeviceManager
//
//  Copyright (c) 2014-2021 Tuya Inc. (https://developer.tuya.com/)

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYQREncode : NSObject

+ (NSDictionary *)infoFromEncryptString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
