//
//  AgCallAPICommon.h
//  CallAPI
//
//

#ifndef AgCallAPICommon_h
#define AgCallAPICommon_h

#define NotNilString(testObj) ((testObj!= nil&&[testObj isKindOfClass:[NSString class]]&&[testObj length]>0)?testObj:@"")


typedef void (^AnGooGeneralCallbackBlock)(id selfObj, NSInteger tag, id data, NSError* error);


#endif /* AgCallAPICommon_h */
