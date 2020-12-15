// Autogenerated from Pigeon (v0.1.17), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTIntValue;
@class FLTStartAudioMixingRequest;
@class FLTSetVideoRendererMirrorRequest;
@class FLTSetupRemoteVideoRendererRequest;
@class FLTBoolValue;
@class FLTDoubleValue;
@class FLTSetCameraFocusPositionRequest;
@class FLTEnableEarbackRequest;
@class FLTPlayEffectRequest;
@class FLTSetEffectSendVolumeRequest;
@class FLTSetEffectPlaybackVolumeRequest;
@class FLTCreateEngineRequest;
@class FLTJoinChannelRequest;
@class FLTSubscribeRemoteAudioStreamRequest;
@class FLTSetAudioProfileRequest;
@class FLTSetLocalVideoConfigRequest;
@class FLTSubscribeRemoteVideoStreamRequest;
@class FLTEnableAudioVolumeIndicationRequest;
@class FLTAddOrUpdateLiveStreamTaskRequest;
@class FLTDeleteLiveStreamTaskRequest;

@interface FLTIntValue : NSObject
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface FLTStartAudioMixingRequest : NSObject
@property(nonatomic, copy, nullable) NSString * path;
@property(nonatomic, strong, nullable) NSNumber * loopCount;
@property(nonatomic, strong, nullable) NSNumber * sendEnabled;
@property(nonatomic, strong, nullable) NSNumber * sendVolume;
@property(nonatomic, strong, nullable) NSNumber * playbackEnabled;
@property(nonatomic, strong, nullable) NSNumber * playbackVolume;
@end

@interface FLTSetVideoRendererMirrorRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * mirror;
@end

@interface FLTSetupRemoteVideoRendererRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@end

@interface FLTBoolValue : NSObject
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface FLTDoubleValue : NSObject
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface FLTSetCameraFocusPositionRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * x;
@property(nonatomic, strong, nullable) NSNumber * y;
@end

@interface FLTEnableEarbackRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface FLTPlayEffectRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * effectId;
@property(nonatomic, copy, nullable) NSString * path;
@property(nonatomic, strong, nullable) NSNumber * loopCount;
@property(nonatomic, strong, nullable) NSNumber * sendEnabled;
@property(nonatomic, strong, nullable) NSNumber * sendVolume;
@property(nonatomic, strong, nullable) NSNumber * playbackEnabled;
@property(nonatomic, strong, nullable) NSNumber * playbackVolume;
@end

@interface FLTSetEffectSendVolumeRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * effectId;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface FLTSetEffectPlaybackVolumeRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * effectId;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface FLTCreateEngineRequest : NSObject
@property(nonatomic, copy, nullable) NSString * appKey;
@property(nonatomic, copy, nullable) NSString * logDir;
@property(nonatomic, strong, nullable) NSNumber * logLevel;
@property(nonatomic, strong, nullable) NSNumber * autoSubscribeAudio;
@property(nonatomic, strong, nullable) NSNumber * videoEncodeMode;
@property(nonatomic, strong, nullable) NSNumber * videoDecodeMode;
@property(nonatomic, strong, nullable) NSNumber * serverRecordAudio;
@property(nonatomic, strong, nullable) NSNumber * serverRecordVideo;
@property(nonatomic, strong, nullable) NSNumber * serverRecordMode;
@property(nonatomic, strong, nullable) NSNumber * serverRecordSpeaker;
@property(nonatomic, strong, nullable) NSNumber * publishSelfStream;
@property(nonatomic, strong, nullable) NSNumber * videoSendMode;
@end

@interface FLTJoinChannelRequest : NSObject
@property(nonatomic, copy, nullable) NSString * token;
@property(nonatomic, copy, nullable) NSString * channelName;
@property(nonatomic, strong, nullable) NSNumber * uid;
@end

@interface FLTSubscribeRemoteAudioStreamRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * subscribe;
@end

@interface FLTSetAudioProfileRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * profile;
@property(nonatomic, strong, nullable) NSNumber * scenario;
@end

@interface FLTSetLocalVideoConfigRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * videoProfile;
@property(nonatomic, strong, nullable) NSNumber * videoCropMode;
@property(nonatomic, strong, nullable) NSNumber * frontCamera;
@property(nonatomic, strong, nullable) NSNumber * frameRate;
@property(nonatomic, strong, nullable) NSNumber * minFrameRate;
@property(nonatomic, strong, nullable) NSNumber * bitrate;
@property(nonatomic, strong, nullable) NSNumber * minBitrate;
@property(nonatomic, strong, nullable) NSNumber * degradationPrefer;
@end

@interface FLTSubscribeRemoteVideoStreamRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * streamType;
@property(nonatomic, strong, nullable) NSNumber * subscribe;
@end

@interface FLTEnableAudioVolumeIndicationRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * enable;
@property(nonatomic, strong, nullable) NSNumber * interval;
@end

