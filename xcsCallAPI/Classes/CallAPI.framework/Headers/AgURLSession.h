//
//  AgURLSession.h
//  CallAPI
//
//

#import <Foundation/Foundation.h>
#import "AgCallAPICommon.h"

@interface AgURLSession : NSObject

@property (nonatomic,strong,readonly)AnGooGeneralCallbackBlock CallbackBlock;
@property (nonatomic,strong,readonly) NSDictionary* InputArgs;
@property (nonatomic,readonly) NSUInteger TagID;
@property (nonatomic,strong,readonly) NSError *ResultError;
@property (nonatomic,strong,readonly) id ResultDatas;
@property (nonatomic,readonly) BOOL bDone;

+ (NSOperationQueue*)singletonOpQueue;
- (id)initWithArgs:(NSDictionary*)args tag:(NSUInteger)tagId trustHosts:(NSArray*)trusts completion:(AnGooGeneralCallbackBlock)block;
- (NSURLRequest*)genURLRequestWithUrlString:(NSString*)urlString args:(NSDictionary*)args;
- (void) excuteURLRequest:(NSURLRequest*)urlRequest;
- (void) excuteURLRequest:(NSURLRequest*)urlRequest timeoutInSeconds:(NSTimeInterval)interval;


@end
