#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Chat2desk_sdkKotlinByteArray, Chat2desk_sdkAttachedFileCompanion, Chat2desk_sdkAttachedFile, NSURL, Chat2desk_sdkMessage, Chat2desk_sdkSearchOptions, Chat2desk_sdkChat2DeskCompanion, Chat2desk_sdkKtor_client_loggingLogLevel, Chat2desk_sdkCommonSettings, Chat2desk_sdkSettings, NSURLSessionConfiguration, Chat2desk_sdkKotlinEnumCompanion, Chat2desk_sdkKotlinEnum<E>, Chat2desk_sdkConnectionState, Chat2desk_sdkKotlinArray<T>, Chat2desk_sdkDeliveryStatus, Chat2desk_sdkAttachment, Chat2desk_sdkFieldType, Chat2desk_sdkCustomFieldCompanion, Chat2desk_sdkCustomField, Chat2desk_sdkDeliveryStatusCompanion, Chat2desk_sdkFieldTypeCompanion, Chat2desk_sdkReadStatus, Chat2desk_sdkMessageType, Chat2desk_sdkKotlinx_datetimeInstant, Chat2desk_sdkMessageTypeCompanion, Chat2desk_sdkOperator, Chat2desk_sdkReadStatusCompanion, Chat2desk_sdkKotlinThrowable, Chat2desk_sdkKotlinException, Chat2desk_sdkClientIsNotAuthorizedExceptionCompanion, Chat2desk_sdkMissedConnectionExceptionCompanion, Chat2desk_sdkNetworkExceptionCompanion, Chat2desk_sdkNetworkException, Chat2desk_sdkUnknownFieldSetExceptionCompanion, Chat2desk_sdkQueryStringOperator, Chat2desk_sdkChat2Desk, Chat2desk_sdkCFlow<T>, NSData, Chat2desk_sdkKotlinByteIterator, Chat2desk_sdkKotlinRuntimeException, Chat2desk_sdkKotlinIllegalStateException, Chat2desk_sdkKotlinx_datetimeInstantCompanion, Chat2desk_sdkKotlinx_serialization_coreSerializersModule, Chat2desk_sdkKotlinx_serialization_coreSerialKind, Chat2desk_sdkKotlinNothing;