@interface FLTAddOrUpdateLiveStreamTaskRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * serial;
@property(nonatomic, copy, nullable) NSString * taskId;
@property(nonatomic, copy, nullable) NSString * url;
@property(nonatomic, strong, nullable) NSNumber * serverRecordEnabled;
@property(nonatomic, strong, nullable) NSNumber * liveMode;
@property(nonatomic, strong, nullable) NSNumber * layoutWidth;
@property(nonatomic, strong, nullable) NSNumber * layoutHeight;
@property(nonatomic, strong, nullable) NSNumber * layoutBackgroundColor;
@property(nonatomic, copy, nullable) NSString * layoutImageUrl;
@property(nonatomic, strong, nullable) NSNumber * layoutImageX;
@property(nonatomic, strong, nullable) NSNumber * layoutImageY;
@property(nonatomic, strong, nullable) NSNumber * layoutImageWidth;
@property(nonatomic, strong, nullable) NSNumber * layoutImageHeight;
@property(nonatomic, strong, nullable) NSArray * layoutUserTranscodingList;
@end

@interface FLTDeleteLiveStreamTaskRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * serial;
@property(nonatomic, copy, nullable) NSString * taskId;
@end

@protocol FLTAudioMixingApi
-(nullable FLTIntValue *)setAudioMixingEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)clearAudioMixingEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)startAudioMixing:(FLTStartAudioMixingRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)stopAudioMixing:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)pauseAudioMixing:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)resumeAudioMixing:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setAudioMixingSendVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)getAudioMixingSendVolume:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setAudioMixingPlaybackVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)getAudioMixingPlaybackVolume:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)getAudioMixingDuration:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)getAudioMixingCurrentPosition:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setAudioMixingPosition:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTAudioMixingApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTAudioMixingApi> _Nullable api);

@protocol FLTVideoRendererApi
-(nullable FLTIntValue *)createVideoRenderer:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setMirror:(FLTSetVideoRendererMirrorRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setupLocalVideoRenderer:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setupRemoteVideoRenderer:(FLTSetupRemoteVideoRendererRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)disposeVideoRenderer:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTVideoRendererApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTVideoRendererApi> _Nullable api);

@protocol FLTDeviceManagerApi
-(nullable FLTIntValue *)setDeviceEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)clearDeviceEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTBoolValue *)isSpeakerphoneOn:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setSpeakerphoneOn:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)switchCamera:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setCameraZoomFactor:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTDoubleValue *)getCameraMaxZoom:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setCameraTorchOn:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setCameraFocusPosition:(FLTSetCameraFocusPositionRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setPlayoutDeviceMute:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTBoolValue *)isPlayoutDeviceMute:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setRecordDeviceMute:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTBoolValue *)isRecordDeviceMute:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)enableEarback:(FLTEnableEarbackRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setEarbackVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setAudioFocusMode:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTDeviceManagerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTDeviceManagerApi> _Nullable api);

@protocol FLTAudioEffectApi
-(nullable FLTIntValue *)setAudioEffectEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)clearAudioEffectEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)playEffect:(FLTPlayEffectRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)stopEffect:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)stopAllEffects:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)pauseEffect:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)resumeEffect:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)pauseAllEffects:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)resumeAllEffects:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setEffectSendVolume:(FLTSetEffectSendVolumeRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)getEffectSendVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setEffectPlaybackVolume:(FLTSetEffectPlaybackVolumeRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)getEffectPlaybackVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTAudioEffectApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTAudioEffectApi> _Nullable api);

@protocol FLTEngineApi
-(nullable FLTIntValue *)create:(FLTCreateEngineRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)release:(FlutterError *_Nullable *_Nonnull)error withCompletion: (void(^)(void))completion;
-(nullable FLTIntValue *)setStatsEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)clearStatsEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setChannelProfile:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)joinChannel:(FLTJoinChannelRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)leaveChannel:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)enableLocalAudio:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)subscribeRemoteAudioStream:(FLTSubscribeRemoteAudioStreamRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)subscribeAllRemoteAudioStreams:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setAudioProfile:(FLTSetAudioProfileRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)enableDualStreamMode:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)setLocalVideoConfig:(FLTSetLocalVideoConfigRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)startVideoPreview:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)stopVideoPreview:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)enableLocalVideo:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)startScreenCapture:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)stopScreenCapture:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)subscribeRemoteVideoStream:(FLTSubscribeRemoteVideoStreamRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)muteLocalAudioStream:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)muteLocalVideoStream:(FLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)startAudioDump:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)stopAudioDump:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)enableAudioVolumeIndication:(FLTEnableAudioVolumeIndicationRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)adjustRecordingSignalVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)adjustPlaybackSignalVolume:(FLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)addLiveStreamTask:(FLTAddOrUpdateLiveStreamTaskRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)updateLiveStreamTask:(FLTAddOrUpdateLiveStreamTaskRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTIntValue *)removeLiveStreamTask:(FLTDeleteLiveStreamTaskRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTEngineApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTEngineApi> _Nullable api);

NS_ASSUME_NONNULL_END
