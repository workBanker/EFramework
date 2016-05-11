//
//  UserApi.h
//  EFExtend
//
//  Created by mac on 16/3/24.
//  Copyright © 2016年 Eric. All rights reserved.
//

#import "UserModel.h"

/**
 *  bean is: WebAPIResult
 */
typedef enum : NSUInteger {
    dataTypeAsPara,
    dataTypeAsData,
    dataTypeAsForm,
} dataType;

@interface UserApi : API

/**
 *  这是通用的http头部属性
 *
 *  @param header
 */
+ (void)setDefaultHeader:(NSDictionary*)header;

/**
 *  发起http请求
 *
 *  @param ispost   true 为 post方式发送，false为 get方式发送
 *  @param dic      发送的数据 NSData 或 NSDictionary
 *  @param command  命令拼接 与 Model中classNames的键值一一对应
 *  @param alias    对该请求进行命名，可用于取消某个请求
 *  @param encrypt  是否进行数据加密 AES方式加密
 *  @param asData   dataType 分类，作为参数，源数据，表单上传
 *  @param receiver 回调代理
 *
 *  @return 会话对象
 */
- (HMDialogue *)postOrGet:(BOOL)ispost paras:(id)dic to:(NSString*)command alias:(NSString*)alias encrypt:(BOOL)encrypt asData:(dataType)asData form:(id<APICallBackProtocol>)receiver;


@end
