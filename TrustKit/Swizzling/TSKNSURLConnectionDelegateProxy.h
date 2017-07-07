/*
 
 TSKNSURLConnectionDelegateProxy.h
 TrustKit
 
 Copyright 2015 The TrustKit Project Authors
 Licensed under the MIT license, see associated LICENSE file for terms.
 See AUTHORS file for the list of project authors.
 
 */

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@class TrustKit;

@interface TSKNSURLConnectionDelegateProxy : NSObject<NSURLConnectionDelegate>

// Initalize our hooks
+ (void)swizzleNSURLConnectionConstructors:(TrustKit *)trustKit;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithTrustKit:(TrustKit *)trustKit connectionDelegate:(id<NSURLConnectionDelegate> _Nullable)delegate NS_DESIGNATED_INITIALIZER;

- (void)connection:(NSURLConnection *)connection willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge;

@end

NS_ASSUME_NONNULL_END
