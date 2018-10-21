//
//  AgAESCipher.h
//  CallAPI
//
//

#import <Foundation/Foundation.h>

@interface AgAESCipher : NSObject

-(id)initWithFirstKey:(NSString*)firstKey secondKey:(NSString*)secondKey;
- (NSString *)encryptAES:(NSString *)content;
- (NSString *)decryptAES:(NSString *)content;
- (NSData*)dataFromToEncryptAESString:(NSString*)content;

- (NSString*)MD5:(NSString*)theString;
- (NSString*)urlencodeString:(NSString*)original;
@end
