#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PrivittyBridge : NSObject

+ (void)startCallbackListener;
+ (NSString *)version;
+ (BOOL)isChatVersion:(NSString *)mimeHeader;
+ (void)startEventLoop:(NSString *)path;
+ (BOOL)setConfigurationy:(NSString *)key value:(NSString *)value;
+ (void)produceEvent:(int)eventType
                  mID:(NSString *)mID
                  mName:(NSString *)mName
                  msgId:(int)msgId
                  fromId:(int)fromId
                  chatId:(int)chatId
                  pCode:(NSString *)pCode
                  filePath:(NSString *)filePath
                  fileName:(NSString *)fileName
                  direction:(int)direction
                  pdu:(NSString *)pdu;
+ (void)stopConsumer;
+ (NSString *)encryptFile:(int)chatId filePath:(NSString *)filePath fileName:(NSString *)fileName deleteInputFile:(BOOL)deleteInputFile;
+ (void)freshOtsp:(int)chatId filePath:(NSString *)filePath;
+ (NSString *)decryptFile:(int)chatId filePath:(NSString *)filePath fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (BOOL)isPeerAdded:(int)chatId;
+ (void)addMessage:(int)msgId
                    chatId:(int)chatId
                    fromId:(int)fromId
                   msgText:(NSString *)msgText
                   msgType:(NSString *)msgType
                 mediaPath:(NSString *)mediaPath
                  fileName:(NSString *)fileName
        fileSessionTimeout:(int)fileSessionTimeout
               canDownload:(int)canDownload
               canForward:(int)canForward
  numPeerSplitKeysRequest:(int)numPeerSplitKeysRequest
              forwardedTo:(NSString *)forwardedTo
     sentPrivittyProtected:(int)sentPrivittyProtected;
+ (BOOL)isChatPrivittyProtected:(int)chatId;
+ (BOOL)deleteChat:(int)chatId;
+ (BOOL)revokeMsgs:(int)chatId filePath:(NSString *)filePath;
+ (int)getFileAccessState:(int)chatId fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (int)getFileForwardAccessState:(int)chatId filePath:(NSString *)filePath direction:(BOOL)isOutgoing;
+ (BOOL)canDownloadFile:(int)chatId fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (BOOL)canForwardFile:(int)chatId fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (void)setFileAttributes:(int)chatId prvFilePath:(NSString *)prvFilePath direction:(BOOL)isOutgoing download:(BOOL)download forward:(BOOL)forward accessTime:(int)accessTime;
+ (NSString *)decryptForwardedFile:(int)chatId filePath:(NSString *)filePath fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (void)setFileForwardAttributes:(int)chatId recipientId:(NSString *)recipientId fileName:(NSString *)fileName direction:(BOOL)isOutgoing download:(BOOL)download forward:(BOOL)forward accessTime:(int)accessTime;
+ (void)setForwardGrant:(int)chatId filePath:(NSString *)filePath grant:(BOOL)grant;
+ (BOOL)isMsgPrivittyProtected:(int)chatId msgId:(int)msgId;

@end

NS_ASSUME_NONNULL_END