@protocol Chat2desk_sdkIAttachment, Chat2desk_sdkKotlinx_coroutines_coreFlowCollector, Chat2desk_sdkKotlinx_coroutines_coreFlow, Chat2desk_sdkCloseable, Chat2desk_sdkKotlinx_coroutines_coreStateFlow, Chat2desk_sdkIChat2Desk, Chat2desk_sdkKotlinComparable, Chat2desk_sdkKotlinx_serialization_coreKSerializer, Chat2desk_sdkKotlinx_coroutines_coreSharedFlow, Chat2desk_sdkKotlinIterator, Chat2desk_sdkKotlinx_serialization_coreEncoder, Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor, Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy, Chat2desk_sdkKotlinx_serialization_coreDecoder, Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy, Chat2desk_sdkKotlinx_serialization_coreCompositeEncoder, Chat2desk_sdkKotlinAnnotation, Chat2desk_sdkKotlinx_serialization_coreCompositeDecoder, Chat2desk_sdkKotlinx_serialization_coreSerializersModuleCollector, Chat2desk_sdkKotlinKClass, Chat2desk_sdkKotlinKDeclarationContainer, Chat2desk_sdkKotlinKAnnotatedElement, Chat2desk_sdkKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Chat2desk_sdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface Chat2desk_sdkBase (Chat2desk_sdkBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface Chat2desk_sdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Chat2desk_sdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorChat2desk_sdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface Chat2desk_sdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface Chat2desk_sdkByte : Chat2desk_sdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface Chat2desk_sdkUByte : Chat2desk_sdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface Chat2desk_sdkShort : Chat2desk_sdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface Chat2desk_sdkUShort : Chat2desk_sdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface Chat2desk_sdkInt : Chat2desk_sdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface Chat2desk_sdkUInt : Chat2desk_sdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface Chat2desk_sdkLong : Chat2desk_sdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface Chat2desk_sdkULong : Chat2desk_sdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface Chat2desk_sdkFloat : Chat2desk_sdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface Chat2desk_sdkDouble : Chat2desk_sdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface Chat2desk_sdkBoolean : Chat2desk_sdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * Interface of attached file.
 */
__attribute__((swift_name("IAttachment")))
@protocol Chat2desk_sdkIAttachment
@required

/**
 * Get the byte array of file.
 * @return [ByteArray]
 */
- (Chat2desk_sdkKotlinByteArray *)getByteArray __attribute__((swift_name("getByteArray()")));

/**
 * Get the path to file.
 * @return [String]
 */
- (NSString *)getFilePath __attribute__((swift_name("getFilePath()")));

/**
 * File size in bytes.
 */
@property (readonly) int32_t fileSize __attribute__((swift_name("fileSize")));

/**
 * Mime type of file.
 */
@property (readonly) NSString *mimeType __attribute__((swift_name("mimeType")));

/**
 * Original file name.
 */
@property (readonly) NSString *originalName __attribute__((swift_name("originalName")));
@end


/**
 * Swift specific [AttachedFile]
 *
 * Example:
 * ```
 * AttachedFile.Companion.fromURL(
 * url: NSURL(path: "path/to/file"),
 * originalName: "file name",
 * mimeType: "mime/type",
 * fileSize: 1000
 * )
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttachedFile")))
@interface Chat2desk_sdkAttachedFile : Chat2desk_sdkBase <Chat2desk_sdkIAttachment>
@property (class, readonly, getter=companion) Chat2desk_sdkAttachedFileCompanion *companion __attribute__((swift_name("companion")));

/**
 * Swift specific [AttachedFile]
 *
 * Example:
 * ```
 * AttachedFile.Companion.fromURL(
 * url: NSURL(path: "path/to/file"),
 * originalName: "file name",
 * mimeType: "mime/type",
 * fileSize: 1000
 * )
 * ```
 */
- (Chat2desk_sdkAttachedFile *)doCopyCachedURL:(NSURL *)cachedURL originalName:(NSString *)originalName mimeType:(NSString *)mimeType fileSize:(int32_t)fileSize __attribute__((swift_name("doCopy(cachedURL:originalName:mimeType:fileSize:)")));

/**
 * Swift specific [AttachedFile]
 *
 * Example:
 * ```
 * AttachedFile.Companion.fromURL(
 * url: NSURL(path: "path/to/file"),
 * originalName: "file name",
 * mimeType: "mime/type",
 * fileSize: 1000
 * )
 * ```
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (Chat2desk_sdkKotlinByteArray *)getByteArray __attribute__((swift_name("getByteArray()")));
- (NSString *)getFilePath __attribute__((swift_name("getFilePath()")));

/**
 * Swift specific [AttachedFile]
 *
 * Example:
 * ```
 * AttachedFile.Companion.fromURL(
 * url: NSURL(path: "path/to/file"),
 * originalName: "file name",
 * mimeType: "mime/type",
 * fileSize: 1000
 * )
 * ```
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Swift specific [AttachedFile]
 *
 * Example:
 * ```
 * AttachedFile.Companion.fromURL(
 * url: NSURL(path: "path/to/file"),
 * originalName: "file name",
 * mimeType: "mime/type",
 * fileSize: 1000
 * )
 * ```
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t fileSize __attribute__((swift_name("fileSize")));
@property (readonly) NSString *mimeType __attribute__((swift_name("mimeType")));
@property (readonly) NSString *originalName __attribute__((swift_name("originalName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttachedFile.Companion")))
@interface Chat2desk_sdkAttachedFileCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkAttachedFileCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create the instance of [AttachedFile] from NSURL
 * @param url NSURL for file
 * @param originalName File name
 * @param mimeType File mimetype
 * @param fileSize Size of file
 * @return [AttachedFile] The instance of attached file
 */
- (Chat2desk_sdkAttachedFile * _Nullable)fromURLUrl:(NSURL *)url originalName:(NSString *)originalName mimeType:(NSString *)mimeType fileSize:(int32_t)fileSize __attribute__((swift_name("fromURL(url:originalName:mimeType:fileSize:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol Chat2desk_sdkKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<Chat2desk_sdkKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end


/**
 * This is a wrapper for [Flow] that can be used for Swift.
 * It extends [Flow] and provides a [watch] method with which you can use [Flow] synchronously.
 *
 * Example:
 * ```
 * CFlow(someFlow).watch { println(it) }
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlow")))
@interface Chat2desk_sdkCFlow<T> : Chat2desk_sdkBase <Chat2desk_sdkKotlinx_coroutines_coreFlow>

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<Chat2desk_sdkKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<Chat2desk_sdkCloseable>)watchBlock:(void (^)(T _Nullable))block __attribute__((swift_name("watch(block:)")));
@end


/**
 * Interface that may be used for connect to Chat2Desk, make and receive messages.
 */
__attribute__((swift_name("IChat2Desk")))
@protocol Chat2desk_sdkIChat2Desk
@required

/**
 * Close this chat2desk and all underlying resources.
 *
 * This is not a reversible operation, after it is invoked you must reinitialize the chat2desk instance.
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Fetch all messages from Chat2Desk service.
 * If you want to receive new message we recommend to use [IChat2Desk.fetchNewMessages]
 * After fetching process the property [IChat2Desk.messages] will be updated.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchMessagesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchMessages(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchMessagesLoadMore:(Chat2desk_sdkBoolean * _Nullable)loadMore clear:(Chat2desk_sdkBoolean * _Nullable)clear completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchMessages(loadMore:clear:completionHandler:)")));

/**
 * Fetch new messages.
 * This method receive new messages from server if their exists
 * After fetching process the property [IChat2Desk.messages] will be updated.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNewMessagesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNewMessages(completionHandler:)")));

/**
 * Remove all library data like [IChat2Desk.messages], [IChat2Desk.clientPhone].
 * It will also stop the current connection to the service.
 * After reset, you need to call [IChat2Desk.start] to start using the library.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushAllWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flushAll(completionHandler:)")));

/**
 * Full-text search messages by text.
 *
 * Words in the query are converted to tokens by a tokenizer using the following rules:
 *
 *  - Tokens can only consist of characters from ASCII and the Latin-1 supplement (western languages). All other characters are considered whitespace.
 *
 *  - Words split by a hyphen (-) are split into two tokens. For example, full-text splits into full and text.
 *
 *  - Tokens are diacritics- and case-insensitive.
 *
 *  You can search for an entire word or phrase, or limit your results with the following characters:
 *
 *  - Exclude results for a word by placing the - character in front of the word. For example, fiction -science would include all search results for fiction and exclude those that include the word science.
 *
 *  - You can specify prefixes by placing the * character at the end of a word. For example, fict* would include all search results for fiction and fictitious. (The SDK does not currently support suffix searches.)
 *
 * @param query Query string
 * @return List of [Message]
 */
- (NSArray<Chat2desk_sdkMessage *> *)fullTextSearchQuery:(NSString *)query __attribute__((swift_name("fullTextSearch(query:)")));

/**
 * Mark chat is read.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("read(completionHandler:)")));

/**
 * Resend [message] if it have status [DeliveryStatus.NOT_DELIVERED].
 * @param [message] Resending message item.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resendMessageMessage:(Chat2desk_sdkMessage *)message completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("resendMessage(message:completionHandler:)")));

/**
 * Search messages by query
 *
 * @param query Query string
 * @param options [SearchOptions] Options of search
 * @return List of [Message]
 */
- (NSArray<Chat2desk_sdkMessage *> *)searchByQueryQuery:(NSString *)query options:(Chat2desk_sdkSearchOptions * _Nullable)options __attribute__((swift_name("searchByQuery(query:options:)")));

/**
 * Send client params.
 * You can send [name] and [phone] by default.
 * If you want to send other client field, which declared in Chat2Desk service, you need to use [CustomField.id] property from [IChat2Desk.customFields] as key and your value
 *
 * Example of default usage:
 * ```
 * sendClientParams("name", "phone")
 * ```
 *
 * Example with custom fields:
 * ```
 * sendClientParams("name", "phone", mapOf(1 to "value"))
 * ```
 *
 * @param name Client name.
 * @param phone Client phone.
 * @param fieldSet Map of custom fields with [CustomField.id] as key and value of field.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendClientParamsName:(NSString *)name phone:(NSString *)phone fieldSet:(NSDictionary<Chat2desk_sdkInt *, NSString *> *)fieldSet completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendClientParams(name:phone:fieldSet:completionHandler:)")));

/**
 * Send the simple message with text.
 * @param msg Message text.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageMsg:(NSString *)msg completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(msg:completionHandler:)")));

/**
 * Send the message with attachment.
 * @param msg Message text.
 * @param attachedFile Attached file info.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageMsg:(NSString *)msg attachedFile:(Chat2desk_sdkAttachedFile *)attachedFile completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(msg:attachedFile:completionHandler:)")));

/**
 * Connect to Chat2Desk and start the chat.
 * @return [String] | [Unit] Client key for current connection.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));

/**
 * Connect to Chat2Desk with client key and start the chat.
 * @param clientId Client key
 * @return [String] | [Unit] Client key for current connection.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startClientId:(NSString * _Nullable)clientId completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("start(clientId:completionHandler:)")));

/**
 * Disconnect from Chat2Desk.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));

/**
 * Client key for current connection
 */
@property (readonly) NSString * _Nullable clientPhone __attribute__((swift_name("clientPhone")));

/**
 * Current connection status.
 * @see [ConnectionState]
 */
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> connectionStatus __attribute__((swift_name("connectionStatus")));

/**
 * List of custom fields, declared on company.
 */
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> customFields __attribute__((swift_name("customFields")));

/**
 * Flow with errors.
 * @see [com.chat2desk.chat2desk_sdk.exceptions].
 */
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> error __attribute__((swift_name("error")));

/**
 * List of [Message].
 */
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> messages __attribute__((swift_name("messages")));

/**
 * Current connected operator.
 */
@property (readonly, getter=operator) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> operator_ __attribute__((swift_name("operator_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Chat2Desk")))
@interface Chat2desk_sdkChat2Desk : Chat2desk_sdkBase <Chat2desk_sdkIChat2Desk>
@property (class, readonly, getter=companion) Chat2desk_sdkChat2DeskCompanion *companion __attribute__((swift_name("companion")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchMessagesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchMessages(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchMessagesLoadMore:(Chat2desk_sdkBoolean * _Nullable)loadMore clear:(Chat2desk_sdkBoolean * _Nullable)clear completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchMessages(loadMore:clear:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNewMessagesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNewMessages(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushAllWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flushAll(completionHandler:)")));
- (NSArray<Chat2desk_sdkMessage *> *)fullTextSearchQuery:(NSString *)query __attribute__((swift_name("fullTextSearch(query:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("read(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resendMessageMessage:(Chat2desk_sdkMessage *)message completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("resendMessage(message:completionHandler:)")));
- (NSArray<Chat2desk_sdkMessage *> *)searchByQueryQuery:(NSString *)query options:(Chat2desk_sdkSearchOptions * _Nullable)options __attribute__((swift_name("searchByQuery(query:options:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendClientParamsName:(NSString *)name phone:(NSString *)phone fieldSet:(NSDictionary<Chat2desk_sdkInt *, NSString *> *)fieldSet completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendClientParams(name:phone:fieldSet:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageMsg:(NSString *)msg completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(msg:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageMsg:(NSString *)msg attachedFile:(Chat2desk_sdkAttachedFile *)attachedFile completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(msg:attachedFile:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startClientId:(NSString * _Nullable)clientId completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("start(clientId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@property (readonly) NSString * _Nullable clientPhone __attribute__((swift_name("clientPhone")));
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> connectionStatus __attribute__((swift_name("connectionStatus")));
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> customFields __attribute__((swift_name("customFields")));
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> error __attribute__((swift_name("error")));
@property (readonly) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> messages __attribute__((swift_name("messages")));
@property (readonly, getter=operator) id<Chat2desk_sdkKotlinx_coroutines_coreStateFlow> operator_ __attribute__((swift_name("operator_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Chat2Desk.Companion")))
@interface Chat2desk_sdkChat2DeskCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkChat2DeskCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Interface that may be used for close listener of [CFlow]
 */
__attribute__((swift_name("Closeable")))
@protocol Chat2desk_sdkCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end


/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 *
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 */
__attribute__((swift_name("CommonSettings")))
@interface Chat2desk_sdkCommonSettings : Chat2desk_sdkBase

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 *
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 *
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t attemptsToReconnect __attribute__((swift_name("attemptsToReconnect")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property BOOL autoReconnect __attribute__((swift_name("autoReconnect")));
@property (readonly) NSString *baseHost __attribute__((swift_name("baseHost")));
@property Chat2desk_sdkBoolean * _Nullable inMemory __attribute__((swift_name("inMemory")));
@property Chat2desk_sdkKtor_client_loggingLogLevel *logLevel __attribute__((swift_name("logLevel")));
@property int64_t reconnectTimeout __attribute__((swift_name("reconnectTimeout")));
@property (readonly) NSString *storageHost __attribute__((swift_name("storageHost")));
@property Chat2desk_sdkBoolean * _Nullable withLog __attribute__((swift_name("withLog")));
@property (readonly) NSString *wsHost __attribute__((swift_name("wsHost")));
@end


/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 * @property socketConfiguration Configuration for socket connection. `NSURLSessionConfiguration.defaultSessionConfiguration()` by default
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Settings")))
@interface Chat2desk_sdkSettings : Chat2desk_sdkCommonSettings
- (instancetype)initWithAuthToken:(NSString *)authToken baseHost:(NSString *)baseHost wsHost:(NSString *)wsHost storageHost:(NSString *)storageHost __attribute__((swift_name("init(authToken:baseHost:wsHost:storageHost:)"))) __attribute__((objc_designated_initializer));

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 *
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 * @property socketConfiguration Configuration for socket connection. `NSURLSessionConfiguration.defaultSessionConfiguration()` by default
 */
- (Chat2desk_sdkSettings *)doCopyAuthToken:(NSString *)authToken baseHost:(NSString *)baseHost wsHost:(NSString *)wsHost storageHost:(NSString *)storageHost __attribute__((swift_name("doCopy(authToken:baseHost:wsHost:storageHost:)")));

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 * @property socketConfiguration Configuration for socket connection. `NSURLSessionConfiguration.defaultSessionConfiguration()` by default
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 * @property socketConfiguration Configuration for socket connection. `NSURLSessionConfiguration.defaultSessionConfiguration()` by default
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * General settings of library.
 * Parameter values, [authToken], [baseHost], [wsHost], [storageHost] must be taken from the widget settings.
 *
 * @constructor Create the settings of library
 * @property authToken Widget token.
 * @property baseHost Url for chat2desk service.
 * @property wsHost Url for socket connection.
 * @property storageHost Url for file storage.
 * @property inMemory Flag indicating that cache data should be kept in memory, default is false.
 * @property withLog Show logs, default is false.
 * @property autoReconnect Auto reconnect to server.
 * @property attemptsToReconnect The number of attempts of auto reconnect.
 * @property reconnectTimeout Timeout in milliseconds between reconnect attempts
 * @property socketConfiguration Configuration for socket connection. `NSURLSessionConfiguration.defaultSessionConfiguration()` by default
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString *baseHost __attribute__((swift_name("baseHost")));
@property NSURLSessionConfiguration *socketConfiguration __attribute__((swift_name("socketConfiguration")));
@property (readonly) NSString *storageHost __attribute__((swift_name("storageHost")));
@property (readonly) NSString *wsHost __attribute__((swift_name("wsHost")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol Chat2desk_sdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface Chat2desk_sdkKotlinEnum<E> : Chat2desk_sdkBase <Chat2desk_sdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Chat2desk_sdkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Enumerator with connection states
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionState")))
@interface Chat2desk_sdkConnectionState : Chat2desk_sdkKotlinEnum<Chat2desk_sdkConnectionState *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enumerator with connection states
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Chat2desk_sdkConnectionState *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) Chat2desk_sdkConnectionState *connected __attribute__((swift_name("connected")));
@property (class, readonly) Chat2desk_sdkConnectionState *closing __attribute__((swift_name("closing")));
@property (class, readonly) Chat2desk_sdkConnectionState *closed __attribute__((swift_name("closed")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkConnectionState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Chat2desk_sdkConnectionState *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Attachment of message
 * @property id Id of attchment from service
 * @property fileSize Size of file in bytes
 * @property contentType Mime type
 * @property link File url
 * @property originalFileName File name
 * @property status Delivery status
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attachment")))
@interface Chat2desk_sdkAttachment : Chat2desk_sdkBase
- (instancetype)initWithId:(int64_t)id fileSize:(int32_t)fileSize contentType:(NSString *)contentType link:(NSString *)link originalFileName:(NSString * _Nullable)originalFileName status:(Chat2desk_sdkDeliveryStatus *)status __attribute__((swift_name("init(id:fileSize:contentType:link:originalFileName:status:)"))) __attribute__((objc_designated_initializer));

/**
 * Attachment of message
 * @property id Id of attchment from service
 * @property fileSize Size of file in bytes
 * @property contentType Mime type
 * @property link File url
 * @property originalFileName File name
 * @property status Delivery status
 */
- (Chat2desk_sdkAttachment *)doCopyId:(int64_t)id fileSize:(int32_t)fileSize contentType:(NSString *)contentType link:(NSString *)link originalFileName:(NSString * _Nullable)originalFileName status:(Chat2desk_sdkDeliveryStatus *)status __attribute__((swift_name("doCopy(id:fileSize:contentType:link:originalFileName:status:)")));

/**
 * Attachment of message
 * @property id Id of attchment from service
 * @property fileSize Size of file in bytes
 * @property contentType Mime type
 * @property link File url
 * @property originalFileName File name
 * @property status Delivery status
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Attachment of message
 * @property id Id of attchment from service
 * @property fileSize Size of file in bytes
 * @property contentType Mime type
 * @property link File url
 * @property originalFileName File name
 * @property status Delivery status
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Attachment of message
 * @property id Id of attchment from service
 * @property fileSize Size of file in bytes
 * @property contentType Mime type
 * @property link File url
 * @property originalFileName File name
 * @property status Delivery status
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *contentType __attribute__((swift_name("contentType")));
@property int32_t fileSize __attribute__((swift_name("fileSize")));
@property int64_t id __attribute__((swift_name("id")));
@property NSString *link __attribute__((swift_name("link")));
@property NSString * _Nullable originalFileName __attribute__((swift_name("originalFileName")));
@property (readonly) Chat2desk_sdkDeliveryStatus *status __attribute__((swift_name("status")));
@end


/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomField")))
@interface Chat2desk_sdkCustomField : Chat2desk_sdkBase
- (instancetype)initWithId:(int32_t)id name:(NSDictionary<NSString *, id> *)name type:(Chat2desk_sdkFieldType *)type value:(NSString *)value __attribute__((swift_name("init(id:name:type:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Chat2desk_sdkCustomFieldCompanion *companion __attribute__((swift_name("companion")));

/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
- (Chat2desk_sdkCustomField *)doCopyId:(int32_t)id name:(NSDictionary<NSString *, id> *)name type:(Chat2desk_sdkFieldType *)type value:(NSString *)value __attribute__((swift_name("doCopy(id:name:type:value:)")));

/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, id> *name __attribute__((swift_name("name")));
@property (readonly) Chat2desk_sdkFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomField.Companion")))
@interface Chat2desk_sdkCustomFieldCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkCustomFieldCompanion *shared __attribute__((swift_name("shared")));

/**
 * Custom field, defined on company.
 *
 * @property id Field id from service.
 * @property name The map of the names, where key is the language, defined in company.
 * @property type Field type.
 * @property value The possible values of field. Is empty when type is [FieldType.Input]. If the type is [FieldType.Dropdown], the possible values will be separated by commas.
 */
- (id<Chat2desk_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Delivery status of message and attachment.
 *
 * @property status Delivery status in [Int]
 * @property name Status name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeliveryStatus")))
@interface Chat2desk_sdkDeliveryStatus : Chat2desk_sdkKotlinEnum<Chat2desk_sdkDeliveryStatus *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Delivery status of message and attachment.
 *
 * @property status Delivery status in [Int]
 * @property name Status name
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkDeliveryStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Chat2desk_sdkDeliveryStatus *sending __attribute__((swift_name("sending")));
@property (class, readonly) Chat2desk_sdkDeliveryStatus *sent __attribute__((swift_name("sent")));
@property (class, readonly) Chat2desk_sdkDeliveryStatus *delivered __attribute__((swift_name("delivered")));
@property (class, readonly) Chat2desk_sdkDeliveryStatus *notDelivered __attribute__((swift_name("notDelivered")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkDeliveryStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Chat2desk_sdkDeliveryStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeliveryStatus.Companion")))
@interface Chat2desk_sdkDeliveryStatusCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkDeliveryStatusCompanion *shared __attribute__((swift_name("shared")));
- (Chat2desk_sdkDeliveryStatus *)fromIntStatus:(int32_t)status __attribute__((swift_name("fromInt(status:)")));
@end


/**
 * Type of the field.
 * It can be [FieldType.Input] or [FieldType.Dropdown].
 *
 * @property type The input type
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldType")))
@interface Chat2desk_sdkFieldType : Chat2desk_sdkKotlinEnum<Chat2desk_sdkFieldType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Type of the field.
 * It can be [FieldType.Input] or [FieldType.Dropdown].
 *
 * @property type The input type
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkFieldTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Chat2desk_sdkFieldType *input __attribute__((swift_name("input")));
@property (class, readonly) Chat2desk_sdkFieldType *dropdown __attribute__((swift_name("dropdown")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkFieldType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Chat2desk_sdkFieldType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldType.Companion")))
@interface Chat2desk_sdkFieldTypeCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkFieldTypeCompanion *shared __attribute__((swift_name("shared")));
- (Chat2desk_sdkFieldType *)fromStringType:(NSString *)type __attribute__((swift_name("fromString(type:)")));
@end


/**
 * The message entity.
 *
 * @property id Unique message id in library.
 * @property realId Message id from service.
 * @property status Delivery status.
 * @property text Message text.
 * @property type Message type.
 * @property date The date of message creating.
 * @property attachments List of message attachments.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message")))
@interface Chat2desk_sdkMessage : Chat2desk_sdkBase
- (instancetype)initWithId:(NSString *)id realId:(int64_t)realId read:(Chat2desk_sdkReadStatus *)read status:(Chat2desk_sdkDeliveryStatus *)status text:(NSString * _Nullable)text type:(Chat2desk_sdkMessageType *)type date:(Chat2desk_sdkKotlinx_datetimeInstant * _Nullable)date attachments:(NSArray<Chat2desk_sdkAttachment *> * _Nullable)attachments __attribute__((swift_name("init(id:realId:read:status:text:type:date:attachments:)"))) __attribute__((objc_designated_initializer));

/**
 * The message entity.
 *
 * @property id Unique message id in library.
 * @property realId Message id from service.
 * @property status Delivery status.
 * @property text Message text.
 * @property type Message type.
 * @property date The date of message creating.
 * @property attachments List of message attachments.
 */
- (Chat2desk_sdkMessage *)doCopyId:(NSString *)id realId:(int64_t)realId read:(Chat2desk_sdkReadStatus *)read status:(Chat2desk_sdkDeliveryStatus *)status text:(NSString * _Nullable)text type:(Chat2desk_sdkMessageType *)type date:(Chat2desk_sdkKotlinx_datetimeInstant * _Nullable)date attachments:(NSArray<Chat2desk_sdkAttachment *> * _Nullable)attachments __attribute__((swift_name("doCopy(id:realId:read:status:text:type:date:attachments:)")));

/**
 * The message entity.
 *
 * @property id Unique message id in library.
 * @property realId Message id from service.
 * @property status Delivery status.
 * @property text Message text.
 * @property type Message type.
 * @property date The date of message creating.
 * @property attachments List of message attachments.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The message entity.
 *
 * @property id Unique message id in library.
 * @property realId Message id from service.
 * @property status Delivery status.
 * @property text Message text.
 * @property type Message type.
 * @property date The date of message creating.
 * @property attachments List of message attachments.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Is it inbox message. True if message type is [MessageType.IN] or [MessageType.RATING_IN]
 * @return [Boolean]
 */
- (BOOL)inMessage __attribute__((swift_name("inMessage()")));

/**
 * The message entity.
 *
 * @property id Unique message id in library.
 * @property realId Message id from service.
 * @property status Delivery status.
 * @property text Message text.
 * @property type Message type.
 * @property date The date of message creating.
 * @property attachments List of message attachments.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Chat2desk_sdkAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));
@property (readonly) Chat2desk_sdkKotlinx_datetimeInstant * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) Chat2desk_sdkReadStatus *read __attribute__((swift_name("read")));
@property (readonly) int64_t realId __attribute__((swift_name("realId")));
@property (readonly) Chat2desk_sdkDeliveryStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) Chat2desk_sdkMessageType *type __attribute__((swift_name("type")));
@end


/**
 * Enumerator with type of message.
 *
 * @property type Message type in [Int]
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageType")))
@interface Chat2desk_sdkMessageType : Chat2desk_sdkKotlinEnum<Chat2desk_sdkMessageType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enumerator with type of message.
 *
 * @property type Message type in [Int]
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkMessageTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Chat2desk_sdkMessageType *in __attribute__((swift_name("in")));
@property (class, readonly) Chat2desk_sdkMessageType *out __attribute__((swift_name("out")));
@property (class, readonly) Chat2desk_sdkMessageType *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) Chat2desk_sdkMessageType *system __attribute__((swift_name("system")));
@property (class, readonly) Chat2desk_sdkMessageType *ratingIn __attribute__((swift_name("ratingIn")));
@property (class, readonly) Chat2desk_sdkMessageType *ratingOut __attribute__((swift_name("ratingOut")));
@property (class, readonly) Chat2desk_sdkMessageType *comment __attribute__((swift_name("comment")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkMessageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Chat2desk_sdkMessageType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageType.Companion")))
@interface Chat2desk_sdkMessageTypeCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (Chat2desk_sdkMessageType *)fromIntType:(int32_t)type __attribute__((swift_name("fromInt(type:)")));
@end


/**
 * The operator currently connected to the chat.
 *
 * @property name Name of operator.
 * @property avatar Url for operator avatar.
 * @property typing Flag, indicated of operator typing.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Operator")))
@interface Chat2desk_sdkOperator : Chat2desk_sdkBase
- (instancetype)initWithName:(NSString *)name avatar:(NSString * _Nullable)avatar typing:(Chat2desk_sdkBoolean * _Nullable)typing __attribute__((swift_name("init(name:avatar:typing:)"))) __attribute__((objc_designated_initializer));

/**
 * The operator currently connected to the chat.
 *
 * @property name Name of operator.
 * @property avatar Url for operator avatar.
 * @property typing Flag, indicated of operator typing.
 */
- (Chat2desk_sdkOperator *)doCopyName:(NSString *)name avatar:(NSString * _Nullable)avatar typing:(Chat2desk_sdkBoolean * _Nullable)typing __attribute__((swift_name("doCopy(name:avatar:typing:)")));

/**
 * The operator currently connected to the chat.
 *
 * @property name Name of operator.
 * @property avatar Url for operator avatar.
 * @property typing Flag, indicated of operator typing.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The operator currently connected to the chat.
 *
 * @property name Name of operator.
 * @property avatar Url for operator avatar.
 * @property typing Flag, indicated of operator typing.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The operator currently connected to the chat.
 *
 * @property name Name of operator.
 * @property avatar Url for operator avatar.
 * @property typing Flag, indicated of operator typing.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property Chat2desk_sdkBoolean * _Nullable typing __attribute__((swift_name("typing")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadStatus")))
@interface Chat2desk_sdkReadStatus : Chat2desk_sdkKotlinEnum<Chat2desk_sdkReadStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkReadStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Chat2desk_sdkReadStatus *unread __attribute__((swift_name("unread")));
@property (class, readonly) Chat2desk_sdkReadStatus *read __attribute__((swift_name("read")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkReadStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Chat2desk_sdkReadStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadStatus.Companion")))
@interface Chat2desk_sdkReadStatusCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkReadStatusCompanion *shared __attribute__((swift_name("shared")));
- (Chat2desk_sdkReadStatus *)fromIntStatus:(int32_t)status __attribute__((swift_name("fromInt(status:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface Chat2desk_sdkKotlinThrowable : Chat2desk_sdkBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (Chat2desk_sdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Chat2desk_sdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface Chat2desk_sdkKotlinException : Chat2desk_sdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientIsNotAuthorizedException")))
@interface Chat2desk_sdkClientIsNotAuthorizedException : Chat2desk_sdkKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkClientIsNotAuthorizedExceptionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientIsNotAuthorizedException.Companion")))
@interface Chat2desk_sdkClientIsNotAuthorizedExceptionCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkClientIsNotAuthorizedExceptionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CLIENT_IS_NOT_AUTHORIZED __attribute__((swift_name("CLIENT_IS_NOT_AUTHORIZED")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissedConnectionException")))
@interface Chat2desk_sdkMissedConnectionException : Chat2desk_sdkKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkMissedConnectionExceptionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissedConnectionException.Companion")))
@interface Chat2desk_sdkMissedConnectionExceptionCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkMissedConnectionExceptionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *MISSED_CONNECTION __attribute__((swift_name("MISSED_CONNECTION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkException")))
@interface Chat2desk_sdkNetworkException : Chat2desk_sdkKotlinException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage errorCode:(int32_t)errorCode __attribute__((swift_name("init(errorMessage:errorCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkNetworkExceptionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t errorCode __attribute__((swift_name("errorCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkException.Companion")))
@interface Chat2desk_sdkNetworkExceptionCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkNetworkExceptionCompanion *shared __attribute__((swift_name("shared")));
- (Chat2desk_sdkNetworkException *)cantReconnectErrorCode:(int32_t)errorCode __attribute__((swift_name("cantReconnect(errorCode:)")));
- (Chat2desk_sdkNetworkException *)noTransformationFoundErrorCode:(int32_t)errorCode __attribute__((swift_name("noTransformationFound(errorCode:)")));
- (Chat2desk_sdkNetworkException *)serverIsUnavailableErrorCode:(int32_t)errorCode __attribute__((swift_name("serverIsUnavailable(errorCode:)")));
- (Chat2desk_sdkNetworkException *)unknownErrorErrorCode:(int32_t)errorCode __attribute__((swift_name("unknownError(errorCode:)")));
@property (readonly) NSString *SERVER_IS_UNAVAILABLE __attribute__((swift_name("SERVER_IS_UNAVAILABLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFieldSetException")))
@interface Chat2desk_sdkUnknownFieldSetException : Chat2desk_sdkKotlinException
- (instancetype)initWithUnknownFields:(NSArray<Chat2desk_sdkInt *> *)unknownFields __attribute__((swift_name("init(unknownFields:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Chat2desk_sdkUnknownFieldSetExceptionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<Chat2desk_sdkInt *> *unknownFields __attribute__((swift_name("unknownFields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFieldSetException.Companion")))
@interface Chat2desk_sdkUnknownFieldSetExceptionCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkUnknownFieldSetExceptionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *UNKNOWN_FILED_SET __attribute__((swift_name("UNKNOWN_FILED_SET")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryStringOperator")))
@interface Chat2desk_sdkQueryStringOperator : Chat2desk_sdkKotlinEnum<Chat2desk_sdkQueryStringOperator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Chat2desk_sdkQueryStringOperator *beginswith __attribute__((swift_name("beginswith")));
@property (class, readonly) Chat2desk_sdkQueryStringOperator *contains __attribute__((swift_name("contains")));
@property (class, readonly) Chat2desk_sdkQueryStringOperator *endswith __attribute__((swift_name("endswith")));
@property (class, readonly) Chat2desk_sdkQueryStringOperator *like __attribute__((swift_name("like")));
@property (class, readonly) Chat2desk_sdkQueryStringOperator *equal __attribute__((swift_name("equal")));
@property (class, readonly) Chat2desk_sdkQueryStringOperator *notequal __attribute__((swift_name("notequal")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkQueryStringOperator *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Chat2desk_sdkQueryStringOperator *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchOptions")))
@interface Chat2desk_sdkSearchOptions : Chat2desk_sdkBase
- (instancetype)initWithOperator:(Chat2desk_sdkQueryStringOperator *)operator_ caseSensitivity:(BOOL)caseSensitivity __attribute__((swift_name("init(operator:caseSensitivity:)"))) __attribute__((objc_designated_initializer));
- (Chat2desk_sdkSearchOptions *)doCopyOperator:(Chat2desk_sdkQueryStringOperator *)operator_ caseSensitivity:(BOOL)caseSensitivity __attribute__((swift_name("doCopy(operator:caseSensitivity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Case sensitivity of search
 *
 * Applies only to ASCII characters and the Latin-1 complement (Western languages).
 */
@property (readonly) BOOL caseSensitivity __attribute__((swift_name("caseSensitivity")));

/**
 * Query string operator
 */
@property (readonly, getter=operator) Chat2desk_sdkQueryStringOperator *operator_ __attribute__((swift_name("operator_")));
@end

@interface Chat2desk_sdkChat2DeskCompanion (Extensions)

/**
 * Create the library client. You must set the [Settings].
 * @return [Chat2Desk]
 */
- (Chat2desk_sdkChat2Desk *)createSettings:(Chat2desk_sdkSettings *)settings __attribute__((swift_name("create(settings:)")));

/**
 * Remove all library data like [IChat2Desk.messages], [IChat2Desk.clientPhone].
 * After reset, you need to call [IChat2Desk.start] to start using the library.
 * @return [Unit].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushAllWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flushAll(completionHandler:)")));
@end

@interface Chat2desk_sdkChat2Desk (Extensions)

/**
 * Wrapper for connection status
 */
- (Chat2desk_sdkCFlow<Chat2desk_sdkConnectionState *> *)watchConnectionStatus __attribute__((swift_name("watchConnectionStatus()")));

/**
 * Wrapper for custom fields list
 */
- (Chat2desk_sdkCFlow<NSArray<Chat2desk_sdkCustomField *> *> *)watchCustomFields __attribute__((swift_name("watchCustomFields()")));

/**
 * Wrapper for errors
 */
- (Chat2desk_sdkCFlow<Chat2desk_sdkKotlinThrowable *> *)watchError __attribute__((swift_name("watchError()")));

/**
 * Wrapper for message list
 */
- (Chat2desk_sdkCFlow<NSArray<Chat2desk_sdkMessage *> *> *)watchMessages __attribute__((swift_name("watchMessages()")));

/**
 * Wrapper for operator
 */
- (Chat2desk_sdkCFlow<Chat2desk_sdkOperator *> *)watchOperator __attribute__((swift_name("watchOperator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttachedFileKt")))
@interface Chat2desk_sdkAttachedFileKt : Chat2desk_sdkBase

/**
 * Transform Swift NSData to Kotlin ByteArray
 * @return [ByteArray]
 */
+ (Chat2desk_sdkKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface Chat2desk_sdkKotlinByteArray : Chat2desk_sdkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Chat2desk_sdkByte *(^)(Chat2desk_sdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Chat2desk_sdkKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface Chat2desk_sdkKotlinRuntimeException : Chat2desk_sdkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Chat2desk_sdkKotlinIllegalStateException : Chat2desk_sdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface Chat2desk_sdkKotlinCancellationException : Chat2desk_sdkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Chat2desk_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol Chat2desk_sdkKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol Chat2desk_sdkKotlinx_coroutines_coreSharedFlow <Chat2desk_sdkKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol Chat2desk_sdkKotlinx_coroutines_coreStateFlow <Chat2desk_sdkKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_loggingLogLevel")))
@interface Chat2desk_sdkKtor_client_loggingLogLevel : Chat2desk_sdkKotlinEnum<Chat2desk_sdkKtor_client_loggingLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Chat2desk_sdkKtor_client_loggingLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) Chat2desk_sdkKtor_client_loggingLogLevel *headers __attribute__((swift_name("headers")));
@property (class, readonly) Chat2desk_sdkKtor_client_loggingLogLevel *body __attribute__((swift_name("body")));
@property (class, readonly) Chat2desk_sdkKtor_client_loggingLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) Chat2desk_sdkKtor_client_loggingLogLevel *none __attribute__((swift_name("none")));
+ (Chat2desk_sdkKotlinArray<Chat2desk_sdkKtor_client_loggingLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) BOOL body __attribute__((swift_name("body")));
@property (readonly) BOOL headers __attribute__((swift_name("headers")));
@property (readonly) BOOL info __attribute__((swift_name("info")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Chat2desk_sdkKotlinEnumCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Chat2desk_sdkKotlinArray<T> : Chat2desk_sdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Chat2desk_sdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Chat2desk_sdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Chat2desk_sdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Chat2desk_sdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Chat2desk_sdkKotlinx_serialization_coreKSerializer <Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy, Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface Chat2desk_sdkKotlinx_datetimeInstant : Chat2desk_sdkBase <Chat2desk_sdkKotlinComparable>
@property (class, readonly, getter=companion) Chat2desk_sdkKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(Chat2desk_sdkKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(Chat2desk_sdkKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol Chat2desk_sdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface Chat2desk_sdkKotlinByteIterator : Chat2desk_sdkBase <Chat2desk_sdkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Chat2desk_sdkByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Chat2desk_sdkKotlinx_serialization_coreEncoder
@required
- (id<Chat2desk_sdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Chat2desk_sdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<Chat2desk_sdkKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Chat2desk_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<Chat2desk_sdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<Chat2desk_sdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) Chat2desk_sdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Chat2desk_sdkKotlinx_serialization_coreDecoder
@required
- (id<Chat2desk_sdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<Chat2desk_sdkKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (Chat2desk_sdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) Chat2desk_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface Chat2desk_sdkKotlinx_datetimeInstantCompanion : Chat2desk_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Chat2desk_sdkKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (Chat2desk_sdkKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<Chat2desk_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) Chat2desk_sdkKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) Chat2desk_sdkKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Chat2desk_sdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<Chat2desk_sdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Chat2desk_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Chat2desk_sdkKotlinx_serialization_coreSerializersModule : Chat2desk_sdkBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<Chat2desk_sdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Chat2desk_sdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<Chat2desk_sdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<Chat2desk_sdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Chat2desk_sdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Chat2desk_sdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol Chat2desk_sdkKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Chat2desk_sdkKotlinx_serialization_coreSerialKind : Chat2desk_sdkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Chat2desk_sdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<Chat2desk_sdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Chat2desk_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) Chat2desk_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Chat2desk_sdkKotlinNothing : Chat2desk_sdkBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Chat2desk_sdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Chat2desk_sdkKotlinKClass>)kClass provider:(id<Chat2desk_sdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<Chat2desk_sdkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<Chat2desk_sdkKotlinKClass>)kClass serializer:(id<Chat2desk_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Chat2desk_sdkKotlinKClass>)baseClass actualClass:(id<Chat2desk_sdkKotlinKClass>)actualClass actualSerializer:(id<Chat2desk_sdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Chat2desk_sdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<Chat2desk_sdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<Chat2desk_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<Chat2desk_sdkKotlinKClass>)baseClass defaultSerializerProvider:(id<Chat2desk_sdkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Chat2desk_sdkKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Chat2desk_sdkKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol Chat2desk_sdkKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol Chat2desk_sdkKotlinKClass <Chat2desk_sdkKotlinKDeclarationContainer, Chat2desk_sdkKotlinKAnnotatedElement, Chat2desk_sdkKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
