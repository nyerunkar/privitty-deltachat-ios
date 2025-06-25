#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PrivittyBridge : NSObject

+ (NSString *)version;
+ (BOOL)isChatVersion:(NSString *)mimeHeader;
+ (void)startEventLoop:(NSString *)path;
+ (BOOL)setConfigurationWithKey:(NSString *)key value:(NSString *)value;
+ (void)stopConsumer;
+ (NSString *)encryptFileForChatId:(int)chatId filePath:(NSString *)filePath fileName:(NSString *)fileName;
+ (void)freshOtspForChatId:(int)chatId filePath:(NSString *)filePath;
+ (NSString *)decryptFileForChatId:(int)chatId filePath:(NSString *)filePath fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (BOOL)isPeerAdded:(int)chatId;
+ (void)addMessageWithMsgId:(int)msgId
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
+ (BOOL)revokeMessagesForChatId:(int)chatId filePath:(NSString *)filePath;
+ (int)getFileAccessStateForChatId:(int)chatId fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (int)getFileForwardAccessStateForChatId:(int)chatId filePath:(NSString *)filePath direction:(BOOL)isOutgoing;
+ (BOOL)canDownloadFileForChatId:(int)chatId fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (BOOL)canForwardFileForChatId:(int)chatId fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (void)setFileAttributesForChatId:(int)chatId prvFilePath:(NSString *)prvFilePath direction:(BOOL)isOutgoing download:(BOOL)download forward:(BOOL)forward accessTime:(int)accessTime;
+ (NSString *)decryptForwardedFileForChatId:(int)chatId filePath:(NSString *)filePath fileName:(NSString *)fileName direction:(BOOL)isOutgoing;
+ (void)setFileForwardAttributesForChatId:(int)chatId recipientId:(NSString *)recipientId fileName:(NSString *)fileName direction:(BOOL)isOutgoing download:(BOOL)download forward:(BOOL)forward accessTime:(int)accessTime;
+ (void)setForwardGrantForChatId:(int)chatId filePath:(NSString *)filePath grant:(BOOL)grant;
+ (BOOL)isMsgPrivittyProtectedWithChatId:(int)chatId msgId:(int)msgId;

@end

NS_ASSUME_NONNULL_END