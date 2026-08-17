#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedAppIDType, SharedAppKeyConfig, SharedAppKeyConfigCompanion, SharedAuditNfcRequest, SharedAuditNfcRequestCompanion, SharedBaseResponse, SharedBaseResponseCompanion, SharedBridgeResult, SharedBridgeResultCompanion, SharedC06Config, SharedC06ConfigCompanion, SharedCheckC06Request, SharedCheckC06RequestCompanion, SharedCheckC06Response, SharedCheckC06ResponseC06CheckResult, SharedCheckC06ResponseC06CheckResultCompanion, SharedCheckC06ResponseCompanion, SharedCheckFaceResponse, SharedCheckFaceResponseCompanion, SharedCheckFaceResponseFaceVerifyResult, SharedCheckFaceResponseFaceVerifyResultCompanion, SharedCheckLivenessResponse, SharedCheckLivenessResponseCompanion, SharedCheckLivenessResponseLivenessCheckResult, SharedCheckLivenessResponseLivenessCheckResultCompanion, SharedCheckLivenessResponseLivenessCheckResultDetails, SharedCheckLivenessResponseLivenessCheckResultDetailsCompanion, SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecks, SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecksCompanion, SharedCheckLivenessResponseMetadata, SharedCheckLivenessResponseMetadataCompanion, SharedCheckOcrResponse, SharedCheckOcrResponseCompanion, SharedCheckOcrResponseOcrCheckResult, SharedCheckOcrResponseOcrCheckResultCompanion, SharedCheckOcrResponseOcrCheckResultDetail, SharedCheckOcrResponseOcrCheckResultDetailCompanion, SharedCheckOcrResponseOcrCheckResultDetailFieldsExtracted, SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedCompanion, SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzString, SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzStringCompanion, SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddress, SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddressCompanion, SharedCheckOcrResponseOcrCheckResultDetailForgeryChecks, SharedCheckOcrResponseOcrCheckResultDetailForgeryChecksCompanion, SharedCheckOcrResponseOcrCheckResultDetailQualityChecks, SharedCheckOcrResponseOcrCheckResultDetailQualityChecksCompanion, SharedCheckOcrResponseOcrCheckResultDetailRuleChecks, SharedCheckOcrResponseOcrCheckResultDetailRuleChecksCompanion, SharedCheckOcrResponseOcrCheckResultDetailTamperChecks, SharedCheckOcrResponseOcrCheckResultDetailTamperChecksCompanion, SharedCheckSummaryResponse, SharedCheckSummaryResponseCompanion, SharedCheckSummaryResponseDetail, SharedCheckSummaryResponseDetailCompanion, SharedCommonField, SharedCommonFieldCompanion, SharedCommonFieldWithRange, SharedCommonFieldWithRangeCompanion, SharedDG13InfoTypeCompanion, SharedEKCaptureCondition, SharedEKCaptureMetrics, SharedEKCaptureQuality, SharedEKCaptureTimings, SharedEKCardTextClassifier, SharedEKCardTextFlags, SharedEKDetectionMapping, SharedEKFaceCondition, SharedEKFaceMetrics, SharedEKFaceQuality, SharedEKIdValidator, SharedEKIdValidatorCccdInfo, SharedEKIdValidatorExpiryStatus, SharedEKIdValidatorIdCheck, SharedEKImageMetrics, SharedEKIntegrityResult, SharedEKIntegrityVerdict, SharedEKIssueKind, SharedEKRoi, SharedEKStrings, SharedEKYCConfigSDK, SharedEKYCConfigSDKCompanion, SharedEKYCErrorEvent, SharedEKYCErrorResult, SharedEKYCErrorResultBRIDGE_CONFIG_MISSING, SharedEKYCErrorResultBRIDGE_FILE_NOT_FOUND, SharedEKYCErrorResultBRIDGE_INVALID_PARAMS, SharedEKYCErrorResultBRIDGE_INVALID_SERIAL, SharedEKYCErrorResultBRIDGE_NO_ACTIVITY, SharedEKYCErrorResultBRIDGE_NO_VIEW_CONTROLLER, SharedEKYCErrorResultBRIDGE_PARSE_ERROR, SharedEKYCErrorResultC06_ERROR, SharedEKYCErrorResultCONFIG_NULL, SharedEKYCErrorResultCompanion, SharedEKYCErrorResultCustomError, SharedEKYCErrorResultDEVICE_DEBUGGING, SharedEKYCErrorResultDEVICE_HOOKED, SharedEKYCErrorResultDEVICE_JAILBROKEN, SharedEKYCErrorResultDEVICE_SIMULATOR, SharedEKYCErrorResultERROR_SDK_KEY, SharedEKYCErrorResultERROR_UNKNOWN, SharedEKYCErrorResultESIGN_APP_LIMITED, SharedEKYCErrorResultESIGN_AUTH_EXISTS, SharedEKYCErrorResultESIGN_AUTH_REQUEST_EXISTS, SharedEKYCErrorResultESIGN_DEVICE_ALREADY_INIT, SharedEKYCErrorResultESIGN_DEVICE_NOT_INIT, SharedEKYCErrorResultESIGN_ERROR_UNKNOWN, SharedEKYCErrorResultESIGN_INVALID_CERT_FOR_AUTH, SharedEKYCErrorResultESIGN_INVALID_CONTEXT, SharedEKYCErrorResultESIGN_INVALID_EXPIRED_DATE_FORMAT, SharedEKYCErrorResultESIGN_INVALID_LICENSE, SharedEKYCErrorResultESIGN_INVALID_LICENSE_CODE, SharedEKYCErrorResultESIGN_INVALID_LICENSE_CONTENT, SharedEKYCErrorResultESIGN_INVALID_PAGE_PARAMS, SharedEKYCErrorResultESIGN_INVALID_PIN_CODE, SharedEKYCErrorResultESIGN_INVALID_PIN_FORMAT, SharedEKYCErrorResultESIGN_INVALID_QUANTITY, SharedEKYCErrorResultESIGN_INVALID_RECOVERY_CODE, SharedEKYCErrorResultESIGN_INVALID_RECOVERY_FORMAT, SharedEKYCErrorResultESIGN_INVALID_RECOVERY_OR_PIN, SharedEKYCErrorResultESIGN_INVALID_REGISTER_DATE_FORMAT, SharedEKYCErrorResultESIGN_INVALID_REQUEST_JSON, SharedEKYCErrorResultESIGN_INVALID_SIGN_COUNT_OR_TIME, SharedEKYCErrorResultESIGN_INVALID_TIME, SharedEKYCErrorResultESIGN_INVALID_USER_ACCOUNT, SharedEKYCErrorResultESIGN_MISSING_ACCESS_TOKEN, SharedEKYCErrorResultESIGN_MISSING_AUTHORIZE_REQUEST_ID, SharedEKYCErrorResultESIGN_MISSING_AUTH_DATA, SharedEKYCErrorResultESIGN_MISSING_AUTH_ID, SharedEKYCErrorResultESIGN_MISSING_CCCD, SharedEKYCErrorResultESIGN_MISSING_CONFIRMATION_DOC, SharedEKYCErrorResultESIGN_MISSING_DEVICE_ID, SharedEKYCErrorResultESIGN_MISSING_EMAIL_OR_PHONE, SharedEKYCErrorResultESIGN_MISSING_FIELD_ACCEPT_TIME, SharedEKYCErrorResultESIGN_MISSING_FIELD_ADDRESS, SharedEKYCErrorResultESIGN_MISSING_FIELD_DATA, SharedEKYCErrorResultESIGN_MISSING_FIELD_DEVICE, SharedEKYCErrorResultESIGN_MISSING_FIELD_DOCUMENT_NAME, SharedEKYCErrorResultESIGN_MISSING_FIELD_EXPIRED_DATE, SharedEKYCErrorResultESIGN_MISSING_FIELD_IDENTITY, SharedEKYCErrorResultESIGN_MISSING_FIELD_NAME, SharedEKYCErrorResultESIGN_MISSING_FIELD_POLICY_STATUS, SharedEKYCErrorResultESIGN_MISSING_FIELD_REGISTER_DATE, SharedEKYCErrorResultESIGN_MISSING_FIELD_SERIAL_TOKEN, SharedEKYCErrorResultESIGN_MISSING_FIELD_SESSION_ID, SharedEKYCErrorResultESIGN_MISSING_FIELD_SIGNATURE, SharedEKYCErrorResultESIGN_MISSING_FIELD_SOD, SharedEKYCErrorResultESIGN_MISSING_FIELD_USERNAME, SharedEKYCErrorResultESIGN_MISSING_IDENTITY, SharedEKYCErrorResultESIGN_MISSING_NAME, SharedEKYCErrorResultESIGN_MISSING_PIN_CODE, SharedEKYCErrorResultESIGN_MISSING_POLICY_AGREEMENT, SharedEKYCErrorResultESIGN_MISSING_REQUEST_ID, SharedEKYCErrorResultESIGN_MISSING_REQUEST_JSON, SharedEKYCErrorResultESIGN_MISSING_SERIAL, SharedEKYCErrorResultESIGN_MISSING_SIGNING_CONTENTS, SharedEKYCErrorResultESIGN_MISSING_SIGN_POSITIONS, SharedEKYCErrorResultESIGN_MISSING_SIGN_POSITION_LOCATION, SharedEKYCErrorResultESIGN_MISSING_STATUS, SharedEKYCErrorResultESIGN_MISSING_TOKEN, SharedEKYCErrorResultESIGN_MISSING_TOKEN_INFO, SharedEKYCErrorResultESIGN_MISSING_USER_INFO, SharedEKYCErrorResultESIGN_MISSING_USER_PIN, SharedEKYCErrorResultESIGN_NO_SESSION_ID, SharedEKYCErrorResultESIGN_SESSION_INVALID, SharedEKYCErrorResultESIGN_SESSION_INVALID_LIST_CERT, SharedEKYCErrorResultESIGN_SESSION_INVALID_REGISTER, SharedEKYCErrorResultEYES_CLOSED_IN_SELFIE, SharedEKYCErrorResultEYEWEAR_DETECTED_IN_SELFIE, SharedEKYCErrorResultFACE_ERROR, SharedEKYCErrorResultFACE_HAT_ERROR, SharedEKYCErrorResultFACE_IS_BLURRED, SharedEKYCErrorResultFACE_OCCLUDED_IN_SELFIE, SharedEKYCErrorResultFETCH_HISTORY_ERROR, SharedEKYCErrorResultHEAD_IS_TURNED_IN_SELFIE, SharedEKYCErrorResultLIVENESS_ERROR, SharedEKYCErrorResultLIVENESS_FAIL, SharedEKYCErrorResultMASK_PRESENT_IN_SELFIE, SharedEKYCErrorResultMULTIPLE_FACES_IN_SELFIE, SharedEKYCErrorResultNFC_CHIP_AUTH_FAILED, SharedEKYCErrorResultNFC_CONNECTION_LOST, SharedEKYCErrorResultNFC_INVALID_MRZ_KEY, SharedEKYCErrorResultNFC_IO_ERROR, SharedEKYCErrorResultNFC_MUTUAL_AUTH_FAILED, SharedEKYCErrorResultNFC_UNKNOWN_ERROR, SharedEKYCErrorResultNFC_USER_CANCEL, SharedEKYCErrorResultNUDITY_DETECTED_IN_SELFIE, SharedEKYCErrorResultOCR_BLURRY_ID_CARD, SharedEKYCErrorResultOCR_CANNOT_GET_BIRTH_YEAR, SharedEKYCErrorResultOCR_CANNOT_GET_EXPIRY_DATE, SharedEKYCErrorResultOCR_CANNOT_GET_GENDER, SharedEKYCErrorResultOCR_CANNOT_GET_HOMETOWN, SharedEKYCErrorResultOCR_CANNOT_GET_ID_NUMBER, SharedEKYCErrorResultOCR_CANNOT_GET_ISSUE_DATE, SharedEKYCErrorResultOCR_CANNOT_GET_ISSUE_PLACE, SharedEKYCErrorResultOCR_CANNOT_GET_NAME, SharedEKYCErrorResultOCR_CANNOT_GET_RESIDENCE, SharedEKYCErrorResultOCR_CANNOT_RECOGNIZE_PORTRAIT, SharedEKYCErrorResultOCR_CUT_CORNER_ID_CARD, SharedEKYCErrorResultOCR_ERROR, SharedEKYCErrorResultOCR_FAKE_BIRTH_DATE_DETECTED_CMND, SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_1, SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_2, SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_CMND, SharedEKYCErrorResultOCR_FAKE_MRZ, SharedEKYCErrorResultOCR_FAKE_PORTRAIT_DETECTED, SharedEKYCErrorResultOCR_FAKE_PORTRAIT_DETECTED_CMND, SharedEKYCErrorResultOCR_FONT_BACK_NOT_MATCH, SharedEKYCErrorResultOCR_GLARE_ID_CARD, SharedEKYCErrorResultOCR_ID_CARD_EXPIRED, SharedEKYCErrorResultOCR_ID_CARD_FROM_OTHER_DEVICE, SharedEKYCErrorResultOCR_ID_INFO_MISMATCH, SharedEKYCErrorResultOCR_INVALID_GENDER_CODE, SharedEKYCErrorResultOCR_INVALID_ID_CARD, SharedEKYCErrorResultOCR_MISSING_ID_CARD_PART, SharedEKYCErrorResultOCR_MODIFIED_BIRTH_DATE_DETECTED_CMND, SharedEKYCErrorResultOCR_MODIFIED_SYMBOL_DETECTED_CMND, SharedEKYCErrorResultOCR_NOT_ORIGINAL_ID_CARD, SharedEKYCErrorResultOCR_PHOTOCOPY_ID_CARD, SharedEKYCErrorResultOCR_UNKNOWN_ID_NUMBER_LENGTH, SharedEKYCErrorResultOCR_UNRECOGNIZED_ID_CARD, SharedEKYCErrorResultOCR_USE_NEW_ID_DOCUMENT_1, SharedEKYCErrorResultOCR_USE_NEW_ID_DOCUMENT_2, SharedEKYCErrorResultOCR_WRONG_ID_CARD_SIDE, SharedEKYCErrorResultQRCODE_ERROR, SharedEKYCErrorResultREADING_GLASSES_DETECTED_IN_SELFIE, SharedEKYCErrorResultSCAN_NFC_CHECK, SharedEKYCErrorResultSCAN_NFC_ENABLE, SharedEKYCErrorResultSCAN_NFC_ERROR, SharedEKYCErrorResultSDK_INVALID_LANGUAGE, SharedEKYCErrorResultSDK_MISS_ACTIVITY, SharedEKYCErrorResultSDK_MISS_APP_KEY_C06, SharedEKYCErrorResultSDK_MISS_APP_KEY_FACE_SERVICE, SharedEKYCErrorResultSDK_MISS_APP_KEY_LIVENESS, SharedEKYCErrorResultSDK_MISS_APP_KEY_NFC, SharedEKYCErrorResultSDK_MISS_APP_KEY_OCR, SharedEKYCErrorResultSDK_MISS_C06, SharedEKYCErrorResultSDK_MISS_FACE_SERVICE, SharedEKYCErrorResultSDK_MISS_IMAGE, SharedEKYCErrorResultSDK_MISS_KEY, SharedEKYCErrorResultSDK_MISS_LIVENESS, SharedEKYCErrorResultSDK_MISS_NFC, SharedEKYCErrorResultSDK_MISS_OCR, SharedEKYCErrorResultSDK_NETWORK_ERROR, SharedEKYCErrorResultSDK_NETWORK_TIMEOUT, SharedEKYCErrorResultSDK_NOT_INITIALIZED, SharedEKYCErrorResultSDK_NO_DATA, SharedEKYCErrorResultSDK_START_ERROR, SharedEKYCErrorResultSDK_START_FLOW_ERROR, SharedEKYCErrorResultSDK_TAMPERED, SharedEKYCErrorResultSDK_TLS_PINNING_FAILED, SharedEKYCErrorResultSDK_TYPE_KEY, SharedEKYCErrorResultSMS_OTP_ERROR, SharedEKYCErrorResultSMS_OTP_INVALID_PHONE, SharedEKYCErrorResultSMS_OTP_MAX_ATTEMPTS, SharedEKYCErrorResultSMS_OTP_MISSING_OTP_CODE, SharedEKYCErrorResultSMS_OTP_MISSING_PHONE, SharedEKYCErrorResultSMS_OTP_MISSING_REFERENCE_ID, SharedEKYCErrorResultSMS_OTP_NOT_FOUND, SharedEKYCErrorResultSMS_OTP_RATE_LIMIT, SharedEKYCErrorResultUSER_CANCEL, SharedEKYCErrorResultVALIDATION_INVALID_ENV, SharedEKYCErrorResultVALIDATION_INVALID_SIDE, SharedEKYCErrorResultVALIDATION_MISSING_BIRTH_DATE, SharedEKYCErrorResultVALIDATION_MISSING_CARD_NUMBER, SharedEKYCErrorResultVALIDATION_MISSING_DOCUMENT_NUMBER, SharedEKYCErrorResultVALIDATION_MISSING_EXPIRED_DATE, SharedEKYCErrorResultVALIDATION_MISSING_EXPIRE_DATE, SharedEKYCErrorResultVALIDATION_MISSING_ID_IMAGE, SharedEKYCErrorResultVALIDATION_MISSING_IMAGE_PATH, SharedEKYCErrorResultVALIDATION_MISSING_LOCATION, SharedEKYCErrorResultVALIDATION_MISSING_PHONE, SharedEKYCErrorResultVALIDATION_MISSING_REFERENCE_ID, SharedEKYCErrorResultVALIDATION_MISSING_REQUEST_ID, SharedEKYCErrorResultVALIDATION_MISSING_SELFIE, SharedEKYCErrorResultVALIDATION_MISSING_SOD, SharedEKYCErrorResultVALIDATION_MISSING_TRANSACTION_ID, SharedEKYCEvent, SharedEkycAuthTokenManager, SharedEkycBridge, SharedEkycFlow, SharedEkycFlowCompanion, SharedEkycFlowManager, SharedEkycFlowSerializer, SharedErrorResponseParser, SharedExitConfirmConfig, SharedExitConfirmConfigButtonProps, SharedExitConfirmConfigButtonPropsCompanion, SharedExitConfirmConfigCompanion, SharedExitConfirmConfigContentProps, SharedExitConfirmConfigContentPropsCompanion, SharedExitConfirmConfigGradientOrientation, SharedExitConfirmConfigGradientOrientationCompanion, SharedExitConfirmConfigIconProps, SharedExitConfirmConfigIconPropsCompanion, SharedExitConfirmConfigTextStyles, SharedExitConfirmConfigTextStylesCompanion, SharedExitConfirmConfigTitleProps, SharedExitConfirmConfigTitlePropsCompanion, SharedExitConfirmConfigViewStyle, SharedExitConfirmConfigViewStyleCompanion, SharedFaceServiceConfig, SharedFaceServiceConfigCompanion, SharedFaceStateType, SharedFaceStateTypeCompanion, SharedGeneratedDevConfig, SharedGeneratedQualityRules, SharedGeneratedSdkDefaults, SharedGeneratedSecurityPolicy, SharedInterpretationResult, SharedInterpretationResultFailure, SharedInterpretationResultSuccess, SharedInterpreterOutcome, SharedInterpreterOutcomeCompanion, SharedKoinBridge, SharedKoin_coreBeanDefinition<T>, SharedKoin_coreCallbacks<T>, SharedKoin_coreExtensionManager, SharedKoin_coreInstanceFactory<T>, SharedKoin_coreInstanceFactoryCompanion, SharedKoin_coreInstanceRegistry, SharedKoin_coreKind, SharedKoin_coreKoin, SharedKoin_coreKoinApplication, SharedKoin_coreKoinApplicationCompanion, SharedKoin_coreKoinDefinition<R>, SharedKoin_coreLevel, SharedKoin_coreLockable, SharedKoin_coreLogger, SharedKoin_coreModule, SharedKoin_coreParametersHolder, SharedKoin_corePropertyRegistry, SharedKoin_coreResolutionContext, SharedKoin_coreScope, SharedKoin_coreScopeDSL, SharedKoin_coreScopeRegistry, SharedKoin_coreScopeRegistryCompanion, SharedKoin_coreSingleInstanceFactory<T>, SharedKotlinAbstractCoroutineContextElement, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedKotlinArray<T>, SharedKotlinByteArray, SharedKotlinByteIterator, SharedKotlinCancellationException, SharedKotlinEnum<E>, SharedKotlinEnumCompanion, SharedKotlinException, SharedKotlinIllegalStateException, SharedKotlinKTypeProjection, SharedKotlinKTypeProjectionCompanion, SharedKotlinKVariance, SharedKotlinLazyThreadSafetyMode, SharedKotlinNothing, SharedKotlinRandom, SharedKotlinRandomDefault, SharedKotlinRuntimeException, SharedKotlinThrowable, SharedKotlinUnit, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKotlinx_io_coreBuffer, SharedKotlinx_serialization_coreSerialKind, SharedKotlinx_serialization_coreSerializersModule, SharedKtorClientFactory, SharedKtor_client_authBearerTokens, SharedKtor_client_coreHttpClient, SharedKtor_client_coreHttpClientCall, SharedKtor_client_coreHttpClientCallCompanion, SharedKtor_client_coreHttpClientConfig<T>, SharedKtor_client_coreHttpClientEngineConfig, SharedKtor_client_coreHttpReceivePipeline, SharedKtor_client_coreHttpReceivePipelinePhases, SharedKtor_client_coreHttpRequestBuilder, SharedKtor_client_coreHttpRequestBuilderCompanion, SharedKtor_client_coreHttpRequestData, SharedKtor_client_coreHttpRequestPipeline, SharedKtor_client_coreHttpRequestPipelinePhases, SharedKtor_client_coreHttpResponse, SharedKtor_client_coreHttpResponseContainer, SharedKtor_client_coreHttpResponseData, SharedKtor_client_coreHttpResponsePipeline, SharedKtor_client_coreHttpResponsePipelinePhases, SharedKtor_client_coreHttpSendPipeline, SharedKtor_client_coreHttpSendPipelinePhases, SharedKtor_client_coreProxyConfig, SharedKtor_eventsEventDefinition<T>, SharedKtor_eventsEvents, SharedKtor_httpContentType, SharedKtor_httpContentTypeCompanion, SharedKtor_httpHeaderValueParam, SharedKtor_httpHeaderValueWithParameters, SharedKtor_httpHeaderValueWithParametersCompanion, SharedKtor_httpHeadersBuilder, SharedKtor_httpHttpMethod, SharedKtor_httpHttpMethodCompanion, SharedKtor_httpHttpProtocolVersion, SharedKtor_httpHttpProtocolVersionCompanion, SharedKtor_httpHttpStatusCode, SharedKtor_httpHttpStatusCodeCompanion, SharedKtor_httpOutgoingContent, SharedKtor_httpURLBuilder, SharedKtor_httpURLBuilderCompanion, SharedKtor_httpURLProtocol, SharedKtor_httpURLProtocolCompanion, SharedKtor_httpUrl, SharedKtor_httpUrlCompanion, SharedKtor_utilsAttributeKey<T>, SharedKtor_utilsGMTDate, SharedKtor_utilsGMTDateCompanion, SharedKtor_utilsMonth, SharedKtor_utilsMonthCompanion, SharedKtor_utilsPipeline<TSubject, TContext>, SharedKtor_utilsPipelinePhase, SharedKtor_utilsStringValuesBuilderImpl, SharedKtor_utilsTypeInfo, SharedKtor_utilsWeekDay, SharedKtor_utilsWeekDayCompanion, SharedLivenessBackConfirmConfig, SharedLivenessBackConfirmConfigCompanion, SharedLivenessClassifier, SharedLivenessConfig, SharedLivenessConfigCompanion, SharedLivenessFitMeter, SharedLivenessFitMeterTone, SharedLivenessResult, SharedLivenessSteps, SharedLivenessThresholds, SharedMessage, SharedMessageCompanion, SharedMrzValidator, SharedMrzValidatorMrzValidationResult, SharedNFCDataCompanion, SharedNativeConfig, SharedNfcConfig, SharedNfcConfigCompanion, SharedNfcInfo, SharedNfcInfoCompanion, SharedNfcReadResult, SharedOcrConfig, SharedOcrConfigCompanion, SharedOptionConfig, SharedOptionConfigCompanion, SharedQrCodeValidator, SharedQrCodeValidatorQrValidationResult, SharedResendOtpRequest, SharedResendOtpRequestCompanion, SharedResendOtpResponse, SharedResendOtpResponseCompanion, SharedResponseInterpreter, SharedSDKApiCode, SharedSDKBackOfficeService, SharedSDKBaseResponse, SharedSDKBaseResponseCompanion, SharedSDKBundleEvent, SharedSDKEkycService, SharedSDKEnv, SharedSDKEnvCompanion, SharedSDKEventLogger, SharedSDKFaceDetectStatus, SharedSDKFaceDetectStatusCompanion, SharedSDKFinOS, SharedSDKImageAspect, SharedSDKImageCaptureMode, SharedSDKImageProcessingPlan, SharedSDKImageRect, SharedSDKImageSize, SharedSDKImageSpec, SharedSDKInputValidator, SharedSDKJobType, SharedSDKLanguage, SharedSDKLanguages, SharedSDKListTransactionResponse, SharedSDKListTransactionResponseCompanion, SharedSDKListTransactionResponseResultWrapper, SharedSDKListTransactionResponseResultWrapperCompanion, SharedSDKListTransactionResponseResultWrapperDetails, SharedSDKListTransactionResponseResultWrapperDetailsCompanion, SharedSDKListTransactionResponseResultWrapperDetailsTransactions, SharedSDKListTransactionResponseResultWrapperDetailsTransactionsCompanion, SharedSDKResponseKey, SharedSDKResult<__covariant T>, SharedSDKResultError, SharedSDKResultException, SharedSDKResultSuccess<__covariant T>, SharedSDKSmsOtpService, SharedSDKStepType, SharedSDKTransactionResponse, SharedSDKTransactionResponseCompanion, SharedSDKType, SharedSdkInitResponse, SharedSdkInitResponseCompanion, SharedSendOtpRequest, SharedSendOtpRequestCompanion, SharedSendOtpResponse, SharedSendOtpResponseCompanion, SharedSmsOtpConfig, SharedSmsOtpConfigCompanion, SharedStyleConfig, SharedStyleConfigCompanion, SharedStyleConfigTextStyle, SharedStyleConfigTextStyleCompanion, SharedSubmitLivenessResponse, SharedSubmitLivenessResponseCompanion, SharedSubmitLivenessResponseDataPayload, SharedSubmitLivenessResponseDataPayloadCompanion, SharedSubmitLivenessResponseSubmitLivenessMessage, SharedSubmitLivenessResponseSubmitLivenessMessageCompanion, SharedSuccessPayload, SharedTlsPinConfig, SharedTransactionManager, SharedTransactionManagerTransactionIdSource, SharedValidationResult, SharedValidationResultError, SharedValidationResultOk, SharedVerifyOtpRequest, SharedVerifyOtpRequestCompanion, SharedVerifyOtpResponse, SharedVerifyOtpResponseCompanion;

@protocol SharedEKYCSummaryDetail, SharedKoin_coreKoinComponent, SharedKoin_coreKoinExtension, SharedKoin_coreKoinScopeComponent, SharedKoin_coreQualifier, SharedKoin_coreScopeCallback, SharedKotlinAnnotation, SharedKotlinAutoCloseable, SharedKotlinComparable, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinCoroutineContext, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKotlinFunction, SharedKotlinIterator, SharedKotlinKAnnotatedElement, SharedKotlinKClass, SharedKotlinKClassifier, SharedKotlinKDeclarationContainer, SharedKotlinKType, SharedKotlinLazy, SharedKotlinMapEntry, SharedKotlinSequence, SharedKotlinSuspendFunction1, SharedKotlinSuspendFunction2, SharedKotlinx_coroutines_coreChildHandle, SharedKotlinx_coroutines_coreChildJob, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinx_coroutines_coreJob, SharedKotlinx_coroutines_coreParentJob, SharedKotlinx_coroutines_coreRunnable, SharedKotlinx_coroutines_coreSelectClause, SharedKotlinx_coroutines_coreSelectClause0, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinx_io_coreRawSink, SharedKotlinx_io_coreRawSource, SharedKotlinx_io_coreSink, SharedKotlinx_io_coreSource, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreKSerializer, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKtor_client_coreClientPlugin, SharedKtor_client_coreHttpClientEngine, SharedKtor_client_coreHttpClientEngineCapability, SharedKtor_client_coreHttpClientPlugin, SharedKtor_client_coreHttpRequest, SharedKtor_httpHeaders, SharedKtor_httpHttpMessage, SharedKtor_httpHttpMessageBuilder, SharedKtor_httpParameters, SharedKtor_httpParametersBuilder, SharedKtor_ioByteReadChannel, SharedKtor_ioCloseable, SharedKtor_ioJvmSerializable, SharedKtor_utilsAttributes, SharedKtor_utilsStringValues, SharedKtor_utilsStringValuesBuilder;

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
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int64_t)currentTimeMillis __attribute__((swift_name("currentTimeMillis()")));
- (void)logWTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logW(tag:message:)")));
- (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycAuthTokenManager")))
@interface SharedEkycAuthTokenManager : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ekycAuthTokenManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEkycAuthTokenManager *shared __attribute__((swift_name("shared")));
- (SharedKtor_client_authBearerTokens * _Nullable)cached __attribute__((swift_name("cached()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshClient:(SharedKtor_client_coreHttpClient *)client completionHandler:(void (^)(SharedKtor_client_authBearerTokens * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refresh(client:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResult")))
@interface SharedBridgeResult : SharedBase
- (instancetype)initWithSuccess:(BOOL)success data:(NSString * _Nullable)data errorCode:(NSString * _Nullable)errorCode errorMessage:(NSString * _Nullable)errorMessage interpretedErrorCode:(NSString * _Nullable)interpretedErrorCode interpretedErrorMessageVi:(NSString * _Nullable)interpretedErrorMessageVi interpretedErrorMessageEn:(NSString * _Nullable)interpretedErrorMessageEn __attribute__((swift_name("init(success:data:errorCode:errorMessage:interpretedErrorCode:interpretedErrorMessageVi:interpretedErrorMessageEn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedBridgeResultCompanion *companion __attribute__((swift_name("companion")));
- (SharedBridgeResult *)doCopySuccess:(BOOL)success data:(NSString * _Nullable)data errorCode:(NSString * _Nullable)errorCode errorMessage:(NSString * _Nullable)errorMessage interpretedErrorCode:(NSString * _Nullable)interpretedErrorCode interpretedErrorMessageVi:(NSString * _Nullable)interpretedErrorMessageVi interpretedErrorMessageEn:(NSString * _Nullable)interpretedErrorMessageEn __attribute__((swift_name("doCopy(success:data:errorCode:errorMessage:interpretedErrorCode:interpretedErrorMessageVi:interpretedErrorMessageEn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString * _Nullable interpretedErrorCode __attribute__((swift_name("interpretedErrorCode")));
@property (readonly) NSString * _Nullable interpretedErrorMessageEn __attribute__((swift_name("interpretedErrorMessageEn")));
@property (readonly) NSString * _Nullable interpretedErrorMessageVi __attribute__((swift_name("interpretedErrorMessageVi")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResult.Companion")))
@interface SharedBridgeResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBridgeResultCompanion *shared __attribute__((swift_name("shared")));
- (SharedBridgeResult *)failureError:(SharedEKYCErrorResult *)error __attribute__((swift_name("failure(error:)")));
- (SharedBridgeResult *)fromThrowableE:(SharedKotlinThrowable *)e __attribute__((swift_name("fromThrowable(e:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (SharedBridgeResult *)successData:(NSString *)data __attribute__((swift_name("success(data:)")));
- (SharedBridgeResult *)successData:(NSString *)data outcome:(SharedInterpreterOutcome * _Nullable)outcome __attribute__((swift_name("success(data:outcome:)")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol SharedKoin_coreKoinComponent
@required
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycBridge")))
@interface SharedEkycBridge : SharedBase <SharedKoin_coreKoinComponent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ekycBridge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEkycBridge *shared __attribute__((swift_name("shared")));
- (void)executeC06AppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestJson:(NSString *)requestJson onResult:(void (^)(NSString *))onResult __attribute__((swift_name("executeC06(appKey:transactionId:requestJson:onResult:)")));
- (void)executeLivenessActiveAppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestId:(NSString *)requestId result:(NSString *)result selfieBytes:(SharedKotlinByteArray *)selfieBytes onResult:(void (^)(NSString *))onResult __attribute__((swift_name("executeLivenessActive(appKey:transactionId:requestId:result:selfieBytes:onResult:)")));
- (void)faceCompareAppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestId:(NSString *)requestId idBytes:(SharedKotlinByteArray *)idBytes selfieBytes:(SharedKotlinByteArray *)selfieBytes onResult:(void (^)(NSString *))onResult __attribute__((swift_name("faceCompare(appKey:transactionId:requestId:idBytes:selfieBytes:onResult:)")));
- (void)fetchTransactionHistoriesAppKey:(NSString * _Nullable)appKey requestIds:(NSString *)requestIds onResult:(void (^)(NSString *))onResult __attribute__((swift_name("fetchTransactionHistories(appKey:requestIds:onResult:)")));
- (NSArray<NSString *> *)getFlowSteps __attribute__((swift_name("getFlowSteps()")));
- (NSString *)getTransactionId __attribute__((swift_name("getTransactionId()")));
- (void)initialize __attribute__((swift_name("initialize()")));
- (void)livenessCheckAppKey:(NSString *)appKey transactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes onResult:(void (^)(NSString *))onResult __attribute__((swift_name("livenessCheck(appKey:transactionId:imageBytes:onResult:)")));
- (void)nfcCheckAppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestJson:(NSString *)requestJson onResult:(void (^)(NSString *))onResult __attribute__((swift_name("nfcCheck(appKey:transactionId:requestJson:onResult:)")));
- (void)ocrCheckAppKey:(NSString *)appKey transactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes side:(NSString *)side onResult:(void (^)(NSString *))onResult __attribute__((swift_name("ocrCheck(appKey:transactionId:imageBytes:side:onResult:)")));
- (void)resendOtpAppKey:(NSString *)appKey requestJson:(NSString *)requestJson onResult:(void (^)(NSString *))onResult __attribute__((swift_name("resendOtp(appKey:requestJson:onResult:)")));
- (void)sendOtpAppKey:(NSString *)appKey requestJson:(NSString *)requestJson onResult:(void (^)(NSString *))onResult __attribute__((swift_name("sendOtp(appKey:requestJson:onResult:)")));
- (void)updateConfigConfigJson:(NSString *)configJson __attribute__((swift_name("updateConfig(configJson:)")));
- (void)validateMrzOcrIdNumber:(NSString * _Nullable)ocrIdNumber nfcDocumentNumber:(NSString * _Nullable)nfcDocumentNumber onResult:(void (^)(NSString *))onResult __attribute__((swift_name("validateMrz(ocrIdNumber:nfcDocumentNumber:onResult:)")));
- (void)validateQrCodeQrData:(NSString *)qrData onResult:(void (^)(NSString *))onResult __attribute__((swift_name("validateQrCode(qrData:onResult:)")));
- (void)verifyOtpAppKey:(NSString *)appKey requestJson:(NSString *)requestJson onResult:(void (^)(NSString *))onResult __attribute__((swift_name("verifyOtp(appKey:requestJson:onResult:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKStrings")))
@interface SharedEKStrings : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKStrings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKStrings *shared __attribute__((swift_name("shared")));
- (NSString *)getBadgeTextIsFront:(BOOL)isFront lang:(NSString * _Nullable)lang __attribute__((swift_name("getBadgeText(isFront:lang:)")));
- (NSArray<NSString *> *)getLivenessTipsLang:(NSString * _Nullable)lang __attribute__((swift_name("getLivenessTips(lang:)")));
- (NSArray<NSString *> *)getNfcTipsLang:(NSString * _Nullable)lang __attribute__((swift_name("getNfcTips(lang:)")));
- (NSArray<NSString *> *)getOcrGuidesLang:(NSString * _Nullable)lang __attribute__((swift_name("getOcrGuides(lang:)")));
- (NSArray<NSString *> *)getOcrTipsLang:(NSString * _Nullable)lang __attribute__((swift_name("getOcrTips(lang:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneratedDevConfig")))
@interface SharedGeneratedDevConfig : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)generatedDevConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGeneratedDevConfig *shared __attribute__((swift_name("shared")));
@property BOOL enableDebugLogging __attribute__((swift_name("enableDebugLogging")));
@property BOOL enableEventLogging __attribute__((swift_name("enableEventLogging")));
@property BOOL enableKoinLogging __attribute__((swift_name("enableKoinLogging")));
@property BOOL enableNetworkLogging __attribute__((swift_name("enableNetworkLogging")));
@property NSSet<NSString *> *maskedLogHeaders __attribute__((swift_name("maskedLogHeaders")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneratedSdkDefaults")))
@interface SharedGeneratedSdkDefaults : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)generatedSdkDefaults __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGeneratedSdkDefaults *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t AUTH_EXPIRY_SAFETY_BUFFER_MS __attribute__((swift_name("AUTH_EXPIRY_SAFETY_BUFFER_MS")));
@property (readonly) int64_t BACKOFFICE_IMAGE_CONNECT_TIMEOUT_MS __attribute__((swift_name("BACKOFFICE_IMAGE_CONNECT_TIMEOUT_MS")));
@property (readonly) int64_t BACKOFFICE_IMAGE_READ_TIMEOUT_MS __attribute__((swift_name("BACKOFFICE_IMAGE_READ_TIMEOUT_MS")));
@property (readonly) int32_t BACKOFFICE_SUMMARY_FETCH_MAX_RETRIES __attribute__((swift_name("BACKOFFICE_SUMMARY_FETCH_MAX_RETRIES")));
@property (readonly) int64_t BACKOFFICE_SUMMARY_FETCH_RETRY_DELAY_MS __attribute__((swift_name("BACKOFFICE_SUMMARY_FETCH_RETRY_DELAY_MS")));
@property (readonly) int32_t EKYC_ACTIVE_ACTION_COUNT __attribute__((swift_name("EKYC_ACTIVE_ACTION_COUNT")));
@property (readonly) int32_t EKYC_CALL_TIMEOUT_MULTIPLIER __attribute__((swift_name("EKYC_CALL_TIMEOUT_MULTIPLIER")));
@property (readonly) int32_t EKYC_COUNT_MAX_RETRY __attribute__((swift_name("EKYC_COUNT_MAX_RETRY")));
@property (readonly) int64_t EKYC_NETWORK_TIMEOUT_MS __attribute__((swift_name("EKYC_NETWORK_TIMEOUT_MS")));
@property (readonly) int32_t ESIGN_DEFAULT_PAGE_NUMBER __attribute__((swift_name("ESIGN_DEFAULT_PAGE_NUMBER")));
@property (readonly) int32_t ESIGN_DEFAULT_PAGE_SIZE __attribute__((swift_name("ESIGN_DEFAULT_PAGE_SIZE")));
@property (readonly) int32_t ESIGN_MAX_POLL_ATTEMPTS __attribute__((swift_name("ESIGN_MAX_POLL_ATTEMPTS")));
@property (readonly) NSString *ESIGN_OPTIMISTIC_LOCK_ERROR_SUBSTRING __attribute__((swift_name("ESIGN_OPTIMISTIC_LOCK_ERROR_SUBSTRING")));
@property (readonly) int32_t ESIGN_OPTIMISTIC_LOCK_MAX_ATTEMPTS __attribute__((swift_name("ESIGN_OPTIMISTIC_LOCK_MAX_ATTEMPTS")));
@property (readonly) int64_t ESIGN_OPTIMISTIC_LOCK_RETRY_DELAY_MS __attribute__((swift_name("ESIGN_OPTIMISTIC_LOCK_RETRY_DELAY_MS")));
@property (readonly) int64_t ESIGN_POLL_DELAY_MS __attribute__((swift_name("ESIGN_POLL_DELAY_MS")));
@property (readonly) int32_t OTP_DEFAULT_ATTEMPTS_REMAINING __attribute__((swift_name("OTP_DEFAULT_ATTEMPTS_REMAINING")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneratedSecurityPolicy")))
@interface SharedGeneratedSecurityPolicy : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)generatedSecurityPolicy __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGeneratedSecurityPolicy *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<NSString *> *HOOK_MAPS_SUBSTRINGS __attribute__((swift_name("HOOK_MAPS_SUBSTRINGS")));
@property (readonly) NSArray<NSString *> *HOOK_THREAD_SUBSTRINGS __attribute__((swift_name("HOOK_THREAD_SUBSTRINGS")));
@property (readonly) NSArray<NSString *> *ROOT_PACKAGES __attribute__((swift_name("ROOT_PACKAGES")));
@property (readonly) NSArray<NSString *> *SU_BINARY_PATHS __attribute__((swift_name("SU_BINARY_PATHS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeConfig")))
@interface SharedNativeConfig : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nativeConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNativeConfig *shared __attribute__((swift_name("shared")));
- (NSString *)getActiveBaseURL __attribute__((swift_name("getActiveBaseURL()")));
- (NSString *)getBaseURLESign __attribute__((swift_name("getBaseURLESign()")));
- (NSString *)getBaseURLSmsOtp __attribute__((swift_name("getBaseURLSmsOtp()")));
- (NSString *)getLicenseCodeESign __attribute__((swift_name("getLicenseCodeESign()")));
@property (readonly) NSSet<NSString *> *EKYC_JWT_PATHS __attribute__((swift_name("EKYC_JWT_PATHS")));
@property (readonly) NSString *SDK_INIT_PATH __attribute__((swift_name("SDK_INIT_PATH")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKEnv")))
@interface SharedSDKEnv : SharedKotlinEnum<SharedSDKEnv *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSDKEnvCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSDKEnv *test __attribute__((swift_name("test")));
@property (class, readonly) SharedSDKEnv *stag __attribute__((swift_name("stag")));
@property (class, readonly) SharedSDKEnv *uat __attribute__((swift_name("uat")));
@property (class, readonly) SharedSDKEnv *prod __attribute__((swift_name("prod")));
+ (SharedKotlinArray<SharedSDKEnv *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSDKEnv *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *wireValue __attribute__((swift_name("wireValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKEnv.Companion")))
@interface SharedSDKEnvCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKEnvCompanion *shared __attribute__((swift_name("shared")));
- (SharedSDKEnv *)fromStringValue:(NSString * _Nullable)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKFinOS")))
@interface SharedSDKFinOS : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKFinOS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKFinOS *shared __attribute__((swift_name("shared")));
- (NSString *)getOrCreateRequestId __attribute__((swift_name("getOrCreateRequestId()")));
- (NSString *)doInitDefaultTransactionId __attribute__((swift_name("doInitDefaultTransactionId()")));
- (void)resetConfig __attribute__((swift_name("resetConfig()")));
- (void)resetRequestId __attribute__((swift_name("resetRequestId()")));
- (void)resetSession __attribute__((swift_name("resetSession()")));
- (NSString *)resolveTransactionIdTransactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("resolveTransactionId(transactionId:)")));
- (void)setConfigNewConfig:(SharedEKYCConfigSDK *)newConfig __attribute__((swift_name("setConfig(newConfig:)")));
- (SharedSDKEnv *)setEnvEnv:(SharedSDKEnv *)env __attribute__((swift_name("setEnv(env:)")));
- (NSString *)setTransactionIdTransactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("setTransactionId(transactionId:)")));
- (void)updateConfigNewConfig:(SharedEKYCConfigSDK *)newConfig __attribute__((swift_name("updateConfig(newConfig:)")));
- (void)updateTransactionIdFromServerTransactionId:(NSString *)transactionId __attribute__((swift_name("updateTransactionIdFromServer(transactionId:)")));
@property (readonly) NSString *defaultTransactionId __attribute__((swift_name("defaultTransactionId")));
@property (readonly) SharedEKYCConfigSDK *ekycConfigSDK __attribute__((swift_name("ekycConfigSDK")));
@property BOOL enableSecurityRequest __attribute__((swift_name("enableSecurityRequest")));
@property BOOL isProd __attribute__((swift_name("isProd"))) __attribute__((deprecated("Use sdkEnv or setEnv(SDKEnv) so STAG and UAT are preserved")));
@property SharedSDKEnv *sdkEnv __attribute__((swift_name("sdkEnv")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlsPinConfig")))
@interface SharedTlsPinConfig : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tlsPinConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTlsPinConfig *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<NSString *> *allPins __attribute__((swift_name("allPins")));
@property (readonly) NSArray<NSString *> *enforcedHosts __attribute__((swift_name("enforcedHosts")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *pinsByHost __attribute__((swift_name("pinsByHost")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppIDType")))
@interface SharedAppIDType : SharedKotlinEnum<SharedAppIDType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAppIDType *finos __attribute__((swift_name("finos")));
+ (SharedKotlinArray<SharedAppIDType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedAppIDType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorEvent")))
@interface SharedEKYCErrorEvent : SharedKotlinEnum<SharedEKYCErrorEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKYCErrorEvent *sdkStartError __attribute__((swift_name("sdkStartError")));
@property (class, readonly) SharedEKYCErrorEvent *ocrError __attribute__((swift_name("ocrError")));
@property (class, readonly) SharedEKYCErrorEvent *livenessError __attribute__((swift_name("livenessError")));
@property (class, readonly) SharedEKYCErrorEvent *faceError __attribute__((swift_name("faceError")));
@property (class, readonly) SharedEKYCErrorEvent *nfcError __attribute__((swift_name("nfcError")));
@property (class, readonly) SharedEKYCErrorEvent *c06Error __attribute__((swift_name("c06Error")));
@property (class, readonly) SharedEKYCErrorEvent *sdkDetail __attribute__((swift_name("sdkDetail")));
@property (class, readonly) SharedEKYCErrorEvent *smsOtpError __attribute__((swift_name("smsOtpError")));
@property (class, readonly) SharedEKYCErrorEvent *esignError __attribute__((swift_name("esignError")));
@property (class, readonly) SharedEKYCErrorEvent *userCancel __attribute__((swift_name("userCancel")));
@property (class, readonly) SharedEKYCErrorEvent *deviceJailbroken __attribute__((swift_name("deviceJailbroken")));
@property (class, readonly) SharedEKYCErrorEvent *deviceHooked __attribute__((swift_name("deviceHooked")));
@property (class, readonly) SharedEKYCErrorEvent *sdkTampered __attribute__((swift_name("sdkTampered")));
@property (class, readonly) SharedEKYCErrorEvent *deviceSimulator __attribute__((swift_name("deviceSimulator")));
@property (class, readonly) SharedEKYCErrorEvent *deviceDebugging __attribute__((swift_name("deviceDebugging")));
+ (SharedKotlinArray<SharedEKYCErrorEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKYCErrorEvent *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("EKYCErrorResult")))
@interface SharedEKYCErrorResult : SharedBase
@property (class, readonly, getter=companion) SharedEKYCErrorResultCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getLocalizedMessageLanguageOverride:(NSString * _Nullable)languageOverride __attribute__((swift_name("getLocalizedMessage(languageOverride:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedEKYCErrorResult *)withContextTransactionId:(NSString * _Nullable)transactionId requestId:(NSString * _Nullable)requestId httpStatus:(SharedInt * _Nullable)httpStatus rawResponse:(NSString * _Nullable)rawResponse step:(NSString * _Nullable)step debugId:(NSString * _Nullable)debugId __attribute__((swift_name("withContext(transactionId:requestId:httpStatus:rawResponse:step:debugId:)")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable debugId __attribute__((swift_name("debugId")));
@property (readonly) NSString *enMessage __attribute__((swift_name("enMessage")));
@property (readonly) SharedInt * _Nullable httpStatus __attribute__((swift_name("httpStatus")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable rawResponse __attribute__((swift_name("rawResponse")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) NSString * _Nullable step __attribute__((swift_name("step")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@property (readonly) NSString *viMessage __attribute__((swift_name("viMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_CONFIG_MISSING")))
@interface SharedEKYCErrorResultBRIDGE_CONFIG_MISSING : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_CONFIG_MISSING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_CONFIG_MISSING *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_FILE_NOT_FOUND")))
@interface SharedEKYCErrorResultBRIDGE_FILE_NOT_FOUND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_FILE_NOT_FOUND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_FILE_NOT_FOUND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_INVALID_PARAMS")))
@interface SharedEKYCErrorResultBRIDGE_INVALID_PARAMS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_INVALID_PARAMS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_INVALID_PARAMS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_INVALID_SERIAL")))
@interface SharedEKYCErrorResultBRIDGE_INVALID_SERIAL : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_INVALID_SERIAL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_INVALID_SERIAL *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_NO_ACTIVITY")))
@interface SharedEKYCErrorResultBRIDGE_NO_ACTIVITY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_NO_ACTIVITY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_NO_ACTIVITY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_NO_VIEW_CONTROLLER")))
@interface SharedEKYCErrorResultBRIDGE_NO_VIEW_CONTROLLER : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_NO_VIEW_CONTROLLER __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_NO_VIEW_CONTROLLER *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.BRIDGE_PARSE_ERROR")))
@interface SharedEKYCErrorResultBRIDGE_PARSE_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bRIDGE_PARSE_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultBRIDGE_PARSE_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.C06_ERROR")))
@interface SharedEKYCErrorResultC06_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)c06_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultC06_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.CONFIG_NULL")))
@interface SharedEKYCErrorResultCONFIG_NULL : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONFIG_NULL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultCONFIG_NULL *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.Companion")))
@interface SharedEKYCErrorResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<SharedEKYCErrorResult *> *)all __attribute__((swift_name("all()")));
- (SharedEKYCErrorResult *)createCustomCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("createCustom(code:message:)")));
- (SharedEKYCErrorResult * _Nullable)fromCodeCode:(NSString *)code __attribute__((swift_name("fromCode(code:)")));
- (SharedEKYCErrorResult *)getErrorResultFromDetailsDetails:(NSArray<id> * _Nullable)details __attribute__((swift_name("getErrorResultFromDetails(details:)")));
- (NSString * _Nullable)messageForCodeCode:(NSString *)code languageOverride:(NSString * _Nullable)languageOverride __attribute__((swift_name("messageForCode(code:languageOverride:)")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ContextualError")))
@interface SharedEKYCErrorResultContextualError : SharedEKYCErrorResult
- (instancetype)initWithCode:(NSString *)code viMessage:(NSString *)viMessage enMessage:(NSString *)enMessage transactionId:(NSString * _Nullable)transactionId requestId:(NSString * _Nullable)requestId httpStatus:(SharedInt * _Nullable)httpStatus rawResponse:(NSString * _Nullable)rawResponse step:(NSString * _Nullable)step debugId:(NSString * _Nullable)debugId __attribute__((swift_name("init(code:viMessage:enMessage:transactionId:requestId:httpStatus:rawResponse:step:debugId:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.CustomError")))
@interface SharedEKYCErrorResultCustomError : SharedEKYCErrorResult
- (instancetype)initWithCustomCode:(NSString *)customCode customMessage:(NSString *)customMessage __attribute__((swift_name("init(customCode:customMessage:)"))) __attribute__((objc_designated_initializer));
- (SharedEKYCErrorResultCustomError *)doCopyCustomCode:(NSString *)customCode customMessage:(NSString *)customMessage __attribute__((swift_name("doCopy(customCode:customMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *customCode __attribute__((swift_name("customCode")));
@property (readonly) NSString *customMessage __attribute__((swift_name("customMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.DEVICE_DEBUGGING")))
@interface SharedEKYCErrorResultDEVICE_DEBUGGING : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dEVICE_DEBUGGING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultDEVICE_DEBUGGING *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.DEVICE_HOOKED")))
@interface SharedEKYCErrorResultDEVICE_HOOKED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dEVICE_HOOKED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultDEVICE_HOOKED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.DEVICE_JAILBROKEN")))
@interface SharedEKYCErrorResultDEVICE_JAILBROKEN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dEVICE_JAILBROKEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultDEVICE_JAILBROKEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.DEVICE_SIMULATOR")))
@interface SharedEKYCErrorResultDEVICE_SIMULATOR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dEVICE_SIMULATOR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultDEVICE_SIMULATOR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ERROR_SDK_KEY")))
@interface SharedEKYCErrorResultERROR_SDK_KEY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eRROR_SDK_KEY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultERROR_SDK_KEY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ERROR_UNKNOWN")))
@interface SharedEKYCErrorResultERROR_UNKNOWN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eRROR_UNKNOWN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultERROR_UNKNOWN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_APP_LIMITED")))
@interface SharedEKYCErrorResultESIGN_APP_LIMITED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_APP_LIMITED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_APP_LIMITED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_AUTH_EXISTS")))
@interface SharedEKYCErrorResultESIGN_AUTH_EXISTS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_AUTH_EXISTS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_AUTH_EXISTS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_AUTH_REQUEST_EXISTS")))
@interface SharedEKYCErrorResultESIGN_AUTH_REQUEST_EXISTS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_AUTH_REQUEST_EXISTS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_AUTH_REQUEST_EXISTS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_DEVICE_ALREADY_INIT")))
@interface SharedEKYCErrorResultESIGN_DEVICE_ALREADY_INIT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_DEVICE_ALREADY_INIT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_DEVICE_ALREADY_INIT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_DEVICE_NOT_INIT")))
@interface SharedEKYCErrorResultESIGN_DEVICE_NOT_INIT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_DEVICE_NOT_INIT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_DEVICE_NOT_INIT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_ERROR_UNKNOWN")))
@interface SharedEKYCErrorResultESIGN_ERROR_UNKNOWN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_ERROR_UNKNOWN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_ERROR_UNKNOWN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_CERT_FOR_AUTH")))
@interface SharedEKYCErrorResultESIGN_INVALID_CERT_FOR_AUTH : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_CERT_FOR_AUTH __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_CERT_FOR_AUTH *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_CONTEXT")))
@interface SharedEKYCErrorResultESIGN_INVALID_CONTEXT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_CONTEXT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_CONTEXT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_EXPIRED_DATE_FORMAT")))
@interface SharedEKYCErrorResultESIGN_INVALID_EXPIRED_DATE_FORMAT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_EXPIRED_DATE_FORMAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_EXPIRED_DATE_FORMAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_LICENSE")))
@interface SharedEKYCErrorResultESIGN_INVALID_LICENSE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_LICENSE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_LICENSE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_LICENSE_CODE")))
@interface SharedEKYCErrorResultESIGN_INVALID_LICENSE_CODE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_LICENSE_CODE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_LICENSE_CODE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_LICENSE_CONTENT")))
@interface SharedEKYCErrorResultESIGN_INVALID_LICENSE_CONTENT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_LICENSE_CONTENT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_LICENSE_CONTENT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_PAGE_PARAMS")))
@interface SharedEKYCErrorResultESIGN_INVALID_PAGE_PARAMS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_PAGE_PARAMS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_PAGE_PARAMS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_PIN_CODE")))
@interface SharedEKYCErrorResultESIGN_INVALID_PIN_CODE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_PIN_CODE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_PIN_CODE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_PIN_FORMAT")))
@interface SharedEKYCErrorResultESIGN_INVALID_PIN_FORMAT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_PIN_FORMAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_PIN_FORMAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_QUANTITY")))
@interface SharedEKYCErrorResultESIGN_INVALID_QUANTITY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_QUANTITY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_QUANTITY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_RECOVERY_CODE")))
@interface SharedEKYCErrorResultESIGN_INVALID_RECOVERY_CODE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_RECOVERY_CODE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_RECOVERY_CODE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_RECOVERY_FORMAT")))
@interface SharedEKYCErrorResultESIGN_INVALID_RECOVERY_FORMAT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_RECOVERY_FORMAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_RECOVERY_FORMAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_RECOVERY_OR_PIN")))
@interface SharedEKYCErrorResultESIGN_INVALID_RECOVERY_OR_PIN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_RECOVERY_OR_PIN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_RECOVERY_OR_PIN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_REGISTER_DATE_FORMAT")))
@interface SharedEKYCErrorResultESIGN_INVALID_REGISTER_DATE_FORMAT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_REGISTER_DATE_FORMAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_REGISTER_DATE_FORMAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_REQUEST_JSON")))
@interface SharedEKYCErrorResultESIGN_INVALID_REQUEST_JSON : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_REQUEST_JSON __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_REQUEST_JSON *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_SIGN_COUNT_OR_TIME")))
@interface SharedEKYCErrorResultESIGN_INVALID_SIGN_COUNT_OR_TIME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_SIGN_COUNT_OR_TIME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_SIGN_COUNT_OR_TIME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_TIME")))
@interface SharedEKYCErrorResultESIGN_INVALID_TIME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_TIME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_TIME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_INVALID_USER_ACCOUNT")))
@interface SharedEKYCErrorResultESIGN_INVALID_USER_ACCOUNT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_INVALID_USER_ACCOUNT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_INVALID_USER_ACCOUNT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_ACCESS_TOKEN")))
@interface SharedEKYCErrorResultESIGN_MISSING_ACCESS_TOKEN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_ACCESS_TOKEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_ACCESS_TOKEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_AUTHORIZE_REQUEST_ID")))
@interface SharedEKYCErrorResultESIGN_MISSING_AUTHORIZE_REQUEST_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_AUTHORIZE_REQUEST_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_AUTHORIZE_REQUEST_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_AUTH_DATA")))
@interface SharedEKYCErrorResultESIGN_MISSING_AUTH_DATA : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_AUTH_DATA __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_AUTH_DATA *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_AUTH_ID")))
@interface SharedEKYCErrorResultESIGN_MISSING_AUTH_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_AUTH_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_AUTH_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_CCCD")))
@interface SharedEKYCErrorResultESIGN_MISSING_CCCD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_CCCD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_CCCD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_CONFIRMATION_DOC")))
@interface SharedEKYCErrorResultESIGN_MISSING_CONFIRMATION_DOC : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_CONFIRMATION_DOC __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_CONFIRMATION_DOC *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_DEVICE_ID")))
@interface SharedEKYCErrorResultESIGN_MISSING_DEVICE_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_DEVICE_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_DEVICE_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_EMAIL_OR_PHONE")))
@interface SharedEKYCErrorResultESIGN_MISSING_EMAIL_OR_PHONE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_EMAIL_OR_PHONE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_EMAIL_OR_PHONE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_ACCEPT_TIME")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_ACCEPT_TIME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_ACCEPT_TIME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_ACCEPT_TIME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_ADDRESS")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_ADDRESS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_ADDRESS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_ADDRESS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_DATA")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_DATA : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_DATA __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_DATA *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_DEVICE")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_DEVICE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_DEVICE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_DEVICE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_DOCUMENT_NAME")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_DOCUMENT_NAME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_DOCUMENT_NAME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_DOCUMENT_NAME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_EXPIRED_DATE")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_EXPIRED_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_EXPIRED_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_EXPIRED_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_IDENTITY")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_IDENTITY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_IDENTITY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_IDENTITY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_NAME")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_NAME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_NAME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_NAME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_POLICY_STATUS")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_POLICY_STATUS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_POLICY_STATUS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_POLICY_STATUS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_REGISTER_DATE")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_REGISTER_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_REGISTER_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_REGISTER_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_SERIAL_TOKEN")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_SERIAL_TOKEN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_SERIAL_TOKEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_SERIAL_TOKEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_SESSION_ID")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_SESSION_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_SESSION_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_SESSION_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_SIGNATURE")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_SIGNATURE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_SIGNATURE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_SIGNATURE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_SOD")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_SOD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_SOD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_SOD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_FIELD_USERNAME")))
@interface SharedEKYCErrorResultESIGN_MISSING_FIELD_USERNAME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_FIELD_USERNAME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_FIELD_USERNAME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_IDENTITY")))
@interface SharedEKYCErrorResultESIGN_MISSING_IDENTITY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_IDENTITY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_IDENTITY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_NAME")))
@interface SharedEKYCErrorResultESIGN_MISSING_NAME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_NAME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_NAME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_PIN_CODE")))
@interface SharedEKYCErrorResultESIGN_MISSING_PIN_CODE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_PIN_CODE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_PIN_CODE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_POLICY_AGREEMENT")))
@interface SharedEKYCErrorResultESIGN_MISSING_POLICY_AGREEMENT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_POLICY_AGREEMENT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_POLICY_AGREEMENT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_REQUEST_ID")))
@interface SharedEKYCErrorResultESIGN_MISSING_REQUEST_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_REQUEST_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_REQUEST_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_REQUEST_JSON")))
@interface SharedEKYCErrorResultESIGN_MISSING_REQUEST_JSON : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_REQUEST_JSON __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_REQUEST_JSON *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_SERIAL")))
@interface SharedEKYCErrorResultESIGN_MISSING_SERIAL : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_SERIAL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_SERIAL *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_SIGNING_CONTENTS")))
@interface SharedEKYCErrorResultESIGN_MISSING_SIGNING_CONTENTS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_SIGNING_CONTENTS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_SIGNING_CONTENTS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_SIGN_POSITIONS")))
@interface SharedEKYCErrorResultESIGN_MISSING_SIGN_POSITIONS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_SIGN_POSITIONS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_SIGN_POSITIONS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_SIGN_POSITION_LOCATION")))
@interface SharedEKYCErrorResultESIGN_MISSING_SIGN_POSITION_LOCATION : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_SIGN_POSITION_LOCATION __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_SIGN_POSITION_LOCATION *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_STATUS")))
@interface SharedEKYCErrorResultESIGN_MISSING_STATUS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_STATUS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_STATUS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_TOKEN")))
@interface SharedEKYCErrorResultESIGN_MISSING_TOKEN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_TOKEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_TOKEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_TOKEN_INFO")))
@interface SharedEKYCErrorResultESIGN_MISSING_TOKEN_INFO : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_TOKEN_INFO __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_TOKEN_INFO *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_USER_INFO")))
@interface SharedEKYCErrorResultESIGN_MISSING_USER_INFO : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_USER_INFO __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_USER_INFO *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_MISSING_USER_PIN")))
@interface SharedEKYCErrorResultESIGN_MISSING_USER_PIN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_MISSING_USER_PIN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_MISSING_USER_PIN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_NO_SESSION_ID")))
@interface SharedEKYCErrorResultESIGN_NO_SESSION_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_NO_SESSION_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_NO_SESSION_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_SESSION_INVALID")))
@interface SharedEKYCErrorResultESIGN_SESSION_INVALID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_SESSION_INVALID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_SESSION_INVALID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_SESSION_INVALID_LIST_CERT")))
@interface SharedEKYCErrorResultESIGN_SESSION_INVALID_LIST_CERT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_SESSION_INVALID_LIST_CERT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_SESSION_INVALID_LIST_CERT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.ESIGN_SESSION_INVALID_REGISTER")))
@interface SharedEKYCErrorResultESIGN_SESSION_INVALID_REGISTER : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSIGN_SESSION_INVALID_REGISTER __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultESIGN_SESSION_INVALID_REGISTER *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.EYES_CLOSED_IN_SELFIE")))
@interface SharedEKYCErrorResultEYES_CLOSED_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eYES_CLOSED_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultEYES_CLOSED_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.EYEWEAR_DETECTED_IN_SELFIE")))
@interface SharedEKYCErrorResultEYEWEAR_DETECTED_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eYEWEAR_DETECTED_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultEYEWEAR_DETECTED_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.FACE_ERROR")))
@interface SharedEKYCErrorResultFACE_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fACE_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultFACE_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.FACE_HAT_ERROR")))
@interface SharedEKYCErrorResultFACE_HAT_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fACE_HAT_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultFACE_HAT_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.FACE_IS_BLURRED")))
@interface SharedEKYCErrorResultFACE_IS_BLURRED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fACE_IS_BLURRED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultFACE_IS_BLURRED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.FACE_OCCLUDED_IN_SELFIE")))
@interface SharedEKYCErrorResultFACE_OCCLUDED_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fACE_OCCLUDED_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultFACE_OCCLUDED_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.FETCH_HISTORY_ERROR")))
@interface SharedEKYCErrorResultFETCH_HISTORY_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fETCH_HISTORY_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultFETCH_HISTORY_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.HEAD_IS_TURNED_IN_SELFIE")))
@interface SharedEKYCErrorResultHEAD_IS_TURNED_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hEAD_IS_TURNED_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultHEAD_IS_TURNED_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.LIVENESS_ERROR")))
@interface SharedEKYCErrorResultLIVENESS_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIVENESS_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultLIVENESS_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.LIVENESS_FAIL")))
@interface SharedEKYCErrorResultLIVENESS_FAIL : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIVENESS_FAIL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultLIVENESS_FAIL *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.MASK_PRESENT_IN_SELFIE")))
@interface SharedEKYCErrorResultMASK_PRESENT_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mASK_PRESENT_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultMASK_PRESENT_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.MULTIPLE_FACES_IN_SELFIE")))
@interface SharedEKYCErrorResultMULTIPLE_FACES_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mULTIPLE_FACES_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultMULTIPLE_FACES_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_CHIP_AUTH_FAILED")))
@interface SharedEKYCErrorResultNFC_CHIP_AUTH_FAILED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_CHIP_AUTH_FAILED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_CHIP_AUTH_FAILED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_CONNECTION_LOST")))
@interface SharedEKYCErrorResultNFC_CONNECTION_LOST : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_CONNECTION_LOST __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_CONNECTION_LOST *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_INVALID_MRZ_KEY")))
@interface SharedEKYCErrorResultNFC_INVALID_MRZ_KEY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_INVALID_MRZ_KEY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_INVALID_MRZ_KEY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_IO_ERROR")))
@interface SharedEKYCErrorResultNFC_IO_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_IO_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_IO_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_MUTUAL_AUTH_FAILED")))
@interface SharedEKYCErrorResultNFC_MUTUAL_AUTH_FAILED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_MUTUAL_AUTH_FAILED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_MUTUAL_AUTH_FAILED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_UNKNOWN_ERROR")))
@interface SharedEKYCErrorResultNFC_UNKNOWN_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_UNKNOWN_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_UNKNOWN_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NFC_USER_CANCEL")))
@interface SharedEKYCErrorResultNFC_USER_CANCEL : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nFC_USER_CANCEL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNFC_USER_CANCEL *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.NUDITY_DETECTED_IN_SELFIE")))
@interface SharedEKYCErrorResultNUDITY_DETECTED_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nUDITY_DETECTED_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultNUDITY_DETECTED_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_BLURRY_ID_CARD")))
@interface SharedEKYCErrorResultOCR_BLURRY_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_BLURRY_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_BLURRY_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_BIRTH_YEAR")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_BIRTH_YEAR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_BIRTH_YEAR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_BIRTH_YEAR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_EXPIRY_DATE")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_EXPIRY_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_EXPIRY_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_EXPIRY_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_GENDER")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_GENDER : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_GENDER __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_GENDER *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_HOMETOWN")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_HOMETOWN : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_HOMETOWN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_HOMETOWN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_ID_NUMBER")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_ID_NUMBER : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_ID_NUMBER __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_ID_NUMBER *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_ISSUE_DATE")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_ISSUE_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_ISSUE_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_ISSUE_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_ISSUE_PLACE")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_ISSUE_PLACE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_ISSUE_PLACE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_ISSUE_PLACE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_NAME")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_NAME : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_NAME __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_NAME *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_GET_RESIDENCE")))
@interface SharedEKYCErrorResultOCR_CANNOT_GET_RESIDENCE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_GET_RESIDENCE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_GET_RESIDENCE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CANNOT_RECOGNIZE_PORTRAIT")))
@interface SharedEKYCErrorResultOCR_CANNOT_RECOGNIZE_PORTRAIT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CANNOT_RECOGNIZE_PORTRAIT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CANNOT_RECOGNIZE_PORTRAIT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_CUT_CORNER_ID_CARD")))
@interface SharedEKYCErrorResultOCR_CUT_CORNER_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_CUT_CORNER_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_CUT_CORNER_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_ERROR")))
@interface SharedEKYCErrorResultOCR_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_BIRTH_DATE_DETECTED_CMND")))
@interface SharedEKYCErrorResultOCR_FAKE_BIRTH_DATE_DETECTED_CMND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_BIRTH_DATE_DETECTED_CMND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_BIRTH_DATE_DETECTED_CMND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_CHARACTERS_DETECTED_1")))
@interface SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_1 : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_CHARACTERS_DETECTED_1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_1 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_CHARACTERS_DETECTED_2")))
@interface SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_2 : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_CHARACTERS_DETECTED_2 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_2 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_CHARACTERS_DETECTED_CMND")))
@interface SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_CMND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_CHARACTERS_DETECTED_CMND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_CHARACTERS_DETECTED_CMND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_MRZ")))
@interface SharedEKYCErrorResultOCR_FAKE_MRZ : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_MRZ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_MRZ *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_PORTRAIT_DETECTED")))
@interface SharedEKYCErrorResultOCR_FAKE_PORTRAIT_DETECTED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_PORTRAIT_DETECTED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_PORTRAIT_DETECTED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FAKE_PORTRAIT_DETECTED_CMND")))
@interface SharedEKYCErrorResultOCR_FAKE_PORTRAIT_DETECTED_CMND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FAKE_PORTRAIT_DETECTED_CMND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FAKE_PORTRAIT_DETECTED_CMND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_FONT_BACK_NOT_MATCH")))
@interface SharedEKYCErrorResultOCR_FONT_BACK_NOT_MATCH : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_FONT_BACK_NOT_MATCH __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_FONT_BACK_NOT_MATCH *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_GLARE_ID_CARD")))
@interface SharedEKYCErrorResultOCR_GLARE_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_GLARE_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_GLARE_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_ID_CARD_EXPIRED")))
@interface SharedEKYCErrorResultOCR_ID_CARD_EXPIRED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_ID_CARD_EXPIRED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_ID_CARD_EXPIRED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_ID_CARD_FROM_OTHER_DEVICE")))
@interface SharedEKYCErrorResultOCR_ID_CARD_FROM_OTHER_DEVICE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_ID_CARD_FROM_OTHER_DEVICE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_ID_CARD_FROM_OTHER_DEVICE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_ID_INFO_MISMATCH")))
@interface SharedEKYCErrorResultOCR_ID_INFO_MISMATCH : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_ID_INFO_MISMATCH __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_ID_INFO_MISMATCH *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_INVALID_GENDER_CODE")))
@interface SharedEKYCErrorResultOCR_INVALID_GENDER_CODE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_INVALID_GENDER_CODE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_INVALID_GENDER_CODE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_INVALID_ID_CARD")))
@interface SharedEKYCErrorResultOCR_INVALID_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_INVALID_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_INVALID_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_MISSING_ID_CARD_PART")))
@interface SharedEKYCErrorResultOCR_MISSING_ID_CARD_PART : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_MISSING_ID_CARD_PART __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_MISSING_ID_CARD_PART *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_MODIFIED_BIRTH_DATE_DETECTED_CMND")))
@interface SharedEKYCErrorResultOCR_MODIFIED_BIRTH_DATE_DETECTED_CMND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_MODIFIED_BIRTH_DATE_DETECTED_CMND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_MODIFIED_BIRTH_DATE_DETECTED_CMND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_MODIFIED_SYMBOL_DETECTED_CMND")))
@interface SharedEKYCErrorResultOCR_MODIFIED_SYMBOL_DETECTED_CMND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_MODIFIED_SYMBOL_DETECTED_CMND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_MODIFIED_SYMBOL_DETECTED_CMND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_NOT_ORIGINAL_ID_CARD")))
@interface SharedEKYCErrorResultOCR_NOT_ORIGINAL_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_NOT_ORIGINAL_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_NOT_ORIGINAL_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_PHOTOCOPY_ID_CARD")))
@interface SharedEKYCErrorResultOCR_PHOTOCOPY_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_PHOTOCOPY_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_PHOTOCOPY_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_UNKNOWN_ID_NUMBER_LENGTH")))
@interface SharedEKYCErrorResultOCR_UNKNOWN_ID_NUMBER_LENGTH : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_UNKNOWN_ID_NUMBER_LENGTH __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_UNKNOWN_ID_NUMBER_LENGTH *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_UNRECOGNIZED_ID_CARD")))
@interface SharedEKYCErrorResultOCR_UNRECOGNIZED_ID_CARD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_UNRECOGNIZED_ID_CARD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_UNRECOGNIZED_ID_CARD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_USE_NEW_ID_DOCUMENT_1")))
@interface SharedEKYCErrorResultOCR_USE_NEW_ID_DOCUMENT_1 : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_USE_NEW_ID_DOCUMENT_1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_USE_NEW_ID_DOCUMENT_1 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_USE_NEW_ID_DOCUMENT_2")))
@interface SharedEKYCErrorResultOCR_USE_NEW_ID_DOCUMENT_2 : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_USE_NEW_ID_DOCUMENT_2 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_USE_NEW_ID_DOCUMENT_2 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.OCR_WRONG_ID_CARD_SIDE")))
@interface SharedEKYCErrorResultOCR_WRONG_ID_CARD_SIDE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oCR_WRONG_ID_CARD_SIDE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultOCR_WRONG_ID_CARD_SIDE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.QRCODE_ERROR")))
@interface SharedEKYCErrorResultQRCODE_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)qRCODE_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultQRCODE_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.READING_GLASSES_DETECTED_IN_SELFIE")))
@interface SharedEKYCErrorResultREADING_GLASSES_DETECTED_IN_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rEADING_GLASSES_DETECTED_IN_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultREADING_GLASSES_DETECTED_IN_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SCAN_NFC_CHECK")))
@interface SharedEKYCErrorResultSCAN_NFC_CHECK : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sCAN_NFC_CHECK __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSCAN_NFC_CHECK *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SCAN_NFC_ENABLE")))
@interface SharedEKYCErrorResultSCAN_NFC_ENABLE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sCAN_NFC_ENABLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSCAN_NFC_ENABLE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SCAN_NFC_ERROR")))
@interface SharedEKYCErrorResultSCAN_NFC_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sCAN_NFC_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSCAN_NFC_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_INVALID_LANGUAGE")))
@interface SharedEKYCErrorResultSDK_INVALID_LANGUAGE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_INVALID_LANGUAGE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_INVALID_LANGUAGE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_ACTIVITY")))
@interface SharedEKYCErrorResultSDK_MISS_ACTIVITY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_ACTIVITY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_ACTIVITY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_APP_KEY_C06")))
@interface SharedEKYCErrorResultSDK_MISS_APP_KEY_C06 : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_APP_KEY_C06 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_APP_KEY_C06 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_APP_KEY_FACE_SERVICE")))
@interface SharedEKYCErrorResultSDK_MISS_APP_KEY_FACE_SERVICE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_APP_KEY_FACE_SERVICE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_APP_KEY_FACE_SERVICE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_APP_KEY_LIVENESS")))
@interface SharedEKYCErrorResultSDK_MISS_APP_KEY_LIVENESS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_APP_KEY_LIVENESS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_APP_KEY_LIVENESS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_APP_KEY_NFC")))
@interface SharedEKYCErrorResultSDK_MISS_APP_KEY_NFC : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_APP_KEY_NFC __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_APP_KEY_NFC *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_APP_KEY_OCR")))
@interface SharedEKYCErrorResultSDK_MISS_APP_KEY_OCR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_APP_KEY_OCR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_APP_KEY_OCR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_C06")))
@interface SharedEKYCErrorResultSDK_MISS_C06 : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_C06 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_C06 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_FACE_SERVICE")))
@interface SharedEKYCErrorResultSDK_MISS_FACE_SERVICE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_FACE_SERVICE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_FACE_SERVICE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_IMAGE")))
@interface SharedEKYCErrorResultSDK_MISS_IMAGE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_IMAGE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_IMAGE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_KEY")))
@interface SharedEKYCErrorResultSDK_MISS_KEY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_KEY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_KEY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_LIVENESS")))
@interface SharedEKYCErrorResultSDK_MISS_LIVENESS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_LIVENESS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_LIVENESS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_NFC")))
@interface SharedEKYCErrorResultSDK_MISS_NFC : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_NFC __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_NFC *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_MISS_OCR")))
@interface SharedEKYCErrorResultSDK_MISS_OCR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_MISS_OCR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_MISS_OCR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_NETWORK_ERROR")))
@interface SharedEKYCErrorResultSDK_NETWORK_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_NETWORK_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_NETWORK_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_NETWORK_TIMEOUT")))
@interface SharedEKYCErrorResultSDK_NETWORK_TIMEOUT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_NETWORK_TIMEOUT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_NETWORK_TIMEOUT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_NOT_INITIALIZED")))
@interface SharedEKYCErrorResultSDK_NOT_INITIALIZED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_NOT_INITIALIZED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_NOT_INITIALIZED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_NO_DATA")))
@interface SharedEKYCErrorResultSDK_NO_DATA : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_NO_DATA __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_NO_DATA *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_START_ERROR")))
@interface SharedEKYCErrorResultSDK_START_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_START_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_START_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_START_FLOW_ERROR")))
@interface SharedEKYCErrorResultSDK_START_FLOW_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_START_FLOW_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_START_FLOW_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_TAMPERED")))
@interface SharedEKYCErrorResultSDK_TAMPERED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_TAMPERED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_TAMPERED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_TLS_PINNING_FAILED")))
@interface SharedEKYCErrorResultSDK_TLS_PINNING_FAILED : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_TLS_PINNING_FAILED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_TLS_PINNING_FAILED *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SDK_TYPE_KEY")))
@interface SharedEKYCErrorResultSDK_TYPE_KEY : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDK_TYPE_KEY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSDK_TYPE_KEY *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_ERROR")))
@interface SharedEKYCErrorResultSMS_OTP_ERROR : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_ERROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_ERROR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_INVALID_PHONE")))
@interface SharedEKYCErrorResultSMS_OTP_INVALID_PHONE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_INVALID_PHONE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_INVALID_PHONE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_MAX_ATTEMPTS")))
@interface SharedEKYCErrorResultSMS_OTP_MAX_ATTEMPTS : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_MAX_ATTEMPTS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_MAX_ATTEMPTS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_MISSING_OTP_CODE")))
@interface SharedEKYCErrorResultSMS_OTP_MISSING_OTP_CODE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_MISSING_OTP_CODE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_MISSING_OTP_CODE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_MISSING_PHONE")))
@interface SharedEKYCErrorResultSMS_OTP_MISSING_PHONE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_MISSING_PHONE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_MISSING_PHONE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_MISSING_REFERENCE_ID")))
@interface SharedEKYCErrorResultSMS_OTP_MISSING_REFERENCE_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_MISSING_REFERENCE_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_MISSING_REFERENCE_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_NOT_FOUND")))
@interface SharedEKYCErrorResultSMS_OTP_NOT_FOUND : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_NOT_FOUND __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_NOT_FOUND *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.SMS_OTP_RATE_LIMIT")))
@interface SharedEKYCErrorResultSMS_OTP_RATE_LIMIT : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sMS_OTP_RATE_LIMIT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultSMS_OTP_RATE_LIMIT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.USER_CANCEL")))
@interface SharedEKYCErrorResultUSER_CANCEL : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)uSER_CANCEL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultUSER_CANCEL *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_INVALID_ENV")))
@interface SharedEKYCErrorResultVALIDATION_INVALID_ENV : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_INVALID_ENV __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_INVALID_ENV *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_INVALID_SIDE")))
@interface SharedEKYCErrorResultVALIDATION_INVALID_SIDE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_INVALID_SIDE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_INVALID_SIDE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_BIRTH_DATE")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_BIRTH_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_BIRTH_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_BIRTH_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_CARD_NUMBER")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_CARD_NUMBER : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_CARD_NUMBER __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_CARD_NUMBER *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_DOCUMENT_NUMBER")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_DOCUMENT_NUMBER : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_DOCUMENT_NUMBER __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_DOCUMENT_NUMBER *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_EXPIRED_DATE")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_EXPIRED_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_EXPIRED_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_EXPIRED_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_EXPIRE_DATE")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_EXPIRE_DATE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_EXPIRE_DATE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_EXPIRE_DATE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_ID_IMAGE")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_ID_IMAGE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_ID_IMAGE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_ID_IMAGE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_IMAGE_PATH")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_IMAGE_PATH : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_IMAGE_PATH __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_IMAGE_PATH *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_LOCATION")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_LOCATION : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_LOCATION __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_LOCATION *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_PHONE")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_PHONE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_PHONE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_PHONE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_REFERENCE_ID")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_REFERENCE_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_REFERENCE_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_REFERENCE_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_REQUEST_ID")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_REQUEST_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_REQUEST_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_REQUEST_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_SELFIE")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_SELFIE : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_SELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_SELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_SOD")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_SOD : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_SOD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_SOD *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCErrorResult.VALIDATION_MISSING_TRANSACTION_ID")))
@interface SharedEKYCErrorResultVALIDATION_MISSING_TRANSACTION_ID : SharedEKYCErrorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vALIDATION_MISSING_TRANSACTION_ID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCErrorResultVALIDATION_MISSING_TRANSACTION_ID *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCEvent")))
@interface SharedEKYCEvent : SharedKotlinEnum<SharedEKYCEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKYCEvent *sdkStartSuccess __attribute__((swift_name("sdkStartSuccess")));
@property (class, readonly) SharedEKYCEvent *sdkEndSuccess __attribute__((swift_name("sdkEndSuccess")));
@property (class, readonly) SharedEKYCEvent *scanNfcStart __attribute__((swift_name("scanNfcStart")));
@property (class, readonly) SharedEKYCEvent *scanNfcSuccess __attribute__((swift_name("scanNfcSuccess")));
@property (class, readonly) SharedEKYCEvent *c06Success __attribute__((swift_name("c06Success")));
@property (class, readonly) SharedEKYCEvent *livenessSuccess __attribute__((swift_name("livenessSuccess")));
@property (class, readonly) SharedEKYCEvent *faceProgress __attribute__((swift_name("faceProgress")));
@property (class, readonly) SharedEKYCEvent *faceSuccess __attribute__((swift_name("faceSuccess")));
@property (class, readonly) SharedEKYCEvent *ocrSuccess __attribute__((swift_name("ocrSuccess")));
@property (class, readonly) SharedEKYCEvent *qrcodeSuccess __attribute__((swift_name("qrcodeSuccess")));
@property (class, readonly) SharedEKYCEvent *fetchLatestTransactionSuccess __attribute__((swift_name("fetchLatestTransactionSuccess")));
@property (class, readonly) SharedEKYCEvent *smsOtpSendSuccess __attribute__((swift_name("smsOtpSendSuccess")));
@property (class, readonly) SharedEKYCEvent *smsOtpVerifySuccess __attribute__((swift_name("smsOtpVerifySuccess")));
@property (class, readonly) SharedEKYCEvent *smsOtpResendSuccess __attribute__((swift_name("smsOtpResendSuccess")));
@property (class, readonly) SharedEKYCEvent *esignSuccess __attribute__((swift_name("esignSuccess")));
@property (class, readonly) SharedEKYCEvent *logSuccess __attribute__((swift_name("logSuccess")));
+ (SharedKotlinArray<SharedEKYCEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKYCEvent *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("EKYCSummaryDetail")))
@protocol SharedEKYCSummaryDetail
@required
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycException")))
@interface SharedEkycException : SharedKotlinException
- (instancetype)initWithError:(SharedEKYCErrorResult *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) SharedEKYCErrorResult *error __attribute__((swift_name("error")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=finos/sdk/core/define/EkycFlowSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycFlow")))
@interface SharedEkycFlow : SharedKotlinEnum<SharedEkycFlow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedEkycFlowCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedEkycFlow *nfc __attribute__((swift_name("nfc")));
@property (class, readonly) SharedEkycFlow *ocr __attribute__((swift_name("ocr")));
@property (class, readonly) SharedEkycFlow *liveness __attribute__((swift_name("liveness")));
@property (class, readonly) SharedEkycFlow *qrcode __attribute__((swift_name("qrcode")));
@property (class, readonly) SharedEkycFlow *c06 __attribute__((swift_name("c06")));
@property (class, readonly) SharedEkycFlow *faceservice __attribute__((swift_name("faceservice")));
@property (class, readonly) SharedEkycFlow *livenesspassive __attribute__((swift_name("livenesspassive")));
+ (SharedKotlinArray<SharedEkycFlow *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEkycFlow *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycFlow.Companion")))
@interface SharedEkycFlowCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEkycFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycFlowSerializer")))
@interface SharedEkycFlowSerializer : SharedBase <SharedKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ekycFlowSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEkycFlowSerializer *shared __attribute__((swift_name("shared")));
- (SharedEkycFlow *)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(SharedEkycFlow *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceStateType")))
@interface SharedFaceStateType : SharedKotlinEnum<SharedFaceStateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedFaceStateTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedFaceStateType *noFace __attribute__((swift_name("noFace")));
@property (class, readonly) SharedFaceStateType *smile __attribute__((swift_name("smile")));
@property (class, readonly) SharedFaceStateType *up __attribute__((swift_name("up")));
@property (class, readonly) SharedFaceStateType *down __attribute__((swift_name("down")));
@property (class, readonly) SharedFaceStateType *left __attribute__((swift_name("left")));
@property (class, readonly) SharedFaceStateType *right __attribute__((swift_name("right")));
@property (class, readonly) SharedFaceStateType *smash __attribute__((swift_name("smash")));
@property (class, readonly) SharedFaceStateType *straight __attribute__((swift_name("straight")));
+ (SharedKotlinArray<SharedFaceStateType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedFaceStateType *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceStateType.Companion")))
@interface SharedFaceStateTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFaceStateTypeCompanion *shared __attribute__((swift_name("shared")));
- (SharedFaceStateType * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((swift_name("FinOSOtpInterface")))
@protocol SharedFinOSOtpInterface
@required
- (void)sendOtpApiKey:(NSString *)apiKey smsOtpConfig:(SharedSmsOtpConfig *)smsOtpConfig __attribute__((swift_name("sendOtp(apiKey:smsOtpConfig:)")));
- (void)verifyOtpApiKey:(NSString *)apiKey smsOtpConfig:(SharedSmsOtpConfig *)smsOtpConfig otpCode:(NSString *)otpCode __attribute__((swift_name("verifyOtp(apiKey:smsOtpConfig:otpCode:)")));
@end

__attribute__((swift_name("FinOSeKYCInterface")))
@protocol SharedFinOSeKYCInterface
@required
- (void)quickStartFlow:(NSArray<SharedEkycFlow *> *)flow language:(NSString *)language env:(SharedSDKEnv *)env __attribute__((swift_name("quickStart(flow:language:env:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKApiCode")))
@interface SharedSDKApiCode : SharedKotlinEnum<SharedSDKApiCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSDKApiCode *sdkNfc __attribute__((swift_name("sdkNfc")));
@property (class, readonly) SharedSDKApiCode *faceCompare __attribute__((swift_name("faceCompare")));
@property (class, readonly) SharedSDKApiCode *livenessCheckServer __attribute__((swift_name("livenessCheckServer")));
@property (class, readonly) SharedSDKApiCode *ocrNationalid __attribute__((swift_name("ocrNationalid")));
+ (SharedKotlinArray<SharedSDKApiCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSDKApiCode *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKBundleEvent")))
@interface SharedSDKBundleEvent : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKBundleEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKBundleEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BUNDLE_APP_KEY __attribute__((swift_name("BUNDLE_APP_KEY")));
@property (readonly) NSString *BUNDLE_FACE __attribute__((swift_name("BUNDLE_FACE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKFaceDetectStatus")))
@interface SharedSDKFaceDetectStatus : SharedKotlinEnum<SharedSDKFaceDetectStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSDKFaceDetectStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSDKFaceDetectStatus *left __attribute__((swift_name("left")));
@property (class, readonly) SharedSDKFaceDetectStatus *right __attribute__((swift_name("right")));
@property (class, readonly) SharedSDKFaceDetectStatus *up __attribute__((swift_name("up")));
@property (class, readonly) SharedSDKFaceDetectStatus *down __attribute__((swift_name("down")));
@property (class, readonly) SharedSDKFaceDetectStatus *straight __attribute__((swift_name("straight")));
@property (class, readonly) SharedSDKFaceDetectStatus *smile __attribute__((swift_name("smile")));
@property (class, readonly) SharedSDKFaceDetectStatus *blink __attribute__((swift_name("blink")));
@property (class, readonly) SharedSDKFaceDetectStatus *winkLeft __attribute__((swift_name("winkLeft")));
@property (class, readonly) SharedSDKFaceDetectStatus *winkRight __attribute__((swift_name("winkRight")));
@property (class, readonly) SharedSDKFaceDetectStatus *moveAway __attribute__((swift_name("moveAway")));
@property (class, readonly) SharedSDKFaceDetectStatus *moveCloser __attribute__((swift_name("moveCloser")));
@property (class, readonly) SharedSDKFaceDetectStatus *start __attribute__((swift_name("start")));
@property (class, readonly) SharedSDKFaceDetectStatus *good __attribute__((swift_name("good")));
@property (class, readonly) SharedSDKFaceDetectStatus *processing __attribute__((swift_name("processing")));
@property (class, readonly) SharedSDKFaceDetectStatus *completed __attribute__((swift_name("completed")));
@property (class, readonly) SharedSDKFaceDetectStatus *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedSDKFaceDetectStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSDKFaceDetectStatus *> *entries __attribute__((swift_name("entries")));
- (NSString *)instructionLanguage:(NSString * _Nullable)language __attribute__((swift_name("instruction(language:)")));
- (NSString *)labelLanguage:(NSString * _Nullable)language __attribute__((swift_name("label(language:)")));
@property (readonly) BOOL isInstant __attribute__((swift_name("isInstant")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKFaceDetectStatus.Companion")))
@interface SharedSDKFaceDetectStatusCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKFaceDetectStatusCompanion *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, NSString *> *)actionLabelsLanguage:(NSString * _Nullable)language __attribute__((swift_name("actionLabels(language:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSString *SUCCESS_PREFIX __attribute__((swift_name("SUCCESS_PREFIX")));
@property (readonly) NSArray<SharedSDKFaceDetectStatus *> *selectableActions __attribute__((swift_name("selectableActions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKJobType")))
@interface SharedSDKJobType : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKJobType __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKJobType *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *JobAuditNfc __attribute__((swift_name("JobAuditNfc")));
@property (readonly) NSString *JobAuditNfcSync __attribute__((swift_name("JobAuditNfcSync")));
@property (readonly) NSString *JobCallBackC06Sync __attribute__((swift_name("JobCallBackC06Sync")));
@property (readonly) NSString *JobCheckAppKey __attribute__((swift_name("JobCheckAppKey")));
@property (readonly) NSString *JobCheckC06Sync __attribute__((swift_name("JobCheckC06Sync")));
@property (readonly) NSString *JobCheckESignSync __attribute__((swift_name("JobCheckESignSync")));
@property (readonly) NSString *JobCheckFaceServiceSync __attribute__((swift_name("JobCheckFaceServiceSync")));
@property (readonly) NSString *JobCheckLivenessSync __attribute__((swift_name("JobCheckLivenessSync")));
@property (readonly) NSString *JobCheckNfcSync __attribute__((swift_name("JobCheckNfcSync")));
@property (readonly) NSString *JobCheckOcrSync __attribute__((swift_name("JobCheckOcrSync")));
@property (readonly) NSString *JobCheckQrCodeSync __attribute__((swift_name("JobCheckQrCodeSync")));
@property (readonly) NSString *JobCheckSmsOtpSync __attribute__((swift_name("JobCheckSmsOtpSync")));
@property (readonly) NSString *JobCheckSummarySync __attribute__((swift_name("JobCheckSummarySync")));
@property (readonly) NSString *JobFetchImageSync __attribute__((swift_name("JobFetchImageSync")));
@property (readonly) NSString *JobFetchLastResultSync __attribute__((swift_name("JobFetchLastResultSync")));
@property (readonly) NSString *JobFetchTransactionSync __attribute__((swift_name("JobFetchTransactionSync")));
@property (readonly) NSString *JobNfcSync __attribute__((swift_name("JobNfcSync")));
@property (readonly) NSString *JobOcrSync __attribute__((swift_name("JobOcrSync")));
@property (readonly) NSString *JobSmsOtpResend __attribute__((swift_name("JobSmsOtpResend")));
@property (readonly) NSString *JobSmsOtpSend __attribute__((swift_name("JobSmsOtpSend")));
@property (readonly) NSString *JobSmsOtpVerify __attribute__((swift_name("JobSmsOtpVerify")));
@property (readonly) NSString *JobSubmitLivenessSync __attribute__((swift_name("JobSubmitLivenessSync")));
@property (readonly) NSString *JobUploadSync __attribute__((swift_name("JobUploadSync")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKLanguage")))
@interface SharedSDKLanguage : SharedBase
- (instancetype)initWithCode:(NSString *)code nativeName:(NSString *)nativeName englishName:(NSString *)englishName __attribute__((swift_name("init(code:nativeName:englishName:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKLanguage *)doCopyCode:(NSString *)code nativeName:(NSString *)nativeName englishName:(NSString *)englishName __attribute__((swift_name("doCopy(code:nativeName:englishName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *englishName __attribute__((swift_name("englishName")));
@property (readonly) NSString *nativeName __attribute__((swift_name("nativeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKLanguages")))
@interface SharedSDKLanguages : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKLanguages __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKLanguages *shared __attribute__((swift_name("shared")));
- (BOOL)isSupportedCode:(NSString * _Nullable)code __attribute__((swift_name("isSupported(code:)")));
@property (readonly) NSArray<NSString *> *codes __attribute__((swift_name("codes")));
@property (readonly) NSArray<SharedSDKLanguage *> *supported __attribute__((swift_name("supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKResponseKey")))
@interface SharedSDKResponseKey : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKResponseKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKResponseKey *shared __attribute__((swift_name("shared")));
- (BOOL)isBackDocumentTypeType:(NSString * _Nullable)type __attribute__((swift_name("isBackDocumentType(type:)")));
- (BOOL)isFrontDocumentTypeType:(NSString * _Nullable)type __attribute__((swift_name("isFrontDocumentType(type:)")));
- (BOOL)matchesExpectedDocumentSideExpectedSide:(NSString * _Nullable)expectedSide actualType:(NSString * _Nullable)actualType __attribute__((swift_name("matchesExpectedDocumentSide(expectedSide:actualType:)")));
@property (readonly) NSString *SDK_STATUS_200_RAW __attribute__((swift_name("SDK_STATUS_200_RAW")));
@property (readonly) NSString *SIDE_BACK __attribute__((swift_name("SIDE_BACK")));
@property (readonly) NSString *SIDE_FRONT __attribute__((swift_name("SIDE_FRONT")));
@property (readonly) NSString *STATUS_C06_PASS __attribute__((swift_name("STATUS_C06_PASS")));
@property (readonly) NSString *STATUS_FACE_PASS __attribute__((swift_name("STATUS_FACE_PASS")));
@property (readonly) NSString *STATUS_PASS __attribute__((swift_name("STATUS_PASS")));
@property (readonly) NSString *STATUS_SUCCESS_RAW __attribute__((swift_name("STATUS_SUCCESS_RAW")));
@property (readonly) NSString *TYPE_CCCD_BACK __attribute__((swift_name("TYPE_CCCD_BACK")));
@property (readonly) NSString *TYPE_CCCD_CHIP_B __attribute__((swift_name("TYPE_CCCD_CHIP_B")));
@property (readonly) NSString *TYPE_CCCD_CHIP_F __attribute__((swift_name("TYPE_CCCD_CHIP_F")));
@property (readonly) NSString *TYPE_CCCD_FONT __attribute__((swift_name("TYPE_CCCD_FONT")));
@property (readonly) NSString *TYPE_IMAGE_LIVENESS __attribute__((swift_name("TYPE_IMAGE_LIVENESS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKStepType")))
@interface SharedSDKStepType : SharedKotlinEnum<SharedSDKStepType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSDKStepType *ocrFront __attribute__((swift_name("ocrFront")));
@property (class, readonly) SharedSDKStepType *ocrBack __attribute__((swift_name("ocrBack")));
@property (class, readonly) SharedSDKStepType *qrCode __attribute__((swift_name("qrCode")));
@property (class, readonly) SharedSDKStepType *nfc __attribute__((swift_name("nfc")));
@property (class, readonly) SharedSDKStepType *liveness __attribute__((swift_name("liveness")));
@property (class, readonly) SharedSDKStepType *result __attribute__((swift_name("result")));
+ (SharedKotlinArray<SharedSDKStepType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSDKStepType *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKType")))
@interface SharedSDKType : SharedKotlinEnum<SharedSDKType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSDKType *nfc __attribute__((swift_name("nfc")));
@property (class, readonly) SharedSDKType *ocr __attribute__((swift_name("ocr")));
@property (class, readonly) SharedSDKType *liveness __attribute__((swift_name("liveness")));
@property (class, readonly) SharedSDKType *qrCode __attribute__((swift_name("qrCode")));
+ (SharedKotlinArray<SharedSDKType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSDKType *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinBridge")))
@interface SharedKoinBridge : SharedBase <SharedKoin_coreKoinComponent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koinBridge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoinBridge *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)c06CheckJsonTransactionId:(NSString *)transactionId requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("c06CheckJson(transactionId:requestJson:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)compareCheckJsonTransactionId:(NSString *)transactionId requestId:(NSString *)requestId idBytes:(SharedKotlinByteArray *)idBytes selfieBytes:(SharedKotlinByteArray *)selfieBytes completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("compareCheckJson(transactionId:requestId:idBytes:selfieBytes:completionHandler:)")));
- (NSString *)currentTransactionId __attribute__((swift_name("currentTransactionId()")));
- (void)doInitKoin __attribute__((swift_name("doInitKoin()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)livenessActiveCheckJsonTransactionId:(NSString *)transactionId requestId:(NSString *)requestId result:(NSString *)result selfieBytes:(SharedKotlinByteArray *)selfieBytes completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("livenessActiveCheckJson(transactionId:requestId:result:selfieBytes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)livenessPassiveCheckJsonTransactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("livenessPassiveCheckJson(transactionId:imageBytes:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nfcCheckJsonTransactionId:(NSString *)transactionId requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("nfcCheckJson(transactionId:requestJson:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ocrCheckJsonTransactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes side:(NSString *)side completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ocrCheckJson(transactionId:imageBytes:side:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resendOtpApiKey:(NSString *)apiKey request:(SharedResendOtpRequest *)request completionHandler:(void (^)(SharedResendOtpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resendOtp(apiKey:request:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resendOtpJsonApiKey:(NSString *)apiKey requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resendOtpJson(apiKey:requestJson:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sdkInitJsonAppKey:(NSString *)appKey deviceFingerprint:(NSString *)deviceFingerprint completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sdkInitJson(appKey:deviceFingerprint:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendOtpApiKey:(NSString *)apiKey request:(SharedSendOtpRequest *)request completionHandler:(void (^)(SharedSendOtpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendOtp(apiKey:request:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendOtpJsonApiKey:(NSString *)apiKey requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendOtpJson(apiKey:requestJson:completionHandler:)")));
- (void)setEnableSecurityRequestEnabled:(BOOL)enabled __attribute__((swift_name("setEnableSecurityRequest(enabled:)")));
- (void)setEnvFromStringEnv:(NSString *)env __attribute__((swift_name("setEnvFromString(env:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startEkycSessionWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startEkycSession(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startEkycSessionCatchingWithCompletionHandler:(void (^)(SharedEKYCErrorResult * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("startEkycSessionCatching(completionHandler:)")));
- (void)syncEkycConfigAppKey:(NSString * _Nullable)appKey baseUrl:(NSString * _Nullable)baseUrl networkTimeoutMs:(int64_t)networkTimeoutMs __attribute__((swift_name("syncEkycConfig(appKey:baseUrl:networkTimeoutMs:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyOtpApiKey:(NSString *)apiKey request:(SharedVerifyOtpRequest *)request completionHandler:(void (^)(SharedVerifyOtpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyOtp(apiKey:request:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyOtpJsonApiKey:(NSString *)apiKey requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyOtpJson(apiKey:requestJson:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycFlowManager")))
@interface SharedEkycFlowManager : SharedBase
- (instancetype)initWithConfigProvider:(SharedEKYCConfigSDK * _Nullable (^)(void))configProvider __attribute__((swift_name("init(configProvider:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isStepInFlowStep:(SharedSDKStepType *)step __attribute__((swift_name("isStepInFlow(step:)")));
- (NSArray<SharedSDKStepType *> *)resolveSteps __attribute__((swift_name("resolveSteps()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessThresholds")))
@interface SharedLivenessThresholds : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)livenessThresholds __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLivenessThresholds *shared __attribute__((swift_name("shared")));
@property (readonly) float EYE_OPENNESS_THRESHOLD __attribute__((swift_name("EYE_OPENNESS_THRESHOLD")));
@property (readonly) float FACE_CONFIDENCE_THRESHOLD __attribute__((swift_name("FACE_CONFIDENCE_THRESHOLD")));
@property (readonly) int32_t MAX_CONSECUTIVE_INVALID_FRAMES __attribute__((swift_name("MAX_CONSECUTIVE_INVALID_FRAMES")));
@property (readonly) int32_t MIN_VALID_FRAMES __attribute__((swift_name("MIN_VALID_FRAMES")));
@property (readonly) float MOUTH_OPENNESS_MAX __attribute__((swift_name("MOUTH_OPENNESS_MAX")));
@property (readonly) float PITCH_MAX_DEGREES __attribute__((swift_name("PITCH_MAX_DEGREES")));
@property (readonly) float ROLL_MAX_DEGREES __attribute__((swift_name("ROLL_MAX_DEGREES")));
@property (readonly) float SUCCESS_RATE_THRESHOLD __attribute__((swift_name("SUCCESS_RATE_THRESHOLD")));
@property (readonly) float YAW_MAX_DEGREES __attribute__((swift_name("YAW_MAX_DEGREES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MrzValidator")))
@interface SharedMrzValidator : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mrzValidator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMrzValidator *shared __attribute__((swift_name("shared")));
- (SharedMrzValidatorMrzValidationResult *)validateOcrIdNumber:(NSString * _Nullable)ocrIdNumber nfcDocumentNumber:(NSString * _Nullable)nfcDocumentNumber __attribute__((swift_name("validate(ocrIdNumber:nfcDocumentNumber:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MrzValidator.MrzValidationResult")))
@interface SharedMrzValidatorMrzValidationResult : SharedBase
- (instancetype)initWithIsValid:(BOOL)isValid errorCode:(NSString * _Nullable)errorCode errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(isValid:errorCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (SharedMrzValidatorMrzValidationResult *)doCopyIsValid:(BOOL)isValid errorCode:(NSString * _Nullable)errorCode errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(isValid:errorCode:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QrCodeValidator")))
@interface SharedQrCodeValidator : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)qrCodeValidator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedQrCodeValidator *shared __attribute__((swift_name("shared")));
- (BOOL)matchesOcrQrIdNumber:(NSString * _Nullable)qrIdNumber ocrIdNumber:(NSString * _Nullable)ocrIdNumber __attribute__((swift_name("matchesOcr(qrIdNumber:ocrIdNumber:)")));
- (SharedQrCodeValidatorQrValidationResult *)validateQrData:(NSString *)qrData __attribute__((swift_name("validate(qrData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QrCodeValidator.QrValidationResult")))
@interface SharedQrCodeValidatorQrValidationResult : SharedBase
- (instancetype)initWithIsValid:(BOOL)isValid idNumber:(NSString * _Nullable)idNumber fullName:(NSString * _Nullable)fullName dateOfBirth:(NSString * _Nullable)dateOfBirth errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(isValid:idNumber:fullName:dateOfBirth:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (SharedQrCodeValidatorQrValidationResult *)doCopyIsValid:(BOOL)isValid idNumber:(NSString * _Nullable)idNumber fullName:(NSString * _Nullable)fullName dateOfBirth:(NSString * _Nullable)dateOfBirth errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(isValid:idNumber:fullName:dateOfBirth:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString * _Nullable idNumber __attribute__((swift_name("idNumber")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionManager")))
@interface SharedTransactionManager : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)reset __attribute__((swift_name("reset()")));
- (NSString *)resolveTransactionIdProvidedId:(NSString * _Nullable)providedId __attribute__((swift_name("resolveTransactionId(providedId:)")));
- (NSString *)setTransactionIdId:(NSString * _Nullable)id __attribute__((swift_name("setTransactionId(id:)")));
@property (readonly) NSString *currentTransactionId __attribute__((swift_name("currentTransactionId")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionManager.TransactionIdSource")))
@interface SharedTransactionManagerTransactionIdSource : SharedKotlinEnum<SharedTransactionManagerTransactionIdSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTransactionManagerTransactionIdSource *autoUuid __attribute__((swift_name("autoUuid")));
@property (class, readonly) SharedTransactionManagerTransactionIdSource *setter __attribute__((swift_name("setter")));
@property (class, readonly) SharedTransactionManagerTransactionIdSource *configAdopted __attribute__((swift_name("configAdopted")));
+ (SharedKotlinArray<SharedTransactionManagerTransactionIdSource *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTransactionManagerTransactionIdSource *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EkycGateway")))
@interface SharedEkycGateway : SharedBase
- (instancetype)initWithEkycService:(SharedSDKEkycService *)ekycService backOfficeKyc:(SharedSDKBackOfficeService *)backOfficeKyc smsOtpService:(SharedSDKSmsOtpService *)smsOtpService transactionManager:(SharedTransactionManager *)transactionManager flowManager:(SharedEkycFlowManager *)flowManager __attribute__((swift_name("init(ekycService:backOfficeKyc:smsOtpService:transactionManager:flowManager:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeC06AppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeC06(appKey:transactionId:requestJson:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeFaceCompareAppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestId:(NSString *)requestId idBytes:(SharedKotlinByteArray *)idBytes selfieBytes:(SharedKotlinByteArray *)selfieBytes completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeFaceCompare(appKey:transactionId:requestId:idBytes:selfieBytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeLivenessActiveAppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestId:(NSString *)requestId result:(NSString *)result selfieBytes:(SharedKotlinByteArray *)selfieBytes completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeLivenessActive(appKey:transactionId:requestId:result:selfieBytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeLivenessPassiveAppKey:(NSString *)appKey transactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeLivenessPassive(appKey:transactionId:imageBytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeNfcAppKey:(NSString *)appKey transactionId:(NSString *)transactionId requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeNfc(appKey:transactionId:requestJson:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeOcrAppKey:(NSString *)appKey transactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes side:(NSString *)side completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeOcr(appKey:transactionId:imageBytes:side:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchTransactionHistoriesAppKey:(NSString * _Nullable)appKey requestIds:(NSString *)requestIds completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchTransactionHistories(appKey:requestIds:completionHandler:)")));
- (SharedEKYCConfigSDK * _Nullable)getConfig __attribute__((swift_name("getConfig()")));
- (NSArray<NSString *> *)getFlowSteps __attribute__((swift_name("getFlowSteps()")));
- (SharedLivenessThresholds *)getLivenessThresholds __attribute__((swift_name("getLivenessThresholds()")));
- (void)initializeConfigJson:(NSString *)configJson __attribute__((swift_name("initialize(configJson:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resendOtpApiKey:(NSString *)apiKey requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resendOtp(apiKey:requestJson:completionHandler:)")));
- (NSString *)resolveTransactionIdProvidedId:(NSString * _Nullable)providedId __attribute__((swift_name("resolveTransactionId(providedId:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendOtpApiKey:(NSString *)apiKey requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendOtp(apiKey:requestJson:completionHandler:)")));
- (NSString *)validateMrzOcrIdNumber:(NSString * _Nullable)ocrIdNumber nfcDocumentNumber:(NSString * _Nullable)nfcDocumentNumber __attribute__((swift_name("validateMrz(ocrIdNumber:nfcDocumentNumber:)")));
- (NSString *)validateQrCodeQrData:(NSString *)qrData __attribute__((swift_name("validateQrCode(qrData:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyOtpApiKey:(NSString *)apiKey requestJson:(NSString *)requestJson completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyOtp(apiKey:requestJson:completionHandler:)")));
@property (readonly) NSString *currentTransactionId __attribute__((swift_name("currentTransactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorClientFactory")))
@interface SharedKtorClientFactory : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ktorClientFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtorClientFactory *shared __attribute__((swift_name("shared")));
- (SharedKtor_client_coreHttpClient *)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKImageAspect")))
@interface SharedSDKImageAspect : SharedBase
- (instancetype)initWithWidth:(float)width height:(float)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKImageAspect *)doCopyWidth:(float)width height:(float)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKImageCaptureMode")))
@interface SharedSDKImageCaptureMode : SharedKotlinEnum<SharedSDKImageCaptureMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSDKImageCaptureMode *ocr __attribute__((swift_name("ocr")));
@property (class, readonly) SharedSDKImageCaptureMode *liveness __attribute__((swift_name("liveness")));
@property (class, readonly) SharedSDKImageCaptureMode *qrCode __attribute__((swift_name("qrCode")));
+ (SharedKotlinArray<SharedSDKImageCaptureMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSDKImageCaptureMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKImageProcessingPlan")))
@interface SharedSDKImageProcessingPlan : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKImageProcessingPlan __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKImageProcessingPlan *shared __attribute__((swift_name("shared")));
- (SharedSDKImageRect *)aspectCropRectImageSize:(SharedSDKImageSize *)imageSize aspect:(SharedSDKImageAspect *)aspect __attribute__((swift_name("aspectCropRect(imageSize:aspect:)")));
- (SharedSDKImageAspect *)aspectForPreRotationAspect:(SharedSDKImageAspect *)aspect swapsDimensions:(BOOL)swapsDimensions __attribute__((swift_name("aspectForPreRotation(aspect:swapsDimensions:)")));
- (SharedSDKImageSize *)resizeSizeImageSize:(SharedSDKImageSize *)imageSize maxDimension:(int32_t)maxDimension __attribute__((swift_name("resizeSize(imageSize:maxDimension:)")));
- (SharedSDKImageSpec *)specMode:(SharedSDKImageCaptureMode *)mode __attribute__((swift_name("spec(mode:)")));
- (SharedSDKImageRect *)visibleSensorRectPreviewSize:(SharedSDKImageSize *)previewSize imageSize:(SharedSDKImageSize *)imageSize __attribute__((swift_name("visibleSensorRect(previewSize:imageSize:)")));
@property (readonly) int32_t FULL_HD_MAX_DIMENSION __attribute__((swift_name("FULL_HD_MAX_DIMENSION")));
@property (readonly) int32_t JPEG_QUALITY_90 __attribute__((swift_name("JPEG_QUALITY_90")));
@property (readonly) int32_t OCR_MAX_DIMENSION __attribute__((swift_name("OCR_MAX_DIMENSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKImageRect")))
@interface SharedSDKImageRect : SharedBase
- (instancetype)initWithX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("init(x:y:width:height:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKImageRect *)doCopyX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("doCopy(x:y:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKImageSize")))
@interface SharedSDKImageSize : SharedBase
- (instancetype)initWithWidth:(float)width height:(float)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKImageSize *)doCopyWidth:(float)width height:(float)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKImageSpec")))
@interface SharedSDKImageSpec : SharedBase
- (instancetype)initWithAspect:(SharedSDKImageAspect * _Nullable)aspect maxDimension:(int32_t)maxDimension jpegQuality:(int32_t)jpegQuality __attribute__((swift_name("init(aspect:maxDimension:jpegQuality:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKImageSpec *)doCopyAspect:(SharedSDKImageAspect * _Nullable)aspect maxDimension:(int32_t)maxDimension jpegQuality:(int32_t)jpegQuality __attribute__((swift_name("doCopy(aspect:maxDimension:jpegQuality:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSDKImageAspect * _Nullable aspect __attribute__((swift_name("aspect")));
@property (readonly) int32_t jpegQuality __attribute__((swift_name("jpegQuality")));
@property (readonly) int32_t maxDimension __attribute__((swift_name("maxDimension")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraCapture")))
@interface SharedCameraCapture : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)captureImageWithCompletionHandler:(void (^)(SharedKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("captureImage(completionHandler:)")));
- (BOOL)isAvailable __attribute__((swift_name("isAvailable()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startPreviewWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("startPreview(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopPreviewWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopPreview(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageProcessor")))
@interface SharedImageProcessor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKotlinByteArray *)compressImage:(SharedKotlinByteArray *)image quality:(int32_t)quality __attribute__((swift_name("compress(image:quality:)")));
- (SharedKotlinByteArray *)cropImage:(SharedKotlinByteArray *)image x:(int32_t)x y:(int32_t)y width:(int32_t)width height:(int32_t)height __attribute__((swift_name("crop(image:x:y:width:height:)")));
- (SharedKotlinByteArray *)resizeImage:(SharedKotlinByteArray *)image maxWidth:(int32_t)maxWidth maxHeight:(int32_t)maxHeight __attribute__((swift_name("resize(image:maxWidth:maxHeight:)")));
- (SharedKotlinByteArray *)rotateImage:(SharedKotlinByteArray *)image degrees:(float)degrees __attribute__((swift_name("rotate(image:degrees:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessDetector")))
@interface SharedLivenessDetector : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)detectLivenessFrames:(NSArray<SharedKotlinByteArray *> *)frames completionHandler:(void (^)(SharedLivenessResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("detectLiveness(frames:completionHandler:)")));
- (BOOL)isAvailable __attribute__((swift_name("isAvailable()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessResult")))
@interface SharedLivenessResult : SharedBase
- (instancetype)initWithIsLive:(BOOL)isLive confidence:(float)confidence score:(float)score thresholds:(SharedLivenessThresholds *)thresholds details:(NSDictionary<NSString *, id> *)details __attribute__((swift_name("init(isLive:confidence:score:thresholds:details:)"))) __attribute__((objc_designated_initializer));
- (SharedLivenessResult *)doCopyIsLive:(BOOL)isLive confidence:(float)confidence score:(float)score thresholds:(SharedLivenessThresholds *)thresholds details:(NSDictionary<NSString *, id> *)details __attribute__((swift_name("doCopy(isLive:confidence:score:thresholds:details:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float confidence __attribute__((swift_name("confidence")));
@property (readonly) NSDictionary<NSString *, id> *details __attribute__((swift_name("details")));
@property (readonly) BOOL isLive __attribute__((swift_name("isLive")));
@property (readonly) float score __attribute__((swift_name("score")));
@property (readonly) SharedLivenessThresholds *thresholds __attribute__((swift_name("thresholds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NfcReadResult")))
@interface SharedNfcReadResult : SharedBase
- (instancetype)initWithDocumentNumber:(NSString * _Nullable)documentNumber firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName dateOfBirth:(NSString * _Nullable)dateOfBirth dateOfExpiry:(NSString * _Nullable)dateOfExpiry nationality:(NSString * _Nullable)nationality gender:(NSString * _Nullable)gender faceImage:(SharedKotlinByteArray * _Nullable)faceImage dg1Data:(SharedKotlinByteArray * _Nullable)dg1Data dg2Data:(SharedKotlinByteArray * _Nullable)dg2Data rawJson:(NSString * _Nullable)rawJson isSuccess:(BOOL)isSuccess errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(documentNumber:firstName:lastName:dateOfBirth:dateOfExpiry:nationality:gender:faceImage:dg1Data:dg2Data:rawJson:isSuccess:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (SharedNfcReadResult *)doCopyDocumentNumber:(NSString * _Nullable)documentNumber firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName dateOfBirth:(NSString * _Nullable)dateOfBirth dateOfExpiry:(NSString * _Nullable)dateOfExpiry nationality:(NSString * _Nullable)nationality gender:(NSString * _Nullable)gender faceImage:(SharedKotlinByteArray * _Nullable)faceImage dg1Data:(SharedKotlinByteArray * _Nullable)dg1Data dg2Data:(SharedKotlinByteArray * _Nullable)dg2Data rawJson:(NSString * _Nullable)rawJson isSuccess:(BOOL)isSuccess errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(documentNumber:firstName:lastName:dateOfBirth:dateOfExpiry:nationality:gender:faceImage:dg1Data:dg2Data:rawJson:isSuccess:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable dateOfExpiry __attribute__((swift_name("dateOfExpiry")));
@property (readonly) SharedKotlinByteArray * _Nullable dg1Data __attribute__((swift_name("dg1Data")));
@property (readonly) SharedKotlinByteArray * _Nullable dg2Data __attribute__((swift_name("dg2Data")));
@property (readonly) NSString * _Nullable documentNumber __attribute__((swift_name("documentNumber")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) SharedKotlinByteArray * _Nullable faceImage __attribute__((swift_name("faceImage")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));
@property (readonly) NSString * _Nullable rawJson __attribute__((swift_name("rawJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NfcReader")))
@interface SharedNfcReader : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isNfcAvailable __attribute__((swift_name("isNfcAvailable()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPassportCanNumber:(NSString *)canNumber dateOfBirth:(NSString *)dateOfBirth dateOfExpiry:(NSString *)dateOfExpiry completionHandler:(void (^)(SharedNfcReadResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPassport(canNumber:dateOfBirth:dateOfExpiry:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseParser")))
@interface SharedErrorResponseParser : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorResponseParser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedErrorResponseParser *shared __attribute__((swift_name("shared")));
- (SharedEKYCErrorResult * _Nullable)classifyTransportThrowableMessage:(NSString * _Nullable)message typeName:(NSString * _Nullable)typeName __attribute__((swift_name("classifyTransportThrowable(message:typeName:)")));
- (SharedEKYCErrorResult *)parseC06ErrorResponseRaw:(NSString * _Nullable)raw __attribute__((swift_name("parseC06ErrorResponse(raw:)")));
- (SharedEKYCErrorResult *)parseFaceErrorResponseRaw:(NSString * _Nullable)raw __attribute__((swift_name("parseFaceErrorResponse(raw:)")));
- (SharedEKYCErrorResult *)parseLivenessErrorResponseRaw:(NSString * _Nullable)raw __attribute__((swift_name("parseLivenessErrorResponse(raw:)")));
- (SharedEKYCErrorResult *)parseOcrErrorResponseRaw:(NSString * _Nullable)raw __attribute__((swift_name("parseOcrErrorResponse(raw:)")));
- (SharedEKYCErrorResult *)parseSdkInitErrorResponseHttpStatus:(SharedInt * _Nullable)httpStatus raw:(NSString * _Nullable)raw __attribute__((swift_name("parseSdkInitErrorResponse(httpStatus:raw:)")));
- (SharedEKYCErrorResult *)parseSmsOtpErrorResponseRaw:(NSString * _Nullable)raw __attribute__((swift_name("parseSmsOtpErrorResponse(raw:)")));
- (NSString * _Nullable)truncateRawRaw:(NSString * _Nullable)raw __attribute__((swift_name("truncateRaw(raw:)")));
@property (readonly) int32_t RAW_RESPONSE_MAX __attribute__((swift_name("RAW_RESPONSE_MAX")));
@end

__attribute__((swift_name("InterpretationResult")))
@interface SharedInterpretationResult : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpretationResult.Failure")))
@interface SharedInterpretationResultFailure : SharedInterpretationResult
- (instancetype)initWithError:(SharedEKYCErrorResult *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (SharedInterpretationResultFailure *)doCopyError:(SharedEKYCErrorResult *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedEKYCErrorResult *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpretationResult.Success")))
@interface SharedInterpretationResultSuccess : SharedInterpretationResult
- (instancetype)initWithEvent:(SharedEKYCEvent *)event data:(SharedSuccessPayload * _Nullable)data __attribute__((swift_name("init(event:data:)"))) __attribute__((objc_designated_initializer));
- (SharedInterpretationResultSuccess *)doCopyEvent:(SharedEKYCEvent *)event data:(SharedSuccessPayload * _Nullable)data __attribute__((swift_name("doCopy(event:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSuccessPayload * _Nullable data __attribute__((swift_name("data")));
@property (readonly) SharedEKYCEvent *event __attribute__((swift_name("event")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpreterOutcome")))
@interface SharedInterpreterOutcome : SharedBase
- (instancetype)initWithIsSuccess:(BOOL)isSuccess eventName:(NSString * _Nullable)eventName errorCode:(NSString * _Nullable)errorCode errorMessageVi:(NSString * _Nullable)errorMessageVi errorMessageEn:(NSString * _Nullable)errorMessageEn c06VerifyStatus:(SharedBoolean * _Nullable)c06VerifyStatus extractedFrontIdNumber:(NSString * _Nullable)extractedFrontIdNumber otpRequestId:(NSString * _Nullable)otpRequestId otpExpiresIn:(SharedInt * _Nullable)otpExpiresIn otpAttemptsRemaining:(SharedInt * _Nullable)otpAttemptsRemaining otpVerifiedAt:(NSString * _Nullable)otpVerifiedAt __attribute__((swift_name("init(isSuccess:eventName:errorCode:errorMessageVi:errorMessageEn:c06VerifyStatus:extractedFrontIdNumber:otpRequestId:otpExpiresIn:otpAttemptsRemaining:otpVerifiedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedInterpreterOutcomeCompanion *companion __attribute__((swift_name("companion")));
- (SharedInterpreterOutcome *)doCopyIsSuccess:(BOOL)isSuccess eventName:(NSString * _Nullable)eventName errorCode:(NSString * _Nullable)errorCode errorMessageVi:(NSString * _Nullable)errorMessageVi errorMessageEn:(NSString * _Nullable)errorMessageEn c06VerifyStatus:(SharedBoolean * _Nullable)c06VerifyStatus extractedFrontIdNumber:(NSString * _Nullable)extractedFrontIdNumber otpRequestId:(NSString * _Nullable)otpRequestId otpExpiresIn:(SharedInt * _Nullable)otpExpiresIn otpAttemptsRemaining:(SharedInt * _Nullable)otpAttemptsRemaining otpVerifiedAt:(NSString * _Nullable)otpVerifiedAt __attribute__((swift_name("doCopy(isSuccess:eventName:errorCode:errorMessageVi:errorMessageEn:c06VerifyStatus:extractedFrontIdNumber:otpRequestId:otpExpiresIn:otpAttemptsRemaining:otpVerifiedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable c06VerifyStatus __attribute__((swift_name("c06VerifyStatus")));
@property (readonly) NSString * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString * _Nullable errorMessageEn __attribute__((swift_name("errorMessageEn")));
@property (readonly) NSString * _Nullable errorMessageVi __attribute__((swift_name("errorMessageVi")));
@property (readonly) NSString * _Nullable eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable extractedFrontIdNumber __attribute__((swift_name("extractedFrontIdNumber")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) SharedInt * _Nullable otpAttemptsRemaining __attribute__((swift_name("otpAttemptsRemaining")));
@property (readonly) SharedInt * _Nullable otpExpiresIn __attribute__((swift_name("otpExpiresIn")));
@property (readonly) NSString * _Nullable otpRequestId __attribute__((swift_name("otpRequestId")));
@property (readonly) NSString * _Nullable otpVerifiedAt __attribute__((swift_name("otpVerifiedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpreterOutcome.Companion")))
@interface SharedInterpreterOutcomeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedInterpreterOutcomeCompanion *shared __attribute__((swift_name("shared")));
- (SharedInterpreterOutcome *)fromResult:(SharedInterpretationResult *)result __attribute__((swift_name("from(result:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseInterpreter")))
@interface SharedResponseInterpreter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)responseInterpreter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResponseInterpreter *shared __attribute__((swift_name("shared")));
- (SharedInterpretationResult *)interpretC06Response:(SharedCheckC06Response *)response __attribute__((swift_name("interpretC06(response:)")));
- (SharedInterpreterOutcome *)interpretC06JsonRawJson:(NSString *)rawJson __attribute__((swift_name("interpretC06Json(rawJson:)")));
- (SharedInterpretationResult *)interpretFaceResponse:(SharedCheckFaceResponse *)response __attribute__((swift_name("interpretFace(response:)")));
- (SharedInterpreterOutcome *)interpretFaceJsonRawJson:(NSString *)rawJson __attribute__((swift_name("interpretFaceJson(rawJson:)")));
- (SharedInterpretationResult *)interpretLivenessPassiveResponse:(SharedCheckLivenessResponse *)response __attribute__((swift_name("interpretLivenessPassive(response:)")));
- (SharedInterpreterOutcome *)interpretLivenessPassiveJsonRawJson:(NSString *)rawJson __attribute__((swift_name("interpretLivenessPassiveJson(rawJson:)")));
- (SharedInterpretationResult *)interpretOcrResponse:(SharedCheckOcrResponse *)response expectedDocumentSide:(NSString * _Nullable)expectedDocumentSide priorFrontIdNumber:(NSString * _Nullable)priorFrontIdNumber todayYear:(int32_t)todayYear todayMonth:(int32_t)todayMonth todayDay:(int32_t)todayDay __attribute__((swift_name("interpretOcr(response:expectedDocumentSide:priorFrontIdNumber:todayYear:todayMonth:todayDay:)")));
- (SharedInterpreterOutcome *)interpretOcrJsonRawJson:(NSString *)rawJson expectedDocumentSide:(NSString * _Nullable)expectedDocumentSide priorFrontIdNumber:(NSString * _Nullable)priorFrontIdNumber todayYear:(int32_t)todayYear todayMonth:(int32_t)todayMonth todayDay:(int32_t)todayDay __attribute__((swift_name("interpretOcrJson(rawJson:expectedDocumentSide:priorFrontIdNumber:todayYear:todayMonth:todayDay:)")));
- (SharedInterpretationResult *)interpretResendOtpResponse:(SharedResendOtpResponse *)response __attribute__((swift_name("interpretResendOtp(response:)")));
- (SharedInterpreterOutcome *)interpretResendOtpJsonRawJson:(NSString *)rawJson __attribute__((swift_name("interpretResendOtpJson(rawJson:)")));
- (SharedInterpretationResult *)interpretSendOtpResponse:(SharedSendOtpResponse *)response __attribute__((swift_name("interpretSendOtp(response:)")));
- (SharedInterpreterOutcome *)interpretSendOtpJsonRawJson:(NSString *)rawJson __attribute__((swift_name("interpretSendOtpJson(rawJson:)")));
- (SharedInterpretationResult *)interpretVerifyOtpResponse:(SharedVerifyOtpResponse *)response __attribute__((swift_name("interpretVerifyOtp(response:)")));
- (SharedInterpreterOutcome *)interpretVerifyOtpJsonRawJson:(NSString *)rawJson __attribute__((swift_name("interpretVerifyOtpJson(rawJson:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessPayload")))
@interface SharedSuccessPayload : SharedBase
- (instancetype)initWithC06VerifyStatus:(SharedBoolean * _Nullable)c06VerifyStatus extractedFrontIdNumber:(NSString * _Nullable)extractedFrontIdNumber otpRequestId:(NSString * _Nullable)otpRequestId otpExpiresIn:(SharedInt * _Nullable)otpExpiresIn otpAttemptsRemaining:(SharedInt * _Nullable)otpAttemptsRemaining otpVerifiedAt:(NSString * _Nullable)otpVerifiedAt __attribute__((swift_name("init(c06VerifyStatus:extractedFrontIdNumber:otpRequestId:otpExpiresIn:otpAttemptsRemaining:otpVerifiedAt:)"))) __attribute__((objc_designated_initializer));
- (SharedSuccessPayload *)doCopyC06VerifyStatus:(SharedBoolean * _Nullable)c06VerifyStatus extractedFrontIdNumber:(NSString * _Nullable)extractedFrontIdNumber otpRequestId:(NSString * _Nullable)otpRequestId otpExpiresIn:(SharedInt * _Nullable)otpExpiresIn otpAttemptsRemaining:(SharedInt * _Nullable)otpAttemptsRemaining otpVerifiedAt:(NSString * _Nullable)otpVerifiedAt __attribute__((swift_name("doCopy(c06VerifyStatus:extractedFrontIdNumber:otpRequestId:otpExpiresIn:otpAttemptsRemaining:otpVerifiedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable c06VerifyStatus __attribute__((swift_name("c06VerifyStatus")));
@property (readonly) NSString * _Nullable extractedFrontIdNumber __attribute__((swift_name("extractedFrontIdNumber")));
@property (readonly) SharedInt * _Nullable otpAttemptsRemaining __attribute__((swift_name("otpAttemptsRemaining")));
@property (readonly) SharedInt * _Nullable otpExpiresIn __attribute__((swift_name("otpExpiresIn")));
@property (readonly) NSString * _Nullable otpRequestId __attribute__((swift_name("otpRequestId")));
@property (readonly) NSString * _Nullable otpVerifiedAt __attribute__((swift_name("otpVerifiedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessClassifier")))
@interface SharedLivenessClassifier : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)livenessClassifier __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLivenessClassifier *shared __attribute__((swift_name("shared")));
- (SharedSDKFaceDetectStatus *)classifyDirectionEulerY:(float)eulerY eulerX:(float)eulerX __attribute__((swift_name("classifyDirection(eulerY:eulerX:)")));
- (SharedSDKFaceDetectStatus * _Nullable)classifyDistanceFaceRatio:(float)faceRatio __attribute__((swift_name("classifyDistance(faceRatio:)")));
@property (readonly) float FACE_RATIO_TOO_CLOSE __attribute__((swift_name("FACE_RATIO_TOO_CLOSE")));
@property (readonly) float FACE_RATIO_TOO_FAR __attribute__((swift_name("FACE_RATIO_TOO_FAR")));
@property (readonly) float PITCH_DOWN __attribute__((swift_name("PITCH_DOWN")));
@property (readonly) float PITCH_UP __attribute__((swift_name("PITCH_UP")));
@property (readonly) float YAW_LEFT __attribute__((swift_name("YAW_LEFT")));
@property (readonly) float YAW_RIGHT __attribute__((swift_name("YAW_RIGHT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessFitMeter")))
@interface SharedLivenessFitMeter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)livenessFitMeter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLivenessFitMeter *shared __attribute__((swift_name("shared")));
- (float)positionFaceRatio:(float)faceRatio __attribute__((swift_name("position(faceRatio:)")));
- (SharedLivenessFitMeterTone *)toneFaceRatio:(float)faceRatio __attribute__((swift_name("tone(faceRatio:)")));
@property (readonly) float IDEAL_RATIO __attribute__((swift_name("IDEAL_RATIO")));
@property (readonly) float METER_RATIO_MAX __attribute__((swift_name("METER_RATIO_MAX")));
@property (readonly) float METER_RATIO_MIN __attribute__((swift_name("METER_RATIO_MIN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessFitMeter.Tone")))
@interface SharedLivenessFitMeterTone : SharedKotlinEnum<SharedLivenessFitMeterTone *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLivenessFitMeterTone *tooFar __attribute__((swift_name("tooFar")));
@property (class, readonly) SharedLivenessFitMeterTone *tooClose __attribute__((swift_name("tooClose")));
@property (class, readonly) SharedLivenessFitMeterTone *ok __attribute__((swift_name("ok")));
+ (SharedKotlinArray<SharedLivenessFitMeterTone *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLivenessFitMeterTone *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *colorHex __attribute__((swift_name("colorHex")));
@property (readonly) NSString *labelKey __attribute__((swift_name("labelKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessStepMachine")))
@interface SharedLivenessStepMachine : SharedBase
- (instancetype)initWithSteps:(NSArray<SharedSDKFaceDetectStatus *> *)steps __attribute__((swift_name("init(steps:)"))) __attribute__((objc_designated_initializer));
- (BOOL)advance __attribute__((swift_name("advance()")));
- (void)clearNeutralReset __attribute__((swift_name("clearNeutralReset()")));
- (void)reset __attribute__((swift_name("reset()")));
@property (readonly) int32_t completedCount __attribute__((swift_name("completedCount")));
@property (readonly) int32_t currentIndex __attribute__((swift_name("currentIndex")));
@property (readonly) SharedSDKFaceDetectStatus * _Nullable expectedStep __attribute__((swift_name("expectedStep")));
@property (readonly) BOOL isComplete __attribute__((swift_name("isComplete")));
@property (readonly) BOOL needsNeutralReset __attribute__((swift_name("needsNeutralReset")));
@property (readonly) SharedSDKFaceDetectStatus * _Nullable nextStep __attribute__((swift_name("nextStep")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessSteps")))
@interface SharedLivenessSteps : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)livenessSteps __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLivenessSteps *shared __attribute__((swift_name("shared")));
- (NSArray<SharedSDKFaceDetectStatus *> *)generateIsActiveLiveness:(BOOL)isActiveLiveness customActions:(NSArray<SharedSDKFaceDetectStatus *> * _Nullable)customActions activeActionCount:(int32_t)activeActionCount random:(SharedKotlinRandom *)random __attribute__((swift_name("generate(isActiveLiveness:customActions:activeActionCount:random:)")));
@property (readonly) NSArray<SharedSDKFaceDetectStatus *> *ALL_ACTIONS __attribute__((swift_name("ALL_ACTIONS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKEventLogger")))
@interface SharedSDKEventLogger : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKEventLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKEventLogger *shared __attribute__((swift_name("shared")));
- (void)logValidationErrorField:(NSString *)field message:(NSString *)message __attribute__((swift_name("logValidationError(field:message:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuditNfcRequest")))
@interface SharedAuditNfcRequest : SharedBase
- (instancetype)initWithFinOSApiKey:(NSString * _Nullable)finOSApiKey gwRequestId:(NSString * _Nullable)gwRequestId deviceType:(NSString * _Nullable)deviceType idNumber:(NSString * _Nullable)idNumber name:(NSString * _Nullable)name dob:(NSString * _Nullable)dob gender:(NSString * _Nullable)gender nationality:(NSString * _Nullable)nationality ethnic:(NSString * _Nullable)ethnic religion:(NSString * _Nullable)religion homeTown:(NSString * _Nullable)homeTown permanentAddress:(NSString * _Nullable)permanentAddress features:(NSString * _Nullable)features doi:(NSString * _Nullable)doi doe:(NSString * _Nullable)doe fatherName:(NSString * _Nullable)fatherName motherName:(NSString * _Nullable)motherName spouseName:(NSString * _Nullable)spouseName oldId:(NSString * _Nullable)oldId imageFace:(NSString * _Nullable)imageFace mrz:(NSString * _Nullable)mrz sdkStatus:(NSString * _Nullable)sdkStatus transactionId:(NSString * _Nullable)transactionId corporateCode:(NSString * _Nullable)corporateCode com:(NSString * _Nullable)com sod:(NSString * _Nullable)sod dg1:(NSString * _Nullable)dg1 dg2:(NSString * _Nullable)dg2 dg3:(NSString * _Nullable)dg3 dg4:(NSString * _Nullable)dg4 dg5:(NSString * _Nullable)dg5 dg6:(NSString * _Nullable)dg6 dg7:(NSString * _Nullable)dg7 dg8:(NSString * _Nullable)dg8 dg9:(NSString * _Nullable)dg9 dg10:(NSString * _Nullable)dg10 dg11:(NSString * _Nullable)dg11 dg12:(NSString * _Nullable)dg12 dg13:(NSString * _Nullable)dg13 dg14:(NSString * _Nullable)dg14 dg15:(NSString * _Nullable)dg15 __attribute__((swift_name("init(finOSApiKey:gwRequestId:deviceType:idNumber:name:dob:gender:nationality:ethnic:religion:homeTown:permanentAddress:features:doi:doe:fatherName:motherName:spouseName:oldId:imageFace:mrz:sdkStatus:transactionId:corporateCode:com:sod:dg1:dg2:dg3:dg4:dg5:dg6:dg7:dg8:dg9:dg10:dg11:dg12:dg13:dg14:dg15:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAuditNfcRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedAuditNfcRequest *)doCopyFinOSApiKey:(NSString * _Nullable)finOSApiKey gwRequestId:(NSString * _Nullable)gwRequestId deviceType:(NSString * _Nullable)deviceType idNumber:(NSString * _Nullable)idNumber name:(NSString * _Nullable)name dob:(NSString * _Nullable)dob gender:(NSString * _Nullable)gender nationality:(NSString * _Nullable)nationality ethnic:(NSString * _Nullable)ethnic religion:(NSString * _Nullable)religion homeTown:(NSString * _Nullable)homeTown permanentAddress:(NSString * _Nullable)permanentAddress features:(NSString * _Nullable)features doi:(NSString * _Nullable)doi doe:(NSString * _Nullable)doe fatherName:(NSString * _Nullable)fatherName motherName:(NSString * _Nullable)motherName spouseName:(NSString * _Nullable)spouseName oldId:(NSString * _Nullable)oldId imageFace:(NSString * _Nullable)imageFace mrz:(NSString * _Nullable)mrz sdkStatus:(NSString * _Nullable)sdkStatus transactionId:(NSString * _Nullable)transactionId corporateCode:(NSString * _Nullable)corporateCode com:(NSString * _Nullable)com sod:(NSString * _Nullable)sod dg1:(NSString * _Nullable)dg1 dg2:(NSString * _Nullable)dg2 dg3:(NSString * _Nullable)dg3 dg4:(NSString * _Nullable)dg4 dg5:(NSString * _Nullable)dg5 dg6:(NSString * _Nullable)dg6 dg7:(NSString * _Nullable)dg7 dg8:(NSString * _Nullable)dg8 dg9:(NSString * _Nullable)dg9 dg10:(NSString * _Nullable)dg10 dg11:(NSString * _Nullable)dg11 dg12:(NSString * _Nullable)dg12 dg13:(NSString * _Nullable)dg13 dg14:(NSString * _Nullable)dg14 dg15:(NSString * _Nullable)dg15 __attribute__((swift_name("doCopy(finOSApiKey:gwRequestId:deviceType:idNumber:name:dob:gender:nationality:ethnic:religion:homeTown:permanentAddress:features:doi:doe:fatherName:motherName:spouseName:oldId:imageFace:mrz:sdkStatus:transactionId:corporateCode:com:sod:dg1:dg2:dg3:dg4:dg5:dg6:dg7:dg8:dg9:dg10:dg11:dg12:dg13:dg14:dg15:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="com")
*/
@property (readonly) NSString * _Nullable com __attribute__((swift_name("com")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="corporateCode")
*/
@property (readonly) NSString * _Nullable corporateCode __attribute__((swift_name("corporateCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceType")
*/
@property (readonly) NSString * _Nullable deviceType __attribute__((swift_name("deviceType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg1")
*/
@property (readonly) NSString * _Nullable dg1 __attribute__((swift_name("dg1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg10")
*/
@property (readonly) NSString * _Nullable dg10 __attribute__((swift_name("dg10")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg11")
*/
@property (readonly) NSString * _Nullable dg11 __attribute__((swift_name("dg11")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg12")
*/
@property (readonly) NSString * _Nullable dg12 __attribute__((swift_name("dg12")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg13")
*/
@property (readonly) NSString * _Nullable dg13 __attribute__((swift_name("dg13")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg14")
*/
@property (readonly) NSString * _Nullable dg14 __attribute__((swift_name("dg14")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg15")
*/
@property (readonly) NSString * _Nullable dg15 __attribute__((swift_name("dg15")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg2")
*/
@property (readonly) NSString * _Nullable dg2 __attribute__((swift_name("dg2")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg3")
*/
@property (readonly) NSString * _Nullable dg3 __attribute__((swift_name("dg3")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg4")
*/
@property (readonly) NSString * _Nullable dg4 __attribute__((swift_name("dg4")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg5")
*/
@property (readonly) NSString * _Nullable dg5 __attribute__((swift_name("dg5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg6")
*/
@property (readonly) NSString * _Nullable dg6 __attribute__((swift_name("dg6")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg7")
*/
@property (readonly) NSString * _Nullable dg7 __attribute__((swift_name("dg7")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg8")
*/
@property (readonly) NSString * _Nullable dg8 __attribute__((swift_name("dg8")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg9")
*/
@property (readonly) NSString * _Nullable dg9 __attribute__((swift_name("dg9")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dob")
*/
@property (readonly) NSString * _Nullable dob __attribute__((swift_name("dob")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doe")
*/
@property (readonly) NSString * _Nullable doe __attribute__((swift_name("doe")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doi")
*/
@property (readonly) NSString * _Nullable doi __attribute__((swift_name("doi")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ethnic")
*/
@property (readonly) NSString * _Nullable ethnic __attribute__((swift_name("ethnic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fatherName")
*/
@property (readonly) NSString * _Nullable fatherName __attribute__((swift_name("fatherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="features")
*/
@property (readonly) NSString * _Nullable features __attribute__((swift_name("features")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="finOSApiKey")
*/
@property (readonly) NSString * _Nullable finOSApiKey __attribute__((swift_name("finOSApiKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gwRequestId")
*/
@property (readonly) NSString * _Nullable gwRequestId __attribute__((swift_name("gwRequestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="homeTown")
*/
@property (readonly) NSString * _Nullable homeTown __attribute__((swift_name("homeTown")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idNumber")
*/
@property (readonly) NSString * _Nullable idNumber __attribute__((swift_name("idNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="imageFace")
*/
@property (readonly) NSString * _Nullable imageFace __attribute__((swift_name("imageFace")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="motherName")
*/
@property (readonly) NSString * _Nullable motherName __attribute__((swift_name("motherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mrz")
*/
@property (readonly) NSString * _Nullable mrz __attribute__((swift_name("mrz")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationality")
*/
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="oldId")
*/
@property (readonly) NSString * _Nullable oldId __attribute__((swift_name("oldId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="permanentAddress")
*/
@property (readonly) NSString * _Nullable permanentAddress __attribute__((swift_name("permanentAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="religion")
*/
@property (readonly) NSString * _Nullable religion __attribute__((swift_name("religion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sdkStatus")
*/
@property (readonly) NSString * _Nullable sdkStatus __attribute__((swift_name("sdkStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sod")
*/
@property (readonly) NSString * _Nullable sod __attribute__((swift_name("sod")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spouseName")
*/
@property (readonly) NSString * _Nullable spouseName __attribute__((swift_name("spouseName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuditNfcRequest.Companion")))
@interface SharedAuditNfcRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAuditNfcRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckC06Request")))
@interface SharedCheckC06Request : SharedBase
- (instancetype)initWithDeviceType:(NSString * _Nullable)deviceType sod:(NSString * _Nullable)sod idCardNumber:(NSString * _Nullable)idCardNumber recentLocation:(NSString * _Nullable)recentLocation __attribute__((swift_name("init(deviceType:sod:idCardNumber:recentLocation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckC06RequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckC06Request *)doCopyDeviceType:(NSString * _Nullable)deviceType sod:(NSString * _Nullable)sod idCardNumber:(NSString * _Nullable)idCardNumber recentLocation:(NSString * _Nullable)recentLocation __attribute__((swift_name("doCopy(deviceType:sod:idCardNumber:recentLocation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceType")
*/
@property (readonly) NSString * _Nullable deviceType __attribute__((swift_name("deviceType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idCardNumber")
*/
@property (readonly) NSString * _Nullable idCardNumber __attribute__((swift_name("idCardNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recentLocation")
*/
@property (readonly) NSString * _Nullable recentLocation __attribute__((swift_name("recentLocation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sod")
*/
@property (readonly) NSString * _Nullable sod __attribute__((swift_name("sod")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckC06Request.Companion")))
@interface SharedCheckC06RequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckC06RequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResendOtpRequest")))
@interface SharedResendOtpRequest : SharedBase
- (instancetype)initWithRequestId:(NSString *)requestId __attribute__((swift_name("init(requestId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedResendOtpRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedResendOtpRequest *)doCopyRequestId:(NSString *)requestId __attribute__((swift_name("doCopy(requestId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResendOtpRequest.Companion")))
@interface SharedResendOtpRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResendOtpRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendOtpRequest")))
@interface SharedSendOtpRequest : SharedBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber purpose:(NSString *)purpose referenceId:(NSString *)referenceId __attribute__((swift_name("init(phoneNumber:purpose:referenceId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSendOtpRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedSendOtpRequest *)doCopyPhoneNumber:(NSString *)phoneNumber purpose:(NSString *)purpose referenceId:(NSString *)referenceId __attribute__((swift_name("doCopy(phoneNumber:purpose:referenceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="purpose")
*/
@property (readonly) NSString *purpose __attribute__((swift_name("purpose")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="referenceId")
*/
@property (readonly) NSString *referenceId __attribute__((swift_name("referenceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendOtpRequest.Companion")))
@interface SharedSendOtpRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSendOtpRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyOtpRequest")))
@interface SharedVerifyOtpRequest : SharedBase
- (instancetype)initWithRequestId:(NSString *)requestId otpCode:(NSString *)otpCode __attribute__((swift_name("init(requestId:otpCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedVerifyOtpRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedVerifyOtpRequest *)doCopyRequestId:(NSString *)requestId otpCode:(NSString *)otpCode __attribute__((swift_name("doCopy(requestId:otpCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="otpCode")
*/
@property (readonly) NSString *otpCode __attribute__((swift_name("otpCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyOtpRequest.Companion")))
@interface SharedVerifyOtpRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedVerifyOtpRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("BaseResponse")))
@interface SharedBaseResponse : SharedBase
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error __attribute__((swift_name("init(requestId:status:statusCode:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 requestId:(NSString * _Nullable)requestId status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:requestId:status:statusCode:error:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedBaseResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseResponse.Companion")))
@interface SharedBaseResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBaseResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckC06Response")))
@interface SharedCheckC06Response : SharedBaseResponse
- (instancetype)initWithResCode:(NSString * _Nullable)resCode resData:(SharedCheckC06ResponseC06CheckResult * _Nullable)resData resMessage:(NSString * _Nullable)resMessage __attribute__((swift_name("init(resCode:resData:resMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error __attribute__((swift_name("init(requestId:status:statusCode:error:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 requestId:(NSString * _Nullable)requestId status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:requestId:status:statusCode:error:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedCheckC06ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckC06Response *)doCopyResCode:(NSString * _Nullable)resCode resData:(SharedCheckC06ResponseC06CheckResult * _Nullable)resData resMessage:(NSString * _Nullable)resMessage __attribute__((swift_name("doCopy(resCode:resData:resMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resCode")
*/
@property (readonly) NSString * _Nullable resCode __attribute__((swift_name("resCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resData")
*/
@property (readonly) SharedCheckC06ResponseC06CheckResult * _Nullable resData __attribute__((swift_name("resData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resMessage")
*/
@property (readonly) NSString * _Nullable resMessage __attribute__((swift_name("resMessage")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckC06Response.C06CheckResult")))
@interface SharedCheckC06ResponseC06CheckResult : SharedBase
- (instancetype)initWithRarResponseId:(NSString * _Nullable)rarResponseId signature:(NSString * _Nullable)signature verifyStatus:(SharedBoolean * _Nullable)verifyStatus __attribute__((swift_name("init(rarResponseId:signature:verifyStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckC06ResponseC06CheckResultCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckC06ResponseC06CheckResult *)doCopyRarResponseId:(NSString * _Nullable)rarResponseId signature:(NSString * _Nullable)signature verifyStatus:(SharedBoolean * _Nullable)verifyStatus __attribute__((swift_name("doCopy(rarResponseId:signature:verifyStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rarResponseId")
*/
@property (readonly) NSString * _Nullable rarResponseId __attribute__((swift_name("rarResponseId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="signature")
*/
@property (readonly) NSString * _Nullable signature __attribute__((swift_name("signature")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="verifyStatus")
*/
@property (readonly) SharedBoolean * _Nullable verifyStatus __attribute__((swift_name("verifyStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckC06Response.C06CheckResultCompanion")))
@interface SharedCheckC06ResponseC06CheckResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckC06ResponseC06CheckResultCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckC06Response.Companion")))
@interface SharedCheckC06ResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckC06ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckFaceResponse")))
@interface SharedCheckFaceResponse : SharedBase
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId result:(SharedCheckFaceResponseFaceVerifyResult * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error type:(NSString * _Nullable)type __attribute__((swift_name("init(requestId:result:status:statusCode:error:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckFaceResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckFaceResponse *)doCopyRequestId:(NSString * _Nullable)requestId result:(SharedCheckFaceResponseFaceVerifyResult * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(requestId:result:status:statusCode:error:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) SharedCheckFaceResponseFaceVerifyResult * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckFaceResponse.Companion")))
@interface SharedCheckFaceResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckFaceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckFaceResponse.FaceVerifyResult")))
@interface SharedCheckFaceResponseFaceVerifyResult : SharedBase
- (instancetype)initWithConf:(SharedDouble * _Nullable)conf match:(NSString * _Nullable)match matchScore:(SharedInt * _Nullable)matchScore toBeReviewed:(NSString * _Nullable)toBeReviewed __attribute__((swift_name("init(conf:match:matchScore:toBeReviewed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckFaceResponseFaceVerifyResultCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckFaceResponseFaceVerifyResult *)doCopyConf:(SharedDouble * _Nullable)conf match:(NSString * _Nullable)match matchScore:(SharedInt * _Nullable)matchScore toBeReviewed:(NSString * _Nullable)toBeReviewed __attribute__((swift_name("doCopy(conf:match:matchScore:toBeReviewed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conf")
*/
@property (readonly) SharedDouble * _Nullable conf __attribute__((swift_name("conf")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="match")
*/
@property (readonly) NSString * _Nullable match __attribute__((swift_name("match")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="match_score")
*/
@property (readonly) SharedInt * _Nullable matchScore __attribute__((swift_name("matchScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="to-be-reviewed")
*/
@property (readonly) NSString * _Nullable toBeReviewed __attribute__((swift_name("toBeReviewed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckFaceResponse.FaceVerifyResultCompanion")))
@interface SharedCheckFaceResponseFaceVerifyResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckFaceResponseFaceVerifyResultCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse")))
@interface SharedCheckLivenessResponse : SharedBase
- (instancetype)initWithMetadata:(SharedCheckLivenessResponseMetadata * _Nullable)metadata result:(SharedCheckLivenessResponseLivenessCheckResult * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("init(metadata:result:status:statusCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckLivenessResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckLivenessResponse *)doCopyMetadata:(SharedCheckLivenessResponseMetadata * _Nullable)metadata result:(SharedCheckLivenessResponseLivenessCheckResult * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("doCopy(metadata:result:status:statusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="metadata")
*/
@property (readonly) SharedCheckLivenessResponseMetadata * _Nullable metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) SharedCheckLivenessResponseLivenessCheckResult * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.Companion")))
@interface SharedCheckLivenessResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckLivenessResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.LivenessCheckResult")))
@interface SharedCheckLivenessResponseLivenessCheckResult : SharedBase
- (instancetype)initWithDetails:(SharedCheckLivenessResponseLivenessCheckResultDetails * _Nullable)details summary:(SharedCheckSummaryResponse * _Nullable)summary __attribute__((swift_name("init(details:summary:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckLivenessResponseLivenessCheckResultCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckLivenessResponseLivenessCheckResult *)doCopyDetails:(SharedCheckLivenessResponseLivenessCheckResultDetails * _Nullable)details summary:(SharedCheckSummaryResponse * _Nullable)summary __attribute__((swift_name("doCopy(details:summary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="details")
*/
@property (readonly) SharedCheckLivenessResponseLivenessCheckResultDetails * _Nullable details __attribute__((swift_name("details")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property (readonly) SharedCheckSummaryResponse * _Nullable summary __attribute__((swift_name("summary")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.LivenessCheckResultCompanion")))
@interface SharedCheckLivenessResponseLivenessCheckResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckLivenessResponseLivenessCheckResultCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.LivenessCheckResultDetails")))
@interface SharedCheckLivenessResponseLivenessCheckResultDetails : SharedBase
- (instancetype)initWithAgeRange:(SharedCommonFieldWithRange * _Nullable)ageRange liveFace:(SharedCommonField * _Nullable)liveFace qualityChecks:(SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecks * _Nullable)qualityChecks __attribute__((swift_name("init(ageRange:liveFace:qualityChecks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckLivenessResponseLivenessCheckResultDetailsCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckLivenessResponseLivenessCheckResultDetails *)doCopyAgeRange:(SharedCommonFieldWithRange * _Nullable)ageRange liveFace:(SharedCommonField * _Nullable)liveFace qualityChecks:(SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecks * _Nullable)qualityChecks __attribute__((swift_name("doCopy(ageRange:liveFace:qualityChecks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ageRange")
*/
@property (readonly) SharedCommonFieldWithRange * _Nullable ageRange __attribute__((swift_name("ageRange")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liveFace")
*/
@property (readonly) SharedCommonField * _Nullable liveFace __attribute__((swift_name("liveFace")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="qualityChecks")
*/
@property (readonly) SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecks * _Nullable qualityChecks __attribute__((swift_name("qualityChecks")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.LivenessCheckResultDetailsCompanion")))
@interface SharedCheckLivenessResponseLivenessCheckResultDetailsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckLivenessResponseLivenessCheckResultDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.LivenessCheckResultDetailsQualityChecks")))
@interface SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecks : SharedBase
- (instancetype)initWithBlur:(SharedCommonField * _Nullable)blur bright:(SharedCommonField * _Nullable)bright dull:(SharedCommonField * _Nullable)dull eyesClosed:(SharedCommonField * _Nullable)eyesClosed eyewear:(SharedCommonField * _Nullable)eyewear faceOccluded:(SharedCommonField * _Nullable)faceOccluded hat:(SharedCommonField * _Nullable)hat headTurned:(SharedCommonField * _Nullable)headTurned maskPresent:(SharedCommonField * _Nullable)maskPresent multipleFaces:(SharedCommonField * _Nullable)multipleFaces nudity:(SharedCommonField * _Nullable)nudity readingGlasses:(SharedCommonField * _Nullable)readingGlasses sunglasses:(SharedCommonField * _Nullable)sunglasses __attribute__((swift_name("init(blur:bright:dull:eyesClosed:eyewear:faceOccluded:hat:headTurned:maskPresent:multipleFaces:nudity:readingGlasses:sunglasses:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecksCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecks *)doCopyBlur:(SharedCommonField * _Nullable)blur bright:(SharedCommonField * _Nullable)bright dull:(SharedCommonField * _Nullable)dull eyesClosed:(SharedCommonField * _Nullable)eyesClosed eyewear:(SharedCommonField * _Nullable)eyewear faceOccluded:(SharedCommonField * _Nullable)faceOccluded hat:(SharedCommonField * _Nullable)hat headTurned:(SharedCommonField * _Nullable)headTurned maskPresent:(SharedCommonField * _Nullable)maskPresent multipleFaces:(SharedCommonField * _Nullable)multipleFaces nudity:(SharedCommonField * _Nullable)nudity readingGlasses:(SharedCommonField * _Nullable)readingGlasses sunglasses:(SharedCommonField * _Nullable)sunglasses __attribute__((swift_name("doCopy(blur:bright:dull:eyesClosed:eyewear:faceOccluded:hat:headTurned:maskPresent:multipleFaces:nudity:readingGlasses:sunglasses:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blur")
*/
@property (readonly) SharedCommonField * _Nullable blur __attribute__((swift_name("blur")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bright")
*/
@property (readonly) SharedCommonField * _Nullable bright __attribute__((swift_name("bright")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dull")
*/
@property (readonly) SharedCommonField * _Nullable dull __attribute__((swift_name("dull")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eyesClosed")
*/
@property (readonly) SharedCommonField * _Nullable eyesClosed __attribute__((swift_name("eyesClosed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eyewear")
*/
@property (readonly) SharedCommonField * _Nullable eyewear __attribute__((swift_name("eyewear")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="faceOccluded")
*/
@property (readonly) SharedCommonField * _Nullable faceOccluded __attribute__((swift_name("faceOccluded")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hat")
*/
@property (readonly) SharedCommonField * _Nullable hat __attribute__((swift_name("hat")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="headTurned")
*/
@property (readonly) SharedCommonField * _Nullable headTurned __attribute__((swift_name("headTurned")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="maskPresent")
*/
@property (readonly) SharedCommonField * _Nullable maskPresent __attribute__((swift_name("maskPresent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="multipleFaces")
*/
@property (readonly) SharedCommonField * _Nullable multipleFaces __attribute__((swift_name("multipleFaces")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nudity")
*/
@property (readonly) SharedCommonField * _Nullable nudity __attribute__((swift_name("nudity")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="readingGlasses")
*/
@property (readonly) SharedCommonField * _Nullable readingGlasses __attribute__((swift_name("readingGlasses")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sunglasses")
*/
@property (readonly) SharedCommonField * _Nullable sunglasses __attribute__((swift_name("sunglasses")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.LivenessCheckResultDetailsQualityChecksCompanion")))
@interface SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecksCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckLivenessResponseLivenessCheckResultDetailsQualityChecksCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.Metadata")))
@interface SharedCheckLivenessResponseMetadata : SharedBase
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(requestId:transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckLivenessResponseMetadataCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckLivenessResponseMetadata *)doCopyRequestId:(NSString * _Nullable)requestId transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(requestId:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckLivenessResponse.MetadataCompanion")))
@interface SharedCheckLivenessResponseMetadataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckLivenessResponseMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse")))
@interface SharedCheckOcrResponse : SharedBase
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId result:(SharedCheckOcrResponseOcrCheckResult * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("init(requestId:result:status:statusCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponse *)doCopyRequestId:(NSString * _Nullable)requestId result:(SharedCheckOcrResponseOcrCheckResult * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("doCopy(requestId:result:status:statusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResult * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.Companion")))
@interface SharedCheckOcrResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResult")))
@interface SharedCheckOcrResponseOcrCheckResult : SharedBase
- (instancetype)initWithDetails:(NSArray<id> * _Nullable)details summary:(SharedCheckSummaryResponse * _Nullable)summary __attribute__((swift_name("init(details:summary:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResult *)doCopyDetails:(NSArray<id> * _Nullable)details summary:(SharedCheckSummaryResponse * _Nullable)summary __attribute__((swift_name("doCopy(details:summary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="details")
*/
@property (readonly) NSArray<id> * _Nullable details __attribute__((swift_name("details")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property (readonly) SharedCheckSummaryResponse * _Nullable summary __attribute__((swift_name("summary")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetail")))
@interface SharedCheckOcrResponseOcrCheckResultDetail : SharedBase
- (instancetype)initWithFieldsExtracted:(SharedCheckOcrResponseOcrCheckResultDetailFieldsExtracted * _Nullable)fieldsExtracted forgeryChecks:(SharedCheckOcrResponseOcrCheckResultDetailForgeryChecks * _Nullable)forgeryChecks qualityChecks:(SharedCheckOcrResponseOcrCheckResultDetailQualityChecks * _Nullable)qualityChecks ruleChecks:(SharedCheckOcrResponseOcrCheckResultDetailRuleChecks * _Nullable)ruleChecks tamperChecks:(SharedCheckOcrResponseOcrCheckResultDetailTamperChecks * _Nullable)tamperChecks type:(NSString * _Nullable)type isWrongSide:(NSString * _Nullable)isWrongSide __attribute__((swift_name("init(fieldsExtracted:forgeryChecks:qualityChecks:ruleChecks:tamperChecks:type:isWrongSide:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetail *)doCopyFieldsExtracted:(SharedCheckOcrResponseOcrCheckResultDetailFieldsExtracted * _Nullable)fieldsExtracted forgeryChecks:(SharedCheckOcrResponseOcrCheckResultDetailForgeryChecks * _Nullable)forgeryChecks qualityChecks:(SharedCheckOcrResponseOcrCheckResultDetailQualityChecks * _Nullable)qualityChecks ruleChecks:(SharedCheckOcrResponseOcrCheckResultDetailRuleChecks * _Nullable)ruleChecks tamperChecks:(SharedCheckOcrResponseOcrCheckResultDetailTamperChecks * _Nullable)tamperChecks type:(NSString * _Nullable)type isWrongSide:(NSString * _Nullable)isWrongSide __attribute__((swift_name("doCopy(fieldsExtracted:forgeryChecks:qualityChecks:ruleChecks:tamperChecks:type:isWrongSide:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fieldsExtracted")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtracted * _Nullable fieldsExtracted __attribute__((swift_name("fieldsExtracted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="forgeryChecks")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailForgeryChecks * _Nullable forgeryChecks __attribute__((swift_name("forgeryChecks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isWrongSide")
*/
@property (readonly) NSString * _Nullable isWrongSide __attribute__((swift_name("isWrongSide")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="qualityChecks")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailQualityChecks * _Nullable qualityChecks __attribute__((swift_name("qualityChecks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ruleChecks")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailRuleChecks * _Nullable ruleChecks __attribute__((swift_name("ruleChecks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tamperChecks")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailTamperChecks * _Nullable tamperChecks __attribute__((swift_name("tamperChecks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailFieldsExtracted")))
@interface SharedCheckOcrResponseOcrCheckResultDetailFieldsExtracted : SharedBase
- (instancetype)initWithDob:(SharedCommonField * _Nullable)dob doe:(SharedCommonField * _Nullable)doe doi:(SharedCommonField * _Nullable)doi facePhoto:(SharedCommonField * _Nullable)facePhoto gender:(SharedCommonField * _Nullable)gender homeTown:(SharedCommonField * _Nullable)homeTown idNumber:(SharedCommonField * _Nullable)idNumber mrzString:(SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzString * _Nullable)mrzString name:(SharedCommonField * _Nullable)name nationality:(SharedCommonField * _Nullable)nationality permanentAddress:(SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddress * _Nullable)permanentAddress placeOfIssue:(SharedCommonField * _Nullable)placeOfIssue __attribute__((swift_name("init(dob:doe:doi:facePhoto:gender:homeTown:idNumber:mrzString:name:nationality:permanentAddress:placeOfIssue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailFieldsExtracted *)doCopyDob:(SharedCommonField * _Nullable)dob doe:(SharedCommonField * _Nullable)doe doi:(SharedCommonField * _Nullable)doi facePhoto:(SharedCommonField * _Nullable)facePhoto gender:(SharedCommonField * _Nullable)gender homeTown:(SharedCommonField * _Nullable)homeTown idNumber:(SharedCommonField * _Nullable)idNumber mrzString:(SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzString * _Nullable)mrzString name:(SharedCommonField * _Nullable)name nationality:(SharedCommonField * _Nullable)nationality permanentAddress:(SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddress * _Nullable)permanentAddress placeOfIssue:(SharedCommonField * _Nullable)placeOfIssue __attribute__((swift_name("doCopy(dob:doe:doi:facePhoto:gender:homeTown:idNumber:mrzString:name:nationality:permanentAddress:placeOfIssue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dob")
*/
@property (readonly) SharedCommonField * _Nullable dob __attribute__((swift_name("dob")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doe")
*/
@property (readonly) SharedCommonField * _Nullable doe __attribute__((swift_name("doe")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="doi")
*/
@property (readonly) SharedCommonField * _Nullable doi __attribute__((swift_name("doi")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="facePhoto")
*/
@property (readonly) SharedCommonField * _Nullable facePhoto __attribute__((swift_name("facePhoto")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property (readonly) SharedCommonField * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="homeTown")
*/
@property (readonly) SharedCommonField * _Nullable homeTown __attribute__((swift_name("homeTown")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idNumber")
*/
@property (readonly) SharedCommonField * _Nullable idNumber __attribute__((swift_name("idNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mrzString")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzString * _Nullable mrzString __attribute__((swift_name("mrzString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) SharedCommonField * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationality")
*/
@property (readonly) SharedCommonField * _Nullable nationality __attribute__((swift_name("nationality")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="permanentAddress")
*/
@property (readonly) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddress * _Nullable permanentAddress __attribute__((swift_name("permanentAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="placeOfIssue")
*/
@property (readonly) SharedCommonField * _Nullable placeOfIssue __attribute__((swift_name("placeOfIssue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailFieldsExtractedCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailFieldsExtractedMrzString")))
@interface SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzString : SharedBase
- (instancetype)initWithConfidence:(NSString * _Nullable)confidence dateOfBirth:(NSString * _Nullable)dateOfBirth dateOfExpiry:(NSString * _Nullable)dateOfExpiry fullName:(NSString * _Nullable)fullName gender:(NSString * _Nullable)gender idNumber:(NSString * _Nullable)idNumber nationality:(NSString * _Nullable)nationality score:(SharedInt * _Nullable)score toBeReviewed:(NSString * _Nullable)toBeReviewed value:(NSString * _Nullable)value __attribute__((swift_name("init(confidence:dateOfBirth:dateOfExpiry:fullName:gender:idNumber:nationality:score:toBeReviewed:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzStringCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzString *)doCopyConfidence:(NSString * _Nullable)confidence dateOfBirth:(NSString * _Nullable)dateOfBirth dateOfExpiry:(NSString * _Nullable)dateOfExpiry fullName:(NSString * _Nullable)fullName gender:(NSString * _Nullable)gender idNumber:(NSString * _Nullable)idNumber nationality:(NSString * _Nullable)nationality score:(SharedInt * _Nullable)score toBeReviewed:(NSString * _Nullable)toBeReviewed value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(confidence:dateOfBirth:dateOfExpiry:fullName:gender:idNumber:nationality:score:toBeReviewed:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confidence")
*/
@property (readonly) NSString * _Nullable confidence __attribute__((swift_name("confidence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateOfBirth")
*/
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateOfExpiry")
*/
@property (readonly) NSString * _Nullable dateOfExpiry __attribute__((swift_name("dateOfExpiry")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fullName")
*/
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gender")
*/
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idNumber")
*/
@property (readonly) NSString * _Nullable idNumber __attribute__((swift_name("idNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationality")
*/
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="score")
*/
@property (readonly) SharedInt * _Nullable score __attribute__((swift_name("score")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="to-be-reviewed")
*/
@property (readonly) NSString * _Nullable toBeReviewed __attribute__((swift_name("toBeReviewed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailFieldsExtractedMrzStringCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedMrzStringCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailFieldsExtractedPermanentAddress")))
@interface SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddress : SharedBase
- (instancetype)initWithConfidence:(NSString * _Nullable)confidence district:(NSString * _Nullable)district province:(NSString * _Nullable)province score:(SharedInt * _Nullable)score street:(NSString * _Nullable)street ward:(NSString * _Nullable)ward toBeReviewed:(NSString * _Nullable)toBeReviewed value:(NSString * _Nullable)value __attribute__((swift_name("init(confidence:district:province:score:street:ward:toBeReviewed:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddressCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddress *)doCopyConfidence:(NSString * _Nullable)confidence district:(NSString * _Nullable)district province:(NSString * _Nullable)province score:(SharedInt * _Nullable)score street:(NSString * _Nullable)street ward:(NSString * _Nullable)ward toBeReviewed:(NSString * _Nullable)toBeReviewed value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(confidence:district:province:score:street:ward:toBeReviewed:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confidence")
*/
@property (readonly) NSString * _Nullable confidence __attribute__((swift_name("confidence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="district")
*/
@property (readonly) NSString * _Nullable district __attribute__((swift_name("district")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="province")
*/
@property (readonly) NSString * _Nullable province __attribute__((swift_name("province")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="score")
*/
@property (readonly) SharedInt * _Nullable score __attribute__((swift_name("score")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="street")
*/
@property (readonly) NSString * _Nullable street __attribute__((swift_name("street")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="to-be-reviewed")
*/
@property (readonly) NSString * _Nullable toBeReviewed __attribute__((swift_name("toBeReviewed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ward")
*/
@property (readonly) NSString * _Nullable ward __attribute__((swift_name("ward")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailFieldsExtractedPermanentAddressCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddressCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailFieldsExtractedPermanentAddressCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailForgeryChecks")))
@interface SharedCheckOcrResponseOcrCheckResultDetailForgeryChecks : SharedBase
- (instancetype)initWithColorPrintout:(SharedCommonField * _Nullable)colorPrintout digitalText:(SharedCommonField * _Nullable)digitalText facePhoto:(SharedCommonField * _Nullable)facePhoto physicalText:(SharedCommonField * _Nullable)physicalText __attribute__((swift_name("init(colorPrintout:digitalText:facePhoto:physicalText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailForgeryChecksCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailForgeryChecks *)doCopyColorPrintout:(SharedCommonField * _Nullable)colorPrintout digitalText:(SharedCommonField * _Nullable)digitalText facePhoto:(SharedCommonField * _Nullable)facePhoto physicalText:(SharedCommonField * _Nullable)physicalText __attribute__((swift_name("doCopy(colorPrintout:digitalText:facePhoto:physicalText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="colorPrintout")
*/
@property (readonly) SharedCommonField * _Nullable colorPrintout __attribute__((swift_name("colorPrintout")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="digitalText")
*/
@property (readonly) SharedCommonField * _Nullable digitalText __attribute__((swift_name("digitalText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="facePhoto")
*/
@property (readonly) SharedCommonField * _Nullable facePhoto __attribute__((swift_name("facePhoto")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="physicalText")
*/
@property (readonly) SharedCommonField * _Nullable physicalText __attribute__((swift_name("physicalText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailForgeryChecksCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailForgeryChecksCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailForgeryChecksCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailQualityChecks")))
@interface SharedCheckOcrResponseOcrCheckResultDetailQualityChecks : SharedBase
- (instancetype)initWithBlackAndWhite:(SharedCommonField * _Nullable)blackAndWhite blur:(SharedCommonField * _Nullable)blur capturedFromScreen:(SharedCommonField * _Nullable)capturedFromScreen faceNotDetected:(SharedCommonField * _Nullable)faceNotDetected glare:(SharedCommonField * _Nullable)glare partialId:(SharedCommonField * _Nullable)partialId __attribute__((swift_name("init(blackAndWhite:blur:capturedFromScreen:faceNotDetected:glare:partialId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailQualityChecksCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailQualityChecks *)doCopyBlackAndWhite:(SharedCommonField * _Nullable)blackAndWhite blur:(SharedCommonField * _Nullable)blur capturedFromScreen:(SharedCommonField * _Nullable)capturedFromScreen faceNotDetected:(SharedCommonField * _Nullable)faceNotDetected glare:(SharedCommonField * _Nullable)glare partialId:(SharedCommonField * _Nullable)partialId __attribute__((swift_name("doCopy(blackAndWhite:blur:capturedFromScreen:faceNotDetected:glare:partialId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blackAndWhite")
*/
@property (readonly) SharedCommonField * _Nullable blackAndWhite __attribute__((swift_name("blackAndWhite")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blur")
*/
@property (readonly) SharedCommonField * _Nullable blur __attribute__((swift_name("blur")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="capturedFromScreen")
*/
@property (readonly) SharedCommonField * _Nullable capturedFromScreen __attribute__((swift_name("capturedFromScreen")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="faceNotDetected")
*/
@property (readonly) SharedCommonField * _Nullable faceNotDetected __attribute__((swift_name("faceNotDetected")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="glare")
*/
@property (readonly) SharedCommonField * _Nullable glare __attribute__((swift_name("glare")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="partialId")
*/
@property (readonly) SharedCommonField * _Nullable partialId __attribute__((swift_name("partialId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailQualityChecksCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailQualityChecksCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailQualityChecksCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailRuleChecks")))
@interface SharedCheckOcrResponseOcrCheckResultDetailRuleChecks : SharedBase
- (instancetype)initWithIdDOBGenderCodeInvalid:(SharedCommonField * _Nullable)idDOBGenderCodeInvalid idProvinceCodeInvalid:(SharedCommonField * _Nullable)idProvinceCodeInvalid expiredID:(SharedCommonField * _Nullable)expiredID idNumberLengthMismatch:(SharedCommonField * _Nullable)idNumberLengthMismatch __attribute__((swift_name("init(idDOBGenderCodeInvalid:idProvinceCodeInvalid:expiredID:idNumberLengthMismatch:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailRuleChecksCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailRuleChecks *)doCopyIdDOBGenderCodeInvalid:(SharedCommonField * _Nullable)idDOBGenderCodeInvalid idProvinceCodeInvalid:(SharedCommonField * _Nullable)idProvinceCodeInvalid expiredID:(SharedCommonField * _Nullable)expiredID idNumberLengthMismatch:(SharedCommonField * _Nullable)idNumberLengthMismatch __attribute__((swift_name("doCopy(idDOBGenderCodeInvalid:idProvinceCodeInvalid:expiredID:idNumberLengthMismatch:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiredID")
*/
@property (readonly) SharedCommonField * _Nullable expiredID __attribute__((swift_name("expiredID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idDOBGenderCodeInvalid")
*/
@property (readonly) SharedCommonField * _Nullable idDOBGenderCodeInvalid __attribute__((swift_name("idDOBGenderCodeInvalid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idNumberLengthMismatch")
*/
@property (readonly) SharedCommonField * _Nullable idNumberLengthMismatch __attribute__((swift_name("idNumberLengthMismatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idProvinceCodeInvalid")
*/
@property (readonly) SharedCommonField * _Nullable idProvinceCodeInvalid __attribute__((swift_name("idProvinceCodeInvalid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailRuleChecksCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailRuleChecksCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailRuleChecksCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailTamperChecks")))
@interface SharedCheckOcrResponseOcrCheckResultDetailTamperChecks : SharedBase
- (instancetype)initWithPhotoTampered:(SharedCommonField * _Nullable)photoTampered __attribute__((swift_name("init(photoTampered:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckOcrResponseOcrCheckResultDetailTamperChecksCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckOcrResponseOcrCheckResultDetailTamperChecks *)doCopyPhotoTampered:(SharedCommonField * _Nullable)photoTampered __attribute__((swift_name("doCopy(photoTampered:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="photoTampered")
*/
@property (readonly) SharedCommonField * _Nullable photoTampered __attribute__((swift_name("photoTampered")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckOcrResponse.OcrCheckResultDetailTamperChecksCompanion")))
@interface SharedCheckOcrResponseOcrCheckResultDetailTamperChecksCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckOcrResponseOcrCheckResultDetailTamperChecksCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckSummaryResponse")))
@interface SharedCheckSummaryResponse : SharedBase
- (instancetype)initWithAction:(NSString * _Nullable)action details:(NSArray<id> * _Nullable)details __attribute__((swift_name("init(action:details:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckSummaryResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckSummaryResponse *)doCopyAction:(NSString * _Nullable)action details:(NSArray<id> * _Nullable)details __attribute__((swift_name("doCopy(action:details:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="action")
*/
@property (readonly) NSString * _Nullable action __attribute__((swift_name("action")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="details")
*/
@property (readonly) NSArray<id> * _Nullable details __attribute__((swift_name("details")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckSummaryResponse.Companion")))
@interface SharedCheckSummaryResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckSummaryResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckSummaryResponse.Detail")))
@interface SharedCheckSummaryResponseDetail : SharedBase <SharedEKYCSummaryDetail>
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCheckSummaryResponseDetailCompanion *companion __attribute__((swift_name("companion")));
- (SharedCheckSummaryResponseDetail *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
*/
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckSummaryResponse.DetailCompanion")))
@interface SharedCheckSummaryResponseDetailCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCheckSummaryResponseDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonField")))
@interface SharedCommonField : SharedBase
- (instancetype)initWithConfidence:(NSString * _Nullable)confidence score:(SharedInt * _Nullable)score value:(NSString * _Nullable)value toBeReviewed:(NSString * _Nullable)toBeReviewed daysToExpiry:(SharedInt * _Nullable)daysToExpiry __attribute__((swift_name("init(confidence:score:value:toBeReviewed:daysToExpiry:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCommonFieldCompanion *companion __attribute__((swift_name("companion")));
- (SharedCommonField *)doCopyConfidence:(NSString * _Nullable)confidence score:(SharedInt * _Nullable)score value:(NSString * _Nullable)value toBeReviewed:(NSString * _Nullable)toBeReviewed daysToExpiry:(SharedInt * _Nullable)daysToExpiry __attribute__((swift_name("doCopy(confidence:score:value:toBeReviewed:daysToExpiry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confidence")
*/
@property (readonly) NSString * _Nullable confidence __attribute__((swift_name("confidence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="daysToExpiry")
*/
@property (readonly) SharedInt * _Nullable daysToExpiry __attribute__((swift_name("daysToExpiry")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="score")
*/
@property (readonly) SharedInt * _Nullable score __attribute__((swift_name("score")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="to-be-reviewed")
*/
@property (readonly) NSString * _Nullable toBeReviewed __attribute__((swift_name("toBeReviewed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonField.Companion")))
@interface SharedCommonFieldCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCommonFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFieldWithRange")))
@interface SharedCommonFieldWithRange : SharedBase
- (instancetype)initWithConfidence:(NSString * _Nullable)confidence score:(SharedInt * _Nullable)score value:(NSString * _Nullable)value high:(SharedInt * _Nullable)high low:(SharedInt * _Nullable)low __attribute__((swift_name("init(confidence:score:value:high:low:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCommonFieldWithRangeCompanion *companion __attribute__((swift_name("companion")));
- (SharedCommonFieldWithRange *)doCopyConfidence:(NSString * _Nullable)confidence score:(SharedInt * _Nullable)score value:(NSString * _Nullable)value high:(SharedInt * _Nullable)high low:(SharedInt * _Nullable)low __attribute__((swift_name("doCopy(confidence:score:value:high:low:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confidence")
*/
@property (readonly) NSString * _Nullable confidence __attribute__((swift_name("confidence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="high")
*/
@property (readonly) SharedInt * _Nullable high __attribute__((swift_name("high")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="low")
*/
@property (readonly) SharedInt * _Nullable low __attribute__((swift_name("low")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="score")
*/
@property (readonly) SharedInt * _Nullable score __attribute__((swift_name("score")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFieldWithRange.Companion")))
@interface SharedCommonFieldWithRangeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCommonFieldWithRangeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message")))
@interface SharedMessage : SharedBase
- (instancetype)initWithCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMessageCompanion *companion __attribute__((swift_name("companion")));
- (SharedMessage *)doCopyCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
*/
@property (readonly) NSString *code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Companion")))
@interface SharedMessageCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResendOtpResponse")))
@interface SharedResendOtpResponse : SharedBase
- (instancetype)initWithSuccess:(SharedBoolean * _Nullable)success requestId:(NSString * _Nullable)requestId expiresIn:(SharedInt * _Nullable)expiresIn resendAfter:(SharedInt * _Nullable)resendAfter attemptsRemaining:(SharedInt * _Nullable)attemptsRemaining error:(NSString * _Nullable)error __attribute__((swift_name("init(success:requestId:expiresIn:resendAfter:attemptsRemaining:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedResendOtpResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedResendOtpResponse *)doCopySuccess:(SharedBoolean * _Nullable)success requestId:(NSString * _Nullable)requestId expiresIn:(SharedInt * _Nullable)expiresIn resendAfter:(SharedInt * _Nullable)resendAfter attemptsRemaining:(SharedInt * _Nullable)attemptsRemaining error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(success:requestId:expiresIn:resendAfter:attemptsRemaining:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="attemptsRemaining")
*/
@property (readonly) SharedInt * _Nullable attemptsRemaining __attribute__((swift_name("attemptsRemaining")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiresIn")
*/
@property (readonly) SharedInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resendAfter")
*/
@property (readonly) SharedInt * _Nullable resendAfter __attribute__((swift_name("resendAfter")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="success")
*/
@property (readonly) SharedBoolean * _Nullable success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResendOtpResponse.Companion")))
@interface SharedResendOtpResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResendOtpResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKBaseResponse")))
@interface SharedSDKBaseResponse : SharedBase
- (instancetype)initWithData:(NSString * _Nullable)data messages:(NSArray<SharedMessage *> *)messages __attribute__((swift_name("init(data:messages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSDKBaseResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedSDKBaseResponse *)doCopyData:(NSString * _Nullable)data messages:(NSArray<SharedMessage *> *)messages __attribute__((swift_name("doCopy(data:messages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messages")
*/
@property (readonly) NSArray<SharedMessage *> *messages __attribute__((swift_name("messages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKBaseResponse.Companion")))
@interface SharedSDKBaseResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKBaseResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse")))
@interface SharedSDKListTransactionResponse : SharedBase
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId result:(SharedSDKListTransactionResponseResultWrapper * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("init(requestId:result:status:statusCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSDKListTransactionResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedSDKListTransactionResponse *)doCopyRequestId:(NSString * _Nullable)requestId result:(SharedSDKListTransactionResponseResultWrapper * _Nullable)result status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("doCopy(requestId:result:status:statusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) SharedSDKListTransactionResponseResultWrapper * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.Companion")))
@interface SharedSDKListTransactionResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKListTransactionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.ResultWrapper")))
@interface SharedSDKListTransactionResponseResultWrapper : SharedBase
- (instancetype)initWithDetails:(SharedSDKListTransactionResponseResultWrapperDetails * _Nullable)details __attribute__((swift_name("init(details:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSDKListTransactionResponseResultWrapperCompanion *companion __attribute__((swift_name("companion")));
- (SharedSDKListTransactionResponseResultWrapper *)doCopyDetails:(SharedSDKListTransactionResponseResultWrapperDetails * _Nullable)details __attribute__((swift_name("doCopy(details:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="details")
*/
@property (readonly) SharedSDKListTransactionResponseResultWrapperDetails * _Nullable details __attribute__((swift_name("details")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.ResultWrapperCompanion")))
@interface SharedSDKListTransactionResponseResultWrapperCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKListTransactionResponseResultWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.ResultWrapperDetails")))
@interface SharedSDKListTransactionResponseResultWrapperDetails : SharedBase
- (instancetype)initWithTransactions:(SharedSDKListTransactionResponseResultWrapperDetailsTransactions * _Nullable)transactions __attribute__((swift_name("init(transactions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSDKListTransactionResponseResultWrapperDetailsCompanion *companion __attribute__((swift_name("companion")));
- (SharedSDKListTransactionResponseResultWrapperDetails *)doCopyTransactions:(SharedSDKListTransactionResponseResultWrapperDetailsTransactions * _Nullable)transactions __attribute__((swift_name("doCopy(transactions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactions")
*/
@property (readonly) SharedSDKListTransactionResponseResultWrapperDetailsTransactions * _Nullable transactions __attribute__((swift_name("transactions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.ResultWrapperDetailsCompanion")))
@interface SharedSDKListTransactionResponseResultWrapperDetailsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKListTransactionResponseResultWrapperDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.ResultWrapperDetailsTransactions")))
@interface SharedSDKListTransactionResponseResultWrapperDetailsTransactions : SharedBase
- (instancetype)initWithPage:(SharedInt * _Nullable)page size:(SharedInt * _Nullable)size totalElements:(SharedInt * _Nullable)totalElements totalPages:(SharedInt * _Nullable)totalPages elements:(NSArray<SharedSDKTransactionResponse *> * _Nullable)elements hasMore:(SharedBoolean * _Nullable)hasMore hasPrevious:(SharedBoolean * _Nullable)hasPrevious __attribute__((swift_name("init(page:size:totalElements:totalPages:elements:hasMore:hasPrevious:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSDKListTransactionResponseResultWrapperDetailsTransactionsCompanion *companion __attribute__((swift_name("companion")));
- (SharedSDKListTransactionResponseResultWrapperDetailsTransactions *)doCopyPage:(SharedInt * _Nullable)page size:(SharedInt * _Nullable)size totalElements:(SharedInt * _Nullable)totalElements totalPages:(SharedInt * _Nullable)totalPages elements:(NSArray<SharedSDKTransactionResponse *> * _Nullable)elements hasMore:(SharedBoolean * _Nullable)hasMore hasPrevious:(SharedBoolean * _Nullable)hasPrevious __attribute__((swift_name("doCopy(page:size:totalElements:totalPages:elements:hasMore:hasPrevious:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="elements")
*/
@property (readonly) NSArray<SharedSDKTransactionResponse *> * _Nullable elements __attribute__((swift_name("elements")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hasMore")
*/
@property (readonly) SharedBoolean * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hasPrevious")
*/
@property (readonly) SharedBoolean * _Nullable hasPrevious __attribute__((swift_name("hasPrevious")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page")
*/
@property (readonly) SharedInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="size")
*/
@property (readonly) SharedInt * _Nullable size __attribute__((swift_name("size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalElements")
*/
@property (readonly) SharedInt * _Nullable totalElements __attribute__((swift_name("totalElements")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalPages")
*/
@property (readonly) SharedInt * _Nullable totalPages __attribute__((swift_name("totalPages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKListTransactionResponse.ResultWrapperDetailsTransactionsCompanion")))
@interface SharedSDKListTransactionResponseResultWrapperDetailsTransactionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKListTransactionResponseResultWrapperDetailsTransactionsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKTransactionResponse")))
@interface SharedSDKTransactionResponse : SharedBaseResponse
- (instancetype)initWithId:(NSString * _Nullable)id apiCode:(NSString * _Nullable)apiCode apiId:(NSString * _Nullable)apiId applicationId:(NSString * _Nullable)applicationId customerId:(NSString * _Nullable)customerId externalId:(NSString * _Nullable)externalId imagePath1:(NSString * _Nullable)imagePath1 imagePath2:(NSString * _Nullable)imagePath2 planId:(NSString * _Nullable)planId providerCode:(NSString * _Nullable)providerCode requestTime:(NSString * _Nullable)requestTime transactionId:(NSString * _Nullable)transactionId username:(NSString * _Nullable)username data:(NSString * _Nullable)data customTempData:(id _Nullable)customTempData __attribute__((swift_name("init(id:apiCode:apiId:applicationId:customerId:externalId:imagePath1:imagePath2:planId:providerCode:requestTime:transactionId:username:data:customTempData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error __attribute__((swift_name("init(requestId:status:statusCode:error:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 requestId:(NSString * _Nullable)requestId status:(NSString * _Nullable)status statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:requestId:status:statusCode:error:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSDKTransactionResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedSDKTransactionResponse *)doCopyId:(NSString * _Nullable)id apiCode:(NSString * _Nullable)apiCode apiId:(NSString * _Nullable)apiId applicationId:(NSString * _Nullable)applicationId customerId:(NSString * _Nullable)customerId externalId:(NSString * _Nullable)externalId imagePath1:(NSString * _Nullable)imagePath1 imagePath2:(NSString * _Nullable)imagePath2 planId:(NSString * _Nullable)planId providerCode:(NSString * _Nullable)providerCode requestTime:(NSString * _Nullable)requestTime transactionId:(NSString * _Nullable)transactionId username:(NSString * _Nullable)username data:(NSString * _Nullable)data customTempData:(id _Nullable)customTempData __attribute__((swift_name("doCopy(id:apiCode:apiId:applicationId:customerId:externalId:imagePath1:imagePath2:planId:providerCode:requestTime:transactionId:username:data:customTempData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apiCode")
*/
@property (readonly) NSString * _Nullable apiCode __attribute__((swift_name("apiCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apiId")
*/
@property (readonly) NSString * _Nullable apiId __attribute__((swift_name("apiId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="applicationId")
*/
@property (readonly) NSString * _Nullable applicationId __attribute__((swift_name("applicationId")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property id _Nullable customTempData __attribute__((swift_name("customTempData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customerId")
*/
@property (readonly) NSString * _Nullable customerId __attribute__((swift_name("customerId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="externalId")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="imagePath1")
*/
@property (readonly) NSString * _Nullable imagePath1 __attribute__((swift_name("imagePath1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="imagePath2")
*/
@property (readonly) NSString * _Nullable imagePath2 __attribute__((swift_name("imagePath2")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="planId")
*/
@property (readonly) NSString * _Nullable planId __attribute__((swift_name("planId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="providerCode")
*/
@property (readonly) NSString * _Nullable providerCode __attribute__((swift_name("providerCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestTime")
*/
@property (readonly) NSString * _Nullable requestTime __attribute__((swift_name("requestTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKTransactionResponse.Companion")))
@interface SharedSDKTransactionResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKTransactionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkInitResponse")))
@interface SharedSdkInitResponse : SharedBase
- (instancetype)initWithFinosJwt:(NSString *)finosJwt transactionId:(NSString *)transactionId expiresIn:(int32_t)expiresIn __attribute__((swift_name("init(finosJwt:transactionId:expiresIn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSdkInitResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedSdkInitResponse *)doCopyFinosJwt:(NSString *)finosJwt transactionId:(NSString *)transactionId expiresIn:(int32_t)expiresIn __attribute__((swift_name("doCopy(finosJwt:transactionId:expiresIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiresIn")
*/
@property (readonly) int32_t expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="finosJwt")
*/
@property (readonly) NSString *finosJwt __attribute__((swift_name("finosJwt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkInitResponse.Companion")))
@interface SharedSdkInitResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSdkInitResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendOtpResponse")))
@interface SharedSendOtpResponse : SharedBase
- (instancetype)initWithSuccess:(SharedBoolean * _Nullable)success requestId:(NSString * _Nullable)requestId expiresIn:(SharedInt * _Nullable)expiresIn resendAfter:(SharedInt * _Nullable)resendAfter error:(NSString * _Nullable)error __attribute__((swift_name("init(success:requestId:expiresIn:resendAfter:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSendOtpResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedSendOtpResponse *)doCopySuccess:(SharedBoolean * _Nullable)success requestId:(NSString * _Nullable)requestId expiresIn:(SharedInt * _Nullable)expiresIn resendAfter:(SharedInt * _Nullable)resendAfter error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(success:requestId:expiresIn:resendAfter:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiresIn")
*/
@property (readonly) SharedInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="resendAfter")
*/
@property (readonly) SharedInt * _Nullable resendAfter __attribute__((swift_name("resendAfter")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="success")
*/
@property (readonly) SharedBoolean * _Nullable success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendOtpResponse.Companion")))
@interface SharedSendOtpResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSendOtpResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitLivenessResponse")))
@interface SharedSubmitLivenessResponse : SharedBase
- (instancetype)initWithMessages:(NSArray<id> * _Nullable)messages data:(SharedSubmitLivenessResponseDataPayload * _Nullable)data __attribute__((swift_name("init(messages:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSubmitLivenessResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedSubmitLivenessResponse *)doCopyMessages:(NSArray<id> * _Nullable)messages data:(SharedSubmitLivenessResponseDataPayload * _Nullable)data __attribute__((swift_name("doCopy(messages:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SharedSubmitLivenessResponseDataPayload * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="messages")
*/
@property (readonly) NSArray<id> * _Nullable messages __attribute__((swift_name("messages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitLivenessResponse.Companion")))
@interface SharedSubmitLivenessResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSubmitLivenessResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitLivenessResponse.DataPayload")))
@interface SharedSubmitLivenessResponseDataPayload : SharedBase
- (instancetype)initWithResult:(NSString * _Nullable)result transactionId:(NSString * _Nullable)transactionId requestId:(NSString * _Nullable)requestId __attribute__((swift_name("init(result:transactionId:requestId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSubmitLivenessResponseDataPayloadCompanion *companion __attribute__((swift_name("companion")));
- (SharedSubmitLivenessResponseDataPayload *)doCopyResult:(NSString * _Nullable)result transactionId:(NSString * _Nullable)transactionId requestId:(NSString * _Nullable)requestId __attribute__((swift_name("doCopy(result:transactionId:requestId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requestId")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property (readonly) NSString * _Nullable result __attribute__((swift_name("result")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitLivenessResponse.DataPayloadCompanion")))
@interface SharedSubmitLivenessResponseDataPayloadCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSubmitLivenessResponseDataPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitLivenessResponse.SubmitLivenessMessage")))
@interface SharedSubmitLivenessResponseSubmitLivenessMessage : SharedBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSubmitLivenessResponseSubmitLivenessMessageCompanion *companion __attribute__((swift_name("companion")));
- (SharedSubmitLivenessResponseSubmitLivenessMessage *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
*/
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitLivenessResponse.SubmitLivenessMessageCompanion")))
@interface SharedSubmitLivenessResponseSubmitLivenessMessageCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSubmitLivenessResponseSubmitLivenessMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyOtpResponse")))
@interface SharedVerifyOtpResponse : SharedBase
- (instancetype)initWithSuccess:(SharedBoolean * _Nullable)success verified:(SharedBoolean * _Nullable)verified verifiedAt:(NSString * _Nullable)verifiedAt attemptsRemaining:(SharedInt * _Nullable)attemptsRemaining error:(NSString * _Nullable)error __attribute__((swift_name("init(success:verified:verifiedAt:attemptsRemaining:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedVerifyOtpResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedVerifyOtpResponse *)doCopySuccess:(SharedBoolean * _Nullable)success verified:(SharedBoolean * _Nullable)verified verifiedAt:(NSString * _Nullable)verifiedAt attemptsRemaining:(SharedInt * _Nullable)attemptsRemaining error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(success:verified:verifiedAt:attemptsRemaining:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="attemptsRemaining")
*/
@property (readonly) SharedInt * _Nullable attemptsRemaining __attribute__((swift_name("attemptsRemaining")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="success")
*/
@property (readonly) SharedBoolean * _Nullable success __attribute__((swift_name("success")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="verified")
*/
@property (readonly) SharedBoolean * _Nullable verified __attribute__((swift_name("verified")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="verifiedAt")
*/
@property (readonly) NSString * _Nullable verifiedAt __attribute__((swift_name("verifiedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyOtpResponse.Companion")))
@interface SharedVerifyOtpResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedVerifyOtpResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DG13InfoType")))
@interface SharedDG13InfoType : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedDG13InfoTypeCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DG13InfoType.Companion")))
@interface SharedDG13InfoTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDG13InfoTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t ADDRESS __attribute__((swift_name("ADDRESS")));
@property (readonly) int64_t CARD_NUMBER __attribute__((swift_name("CARD_NUMBER")));
@property (readonly) int64_t CHARACTER __attribute__((swift_name("CHARACTER")));
@property (readonly) int64_t DATE_OF_BIRTH __attribute__((swift_name("DATE_OF_BIRTH")));
@property (readonly) int64_t EXPIRED_DATE __attribute__((swift_name("EXPIRED_DATE")));
@property (readonly) int64_t HOMETOWN __attribute__((swift_name("HOMETOWN")));
@property (readonly) int64_t ISSUE_DATE __attribute__((swift_name("ISSUE_DATE")));
@property (readonly) int64_t NAME __attribute__((swift_name("NAME")));
@property (readonly) int64_t NATION __attribute__((swift_name("NATION")));
@property (readonly) int64_t NATIONALITY __attribute__((swift_name("NATIONALITY")));
@property (readonly) int64_t PARENT __attribute__((swift_name("PARENT")));
@property (readonly) int64_t PARTNER_NAME __attribute__((swift_name("PARTNER_NAME")));
@property (readonly) int64_t PREVIOUS_NUMBER __attribute__((swift_name("PREVIOUS_NUMBER")));
@property (readonly) int64_t RELIGION __attribute__((swift_name("RELIGION")));
@property (readonly) int64_t SEX __attribute__((swift_name("SEX")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NFCData")))
@interface SharedNFCData : SharedBase
- (instancetype)initWithSignature:(NSString * _Nullable)signature certificate:(NSString * _Nullable)certificate sod:(NSString * _Nullable)sod mrz:(NSString * _Nullable)mrz faceImage:(NSString * _Nullable)faceImage cardNumber:(NSString * _Nullable)cardNumber dateOfBirth:(NSString * _Nullable)dateOfBirth issueDate:(NSString * _Nullable)issueDate previousNumber:(NSString * _Nullable)previousNumber name:(NSString * _Nullable)name sex:(NSString * _Nullable)sex nationality:(NSString * _Nullable)nationality nation:(NSString * _Nullable)nation religion:(NSString * _Nullable)religion hometown:(NSString * _Nullable)hometown address:(NSString * _Nullable)address character:(NSString * _Nullable)character expiredDate:(NSString * _Nullable)expiredDate fatherName:(NSString * _Nullable)fatherName motherName:(NSString * _Nullable)motherName partnerName:(NSString * _Nullable)partnerName nfcInfo:(SharedNfcInfo *)nfcInfo __attribute__((swift_name("init(signature:certificate:sod:mrz:faceImage:cardNumber:dateOfBirth:issueDate:previousNumber:name:sex:nationality:nation:religion:hometown:address:character:expiredDate:fatherName:motherName:partnerName:nfcInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedNFCDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="address")
*/
@property NSString * _Nullable address __attribute__((swift_name("address")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardNumber")
*/
@property NSString * _Nullable cardNumber __attribute__((swift_name("cardNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="certificate")
*/
@property NSString * _Nullable certificate __attribute__((swift_name("certificate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="character")
*/
@property NSString * _Nullable character __attribute__((swift_name("character")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dateOfBirth")
*/
@property NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expiredDate")
*/
@property NSString * _Nullable expiredDate __attribute__((swift_name("expiredDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="faceImage")
*/
@property NSString * _Nullable faceImage __attribute__((swift_name("faceImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fatherName")
*/
@property NSString * _Nullable fatherName __attribute__((swift_name("fatherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hometown")
*/
@property NSString * _Nullable hometown __attribute__((swift_name("hometown")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="issueDate")
*/
@property NSString * _Nullable issueDate __attribute__((swift_name("issueDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="motherName")
*/
@property NSString * _Nullable motherName __attribute__((swift_name("motherName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mrz")
*/
@property NSString * _Nullable mrz __attribute__((swift_name("mrz")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nation")
*/
@property NSString * _Nullable nation __attribute__((swift_name("nation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nationality")
*/
@property NSString * _Nullable nationality __attribute__((swift_name("nationality")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nfcInfo")
*/
@property SharedNfcInfo *nfcInfo __attribute__((swift_name("nfcInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="partnerName")
*/
@property NSString * _Nullable partnerName __attribute__((swift_name("partnerName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="previousNumber")
*/
@property NSString * _Nullable previousNumber __attribute__((swift_name("previousNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="religion")
*/
@property NSString * _Nullable religion __attribute__((swift_name("religion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sex")
*/
@property NSString * _Nullable sex __attribute__((swift_name("sex")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="signature")
*/
@property NSString * _Nullable signature __attribute__((swift_name("signature")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sod")
*/
@property NSString * _Nullable sod __attribute__((swift_name("sod")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NFCData.Companion")))
@interface SharedNFCDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNFCDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NfcInfo")))
@interface SharedNfcInfo : SharedBase
- (instancetype)initWithSod:(NSString * _Nullable)sod com:(NSString * _Nullable)com dg1:(NSString * _Nullable)dg1 dg2:(NSString * _Nullable)dg2 dg13:(NSString * _Nullable)dg13 dg14:(NSString * _Nullable)dg14 dg15:(NSString * _Nullable)dg15 __attribute__((swift_name("init(sod:com:dg1:dg2:dg13:dg14:dg15:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedNfcInfoCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="com")
*/
@property NSString * _Nullable com __attribute__((swift_name("com")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg1")
*/
@property NSString * _Nullable dg1 __attribute__((swift_name("dg1")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg13")
*/
@property NSString * _Nullable dg13 __attribute__((swift_name("dg13")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg14")
*/
@property NSString * _Nullable dg14 __attribute__((swift_name("dg14")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg15")
*/
@property NSString * _Nullable dg15 __attribute__((swift_name("dg15")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dg2")
*/
@property NSString * _Nullable dg2 __attribute__((swift_name("dg2")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sod")
*/
@property NSString * _Nullable sod __attribute__((swift_name("sod")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NfcInfo.Companion")))
@interface SharedNfcInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNfcInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppKeyConfig")))
@interface SharedAppKeyConfig : SharedBase
- (instancetype)initWithAppKey:(NSString *)appKey appKeyESign:(NSString * _Nullable)appKeyESign __attribute__((swift_name("init(appKey:appKeyESign:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAppKeyConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedAppKeyConfig *)doCopyAppKey:(NSString *)appKey appKeyESign:(NSString * _Nullable)appKeyESign __attribute__((swift_name("doCopy(appKey:appKeyESign:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appKey __attribute__((swift_name("appKey")));
@property (readonly) NSString * _Nullable appKeyESign __attribute__((swift_name("appKeyESign")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppKeyConfig.Companion")))
@interface SharedAppKeyConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAppKeyConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("C06Config")))
@interface SharedC06Config : SharedBase
- (instancetype)initWithSod:(NSString *)sod idCardNumber:(NSString *)idCardNumber recentLocation:(NSString *)recentLocation transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(sod:idCardNumber:recentLocation:transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedC06ConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedC06Config *)doCopySod:(NSString *)sod idCardNumber:(NSString *)idCardNumber recentLocation:(NSString *)recentLocation transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(sod:idCardNumber:recentLocation:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *idCardNumber __attribute__((swift_name("idCardNumber")));
@property (readonly) NSString *recentLocation __attribute__((swift_name("recentLocation")));
@property (readonly) NSString *sod __attribute__((swift_name("sod")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("C06Config.Companion")))
@interface SharedC06ConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedC06ConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCConfigSDK")))
@interface SharedEKYCConfigSDK : SharedBase
- (instancetype)initWithAppKey:(SharedAppKeyConfig * _Nullable)appKey sdkType:(SharedEkycFlow * _Nullable)sdkType livenessConfig:(SharedLivenessConfig * _Nullable)livenessConfig nfcConfig:(SharedNfcConfig * _Nullable)nfcConfig c06Config:(SharedC06Config * _Nullable)c06Config faceServiceConfig:(SharedFaceServiceConfig * _Nullable)faceServiceConfig ocrConfig:(SharedOcrConfig * _Nullable)ocrConfig optionConfig:(SharedOptionConfig * _Nullable)optionConfig styleConfig:(SharedStyleConfig * _Nullable)styleConfig appIDType:(SharedAppIDType *)appIDType flowSDK:(NSArray<SharedEkycFlow *> *)flowSDK __attribute__((swift_name("init(appKey:sdkType:livenessConfig:nfcConfig:c06Config:faceServiceConfig:ocrConfig:optionConfig:styleConfig:appIDType:flowSDK:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedEKYCConfigSDKCompanion *companion __attribute__((swift_name("companion")));
- (SharedEKYCConfigSDK *)doCopyAppKey:(SharedAppKeyConfig * _Nullable)appKey sdkType:(SharedEkycFlow * _Nullable)sdkType livenessConfig:(SharedLivenessConfig * _Nullable)livenessConfig nfcConfig:(SharedNfcConfig * _Nullable)nfcConfig c06Config:(SharedC06Config * _Nullable)c06Config faceServiceConfig:(SharedFaceServiceConfig * _Nullable)faceServiceConfig ocrConfig:(SharedOcrConfig * _Nullable)ocrConfig optionConfig:(SharedOptionConfig * _Nullable)optionConfig styleConfig:(SharedStyleConfig * _Nullable)styleConfig appIDType:(SharedAppIDType *)appIDType flowSDK:(NSArray<SharedEkycFlow *> *)flowSDK __attribute__((swift_name("doCopy(appKey:sdkType:livenessConfig:nfcConfig:c06Config:faceServiceConfig:ocrConfig:optionConfig:styleConfig:appIDType:flowSDK:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<SharedEkycFlow *> *)getEffectiveFlow __attribute__((swift_name("getEffectiveFlow()")));
- (BOOL)hasNextCurrentIndex:(int32_t)currentIndex __attribute__((swift_name("hasNext(currentIndex:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)indexOfStep:(SharedEkycFlow *)step __attribute__((swift_name("indexOf(step:)")));
- (SharedEkycFlow * _Nullable)nextStepCurrentIndex:(int32_t)currentIndex __attribute__((swift_name("nextStep(currentIndex:)")));
- (SharedEKYCConfigSDK *)setFlowOrderSteps:(SharedKotlinArray<SharedEkycFlow *> *)steps __attribute__((swift_name("setFlowOrder(steps:)")));
- (SharedEKYCConfigSDK *)setFlowOrderSteps_:(NSArray<SharedEkycFlow *> *)steps __attribute__((swift_name("setFlowOrder(steps_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedAppIDType *appIDType __attribute__((swift_name("appIDType")));
@property SharedAppKeyConfig * _Nullable appKey __attribute__((swift_name("appKey")));
@property SharedC06Config * _Nullable c06Config __attribute__((swift_name("c06Config")));
@property SharedFaceServiceConfig * _Nullable faceServiceConfig __attribute__((swift_name("faceServiceConfig")));
@property NSArray<SharedEkycFlow *> *flowSDK __attribute__((swift_name("flowSDK")));
@property (readonly) SharedEkycFlow * _Nullable getEkycFlow __attribute__((swift_name("getEkycFlow")));
@property (readonly) BOOL isC06Enable __attribute__((swift_name("isC06Enable")));
@property (readonly) BOOL isFaceServiceEnable __attribute__((swift_name("isFaceServiceEnable")));
@property (readonly) BOOL isLivenessEnable __attribute__((swift_name("isLivenessEnable")));
@property (readonly) BOOL isNfcEnable __attribute__((swift_name("isNfcEnable")));
@property (readonly) BOOL isOcrEnable __attribute__((swift_name("isOcrEnable")));
@property (readonly) BOOL isQRCodeEnable __attribute__((swift_name("isQRCodeEnable")));
@property SharedLivenessConfig * _Nullable livenessConfig __attribute__((swift_name("livenessConfig")));
@property SharedNfcConfig * _Nullable nfcConfig __attribute__((swift_name("nfcConfig")));
@property SharedOcrConfig * _Nullable ocrConfig __attribute__((swift_name("ocrConfig")));
@property SharedOptionConfig * _Nullable optionConfig __attribute__((swift_name("optionConfig")));
@property SharedEkycFlow * _Nullable sdkType __attribute__((swift_name("sdkType")));
@property SharedStyleConfig * _Nullable styleConfig __attribute__((swift_name("styleConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKYCConfigSDK.Companion")))
@interface SharedEKYCConfigSDKCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKYCConfigSDKCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig")))
@interface SharedExitConfirmConfig : SharedBase
- (instancetype)initWithEnabled:(BOOL)enabled iconProps:(SharedExitConfirmConfigIconProps * _Nullable)iconProps titleProps:(SharedExitConfirmConfigTitleProps * _Nullable)titleProps contentProps:(SharedExitConfirmConfigContentProps * _Nullable)contentProps confirmButtonProps:(SharedExitConfirmConfigButtonProps * _Nullable)confirmButtonProps cancelButtonProps:(SharedExitConfirmConfigButtonProps * _Nullable)cancelButtonProps __attribute__((swift_name("init(enabled:iconProps:titleProps:contentProps:confirmButtonProps:cancelButtonProps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfig *)doCopyEnabled:(BOOL)enabled iconProps:(SharedExitConfirmConfigIconProps * _Nullable)iconProps titleProps:(SharedExitConfirmConfigTitleProps * _Nullable)titleProps contentProps:(SharedExitConfirmConfigContentProps * _Nullable)contentProps confirmButtonProps:(SharedExitConfirmConfigButtonProps * _Nullable)confirmButtonProps cancelButtonProps:(SharedExitConfirmConfigButtonProps * _Nullable)cancelButtonProps __attribute__((swift_name("doCopy(enabled:iconProps:titleProps:contentProps:confirmButtonProps:cancelButtonProps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedExitConfirmConfigButtonProps * _Nullable cancelButtonProps __attribute__((swift_name("cancelButtonProps")));
@property (readonly) SharedExitConfirmConfigButtonProps * _Nullable confirmButtonProps __attribute__((swift_name("confirmButtonProps")));
@property (readonly) SharedExitConfirmConfigContentProps * _Nullable contentProps __attribute__((swift_name("contentProps")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) SharedExitConfirmConfigIconProps * _Nullable iconProps __attribute__((swift_name("iconProps")));
@property (readonly) SharedExitConfirmConfigTitleProps * _Nullable titleProps __attribute__((swift_name("titleProps")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.ButtonProps")))
@interface SharedExitConfirmConfigButtonProps : SharedBase
- (instancetype)initWithButtonTitle:(NSString * _Nullable)buttonTitle buttonTextStyles:(SharedExitConfirmConfigTextStyles * _Nullable)buttonTextStyles buttonStyles:(SharedExitConfirmConfigViewStyle * _Nullable)buttonStyles __attribute__((swift_name("init(buttonTitle:buttonTextStyles:buttonStyles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigButtonPropsCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfigButtonProps *)doCopyButtonTitle:(NSString * _Nullable)buttonTitle buttonTextStyles:(SharedExitConfirmConfigTextStyles * _Nullable)buttonTextStyles buttonStyles:(SharedExitConfirmConfigViewStyle * _Nullable)buttonStyles __attribute__((swift_name("doCopy(buttonTitle:buttonTextStyles:buttonStyles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedExitConfirmConfigViewStyle * _Nullable buttonStyles __attribute__((swift_name("buttonStyles")));
@property (readonly) SharedExitConfirmConfigTextStyles * _Nullable buttonTextStyles __attribute__((swift_name("buttonTextStyles")));
@property (readonly) NSString * _Nullable buttonTitle __attribute__((swift_name("buttonTitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.ButtonPropsCompanion")))
@interface SharedExitConfirmConfigButtonPropsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigButtonPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.Companion")))
@interface SharedExitConfirmConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.ContentProps")))
@interface SharedExitConfirmConfigContentProps : SharedBase
- (instancetype)initWithContent:(NSString * _Nullable)content contentStyles:(SharedExitConfirmConfigTextStyles * _Nullable)contentStyles __attribute__((swift_name("init(content:contentStyles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigContentPropsCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfigContentProps *)doCopyContent:(NSString * _Nullable)content contentStyles:(SharedExitConfirmConfigTextStyles * _Nullable)contentStyles __attribute__((swift_name("doCopy(content:contentStyles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));
@property (readonly) SharedExitConfirmConfigTextStyles * _Nullable contentStyles __attribute__((swift_name("contentStyles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.ContentPropsCompanion")))
@interface SharedExitConfirmConfigContentPropsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigContentPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.GradientOrientation")))
@interface SharedExitConfirmConfigGradientOrientation : SharedKotlinEnum<SharedExitConfirmConfigGradientOrientation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedExitConfirmConfigGradientOrientationCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *leftRight __attribute__((swift_name("leftRight")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *rightLeft __attribute__((swift_name("rightLeft")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *topBottom __attribute__((swift_name("topBottom")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *bottomTop __attribute__((swift_name("bottomTop")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *tlBr __attribute__((swift_name("tlBr")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *trBl __attribute__((swift_name("trBl")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *blTr __attribute__((swift_name("blTr")));
@property (class, readonly) SharedExitConfirmConfigGradientOrientation *brTl __attribute__((swift_name("brTl")));
+ (SharedKotlinArray<SharedExitConfirmConfigGradientOrientation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedExitConfirmConfigGradientOrientation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.GradientOrientationCompanion")))
@interface SharedExitConfirmConfigGradientOrientationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigGradientOrientationCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.IconProps")))
@interface SharedExitConfirmConfigIconProps : SharedBase
- (instancetype)initWithIcon:(SharedInt * _Nullable)icon iconViewStyle:(SharedExitConfirmConfigViewStyle * _Nullable)iconViewStyle __attribute__((swift_name("init(icon:iconViewStyle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigIconPropsCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfigIconProps *)doCopyIcon:(SharedInt * _Nullable)icon iconViewStyle:(SharedExitConfirmConfigViewStyle * _Nullable)iconViewStyle __attribute__((swift_name("doCopy(icon:iconViewStyle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) SharedExitConfirmConfigViewStyle * _Nullable iconViewStyle __attribute__((swift_name("iconViewStyle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.IconPropsCompanion")))
@interface SharedExitConfirmConfigIconPropsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigIconPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.TextStyles")))
@interface SharedExitConfirmConfigTextStyles : SharedBase
- (instancetype)initWithTextColor:(NSString * _Nullable)textColor textSize:(SharedInt * _Nullable)textSize textFont:(NSString * _Nullable)textFont textStyle:(SharedInt * _Nullable)textStyle textAlign:(SharedInt * _Nullable)textAlign __attribute__((swift_name("init(textColor:textSize:textFont:textStyle:textAlign:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigTextStylesCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfigTextStyles *)doCopyTextColor:(NSString * _Nullable)textColor textSize:(SharedInt * _Nullable)textSize textFont:(NSString * _Nullable)textFont textStyle:(SharedInt * _Nullable)textStyle textAlign:(SharedInt * _Nullable)textAlign __attribute__((swift_name("doCopy(textColor:textSize:textFont:textStyle:textAlign:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable textAlign __attribute__((swift_name("textAlign")));
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));
@property (readonly) NSString * _Nullable textFont __attribute__((swift_name("textFont")));
@property (readonly) SharedInt * _Nullable textSize __attribute__((swift_name("textSize")));
@property (readonly) SharedInt * _Nullable textStyle __attribute__((swift_name("textStyle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.TextStylesCompanion")))
@interface SharedExitConfirmConfigTextStylesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigTextStylesCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.TitleProps")))
@interface SharedExitConfirmConfigTitleProps : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title titleStyles:(SharedExitConfirmConfigTextStyles * _Nullable)titleStyles __attribute__((swift_name("init(title:titleStyles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigTitlePropsCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfigTitleProps *)doCopyTitle:(NSString * _Nullable)title titleStyles:(SharedExitConfirmConfigTextStyles * _Nullable)titleStyles __attribute__((swift_name("doCopy(title:titleStyles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) SharedExitConfirmConfigTextStyles * _Nullable titleStyles __attribute__((swift_name("titleStyles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.TitlePropsCompanion")))
@interface SharedExitConfirmConfigTitlePropsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigTitlePropsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.ViewStyle")))
@interface SharedExitConfirmConfigViewStyle : SharedBase
- (instancetype)initWithBackgroundColor:(NSString * _Nullable)backgroundColor backgroundGradientColors:(NSArray<NSString *> * _Nullable)backgroundGradientColors backgroundGradientPositions:(NSArray<SharedFloat *> * _Nullable)backgroundGradientPositions backgroundGradientOrientation:(SharedExitConfirmConfigGradientOrientation * _Nullable)backgroundGradientOrientation width:(SharedInt * _Nullable)width height:(SharedInt * _Nullable)height marginTop:(SharedInt * _Nullable)marginTop marginBottom:(SharedInt * _Nullable)marginBottom marginStart:(SharedInt * _Nullable)marginStart marginEnd:(SharedInt * _Nullable)marginEnd paddingTop:(SharedInt * _Nullable)paddingTop paddingBottom:(SharedInt * _Nullable)paddingBottom paddingStart:(SharedInt * _Nullable)paddingStart paddingEnd:(SharedInt * _Nullable)paddingEnd gravity:(SharedInt * _Nullable)gravity cornerRadius:(SharedFloat * _Nullable)cornerRadius __attribute__((swift_name("init(backgroundColor:backgroundGradientColors:backgroundGradientPositions:backgroundGradientOrientation:width:height:marginTop:marginBottom:marginStart:marginEnd:paddingTop:paddingBottom:paddingStart:paddingEnd:gravity:cornerRadius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedExitConfirmConfigViewStyleCompanion *companion __attribute__((swift_name("companion")));
- (SharedExitConfirmConfigViewStyle *)doCopyBackgroundColor:(NSString * _Nullable)backgroundColor backgroundGradientColors:(NSArray<NSString *> * _Nullable)backgroundGradientColors backgroundGradientPositions:(NSArray<SharedFloat *> * _Nullable)backgroundGradientPositions backgroundGradientOrientation:(SharedExitConfirmConfigGradientOrientation * _Nullable)backgroundGradientOrientation width:(SharedInt * _Nullable)width height:(SharedInt * _Nullable)height marginTop:(SharedInt * _Nullable)marginTop marginBottom:(SharedInt * _Nullable)marginBottom marginStart:(SharedInt * _Nullable)marginStart marginEnd:(SharedInt * _Nullable)marginEnd paddingTop:(SharedInt * _Nullable)paddingTop paddingBottom:(SharedInt * _Nullable)paddingBottom paddingStart:(SharedInt * _Nullable)paddingStart paddingEnd:(SharedInt * _Nullable)paddingEnd gravity:(SharedInt * _Nullable)gravity cornerRadius:(SharedFloat * _Nullable)cornerRadius __attribute__((swift_name("doCopy(backgroundColor:backgroundGradientColors:backgroundGradientPositions:backgroundGradientOrientation:width:height:marginTop:marginBottom:marginStart:marginEnd:paddingTop:paddingBottom:paddingStart:paddingEnd:gravity:cornerRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSArray<NSString *> * _Nullable backgroundGradientColors __attribute__((swift_name("backgroundGradientColors")));
@property (readonly) SharedExitConfirmConfigGradientOrientation * _Nullable backgroundGradientOrientation __attribute__((swift_name("backgroundGradientOrientation")));
@property (readonly) NSArray<SharedFloat *> * _Nullable backgroundGradientPositions __attribute__((swift_name("backgroundGradientPositions")));
@property (readonly) SharedFloat * _Nullable cornerRadius __attribute__((swift_name("cornerRadius")));
@property (readonly) SharedInt * _Nullable gravity __attribute__((swift_name("gravity")));
@property (readonly) SharedInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) SharedInt * _Nullable marginBottom __attribute__((swift_name("marginBottom")));
@property (readonly) SharedInt * _Nullable marginEnd __attribute__((swift_name("marginEnd")));
@property (readonly) SharedInt * _Nullable marginStart __attribute__((swift_name("marginStart")));
@property (readonly) SharedInt * _Nullable marginTop __attribute__((swift_name("marginTop")));
@property (readonly) SharedInt * _Nullable paddingBottom __attribute__((swift_name("paddingBottom")));
@property (readonly) SharedInt * _Nullable paddingEnd __attribute__((swift_name("paddingEnd")));
@property (readonly) SharedInt * _Nullable paddingStart __attribute__((swift_name("paddingStart")));
@property (readonly) SharedInt * _Nullable paddingTop __attribute__((swift_name("paddingTop")));
@property (readonly) SharedInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExitConfirmConfig.ViewStyleCompanion")))
@interface SharedExitConfirmConfigViewStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedExitConfirmConfigViewStyleCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceServiceConfig")))
@interface SharedFaceServiceConfig : SharedBase
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId selfieImagePath:(NSString *)selfieImagePath idImagePath:(NSString *)idImagePath __attribute__((swift_name("init(transactionId:selfieImagePath:idImagePath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFaceServiceConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedFaceServiceConfig *)doCopyTransactionId:(NSString * _Nullable)transactionId selfieImagePath:(NSString *)selfieImagePath idImagePath:(NSString *)idImagePath __attribute__((swift_name("doCopy(transactionId:selfieImagePath:idImagePath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *idImagePath __attribute__((swift_name("idImagePath")));
@property (readonly) NSString *selfieImagePath __attribute__((swift_name("selfieImagePath")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceServiceConfig.Companion")))
@interface SharedFaceServiceConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFaceServiceConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessBackConfirmConfig")))
@interface SharedLivenessBackConfirmConfig : SharedBase
- (instancetype)initWithTitleVi:(NSString * _Nullable)titleVi titleEn:(NSString * _Nullable)titleEn bodyVi:(NSString * _Nullable)bodyVi bodyEn:(NSString * _Nullable)bodyEn confirmButtonVi:(NSString * _Nullable)confirmButtonVi confirmButtonEn:(NSString * _Nullable)confirmButtonEn cancelButtonVi:(NSString * _Nullable)cancelButtonVi cancelButtonEn:(NSString * _Nullable)cancelButtonEn __attribute__((swift_name("init(titleVi:titleEn:bodyVi:bodyEn:confirmButtonVi:confirmButtonEn:cancelButtonVi:cancelButtonEn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLivenessBackConfirmConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedLivenessBackConfirmConfig *)doCopyTitleVi:(NSString * _Nullable)titleVi titleEn:(NSString * _Nullable)titleEn bodyVi:(NSString * _Nullable)bodyVi bodyEn:(NSString * _Nullable)bodyEn confirmButtonVi:(NSString * _Nullable)confirmButtonVi confirmButtonEn:(NSString * _Nullable)confirmButtonEn cancelButtonVi:(NSString * _Nullable)cancelButtonVi cancelButtonEn:(NSString * _Nullable)cancelButtonEn __attribute__((swift_name("doCopy(titleVi:titleEn:bodyVi:bodyEn:confirmButtonVi:confirmButtonEn:cancelButtonVi:cancelButtonEn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bodyEn __attribute__((swift_name("bodyEn")));
@property (readonly) NSString * _Nullable bodyVi __attribute__((swift_name("bodyVi")));
@property (readonly) NSString * _Nullable cancelButtonEn __attribute__((swift_name("cancelButtonEn")));
@property (readonly) NSString * _Nullable cancelButtonVi __attribute__((swift_name("cancelButtonVi")));
@property (readonly) NSString * _Nullable confirmButtonEn __attribute__((swift_name("confirmButtonEn")));
@property (readonly) NSString * _Nullable confirmButtonVi __attribute__((swift_name("confirmButtonVi")));
@property (readonly) NSString * _Nullable titleEn __attribute__((swift_name("titleEn")));
@property (readonly) NSString * _Nullable titleVi __attribute__((swift_name("titleVi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessBackConfirmConfig.Companion")))
@interface SharedLivenessBackConfirmConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLivenessBackConfirmConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessConfig")))
@interface SharedLivenessConfig : SharedBase
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId selfieImagePath:(NSString * _Nullable)selfieImagePath isActiveLiveness:(BOOL)isActiveLiveness isShowCameraFront:(BOOL)isShowCameraFront customActions:(NSArray<SharedSDKFaceDetectStatus *> * _Nullable)customActions activeActionCount:(int32_t)activeActionCount forceCaptureTimeout:(int64_t)forceCaptureTimeout __attribute__((swift_name("init(transactionId:selfieImagePath:isActiveLiveness:isShowCameraFront:customActions:activeActionCount:forceCaptureTimeout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLivenessConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedLivenessConfig *)doCopyTransactionId:(NSString * _Nullable)transactionId selfieImagePath:(NSString * _Nullable)selfieImagePath isActiveLiveness:(BOOL)isActiveLiveness isShowCameraFront:(BOOL)isShowCameraFront customActions:(NSArray<SharedSDKFaceDetectStatus *> * _Nullable)customActions activeActionCount:(int32_t)activeActionCount forceCaptureTimeout:(int64_t)forceCaptureTimeout __attribute__((swift_name("doCopy(transactionId:selfieImagePath:isActiveLiveness:isShowCameraFront:customActions:activeActionCount:forceCaptureTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t activeActionCount __attribute__((swift_name("activeActionCount")));
@property NSArray<SharedSDKFaceDetectStatus *> * _Nullable customActions __attribute__((swift_name("customActions")));
@property int64_t forceCaptureTimeout __attribute__((swift_name("forceCaptureTimeout")));
@property BOOL isActiveLiveness __attribute__((swift_name("isActiveLiveness")));
@property BOOL isShowCameraFront __attribute__((swift_name("isShowCameraFront")));
@property NSString * _Nullable selfieImagePath __attribute__((swift_name("selfieImagePath")));
@property NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LivenessConfig.Companion")))
@interface SharedLivenessConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLivenessConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NfcConfig")))
@interface SharedNfcConfig : SharedBase
- (instancetype)initWithDocumentNumber:(NSString *)documentNumber expireDate:(NSString *)expireDate birthDate:(NSString *)birthDate transactionId:(NSString * _Nullable)transactionId facePathStorage:(NSString * _Nullable)facePathStorage documentNumberOld:(NSString * _Nullable)documentNumberOld optionalSOD:(BOOL)optionalSOD isCheckC06:(BOOL)isCheckC06 __attribute__((swift_name("init(documentNumber:expireDate:birthDate:transactionId:facePathStorage:documentNumberOld:optionalSOD:isCheckC06:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedNfcConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedNfcConfig *)doCopyDocumentNumber:(NSString *)documentNumber expireDate:(NSString *)expireDate birthDate:(NSString *)birthDate transactionId:(NSString * _Nullable)transactionId facePathStorage:(NSString * _Nullable)facePathStorage documentNumberOld:(NSString * _Nullable)documentNumberOld optionalSOD:(BOOL)optionalSOD isCheckC06:(BOOL)isCheckC06 __attribute__((swift_name("doCopy(documentNumber:expireDate:birthDate:transactionId:facePathStorage:documentNumberOld:optionalSOD:isCheckC06:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *birthDate __attribute__((swift_name("birthDate")));
@property (readonly) NSString *documentNumber __attribute__((swift_name("documentNumber")));
@property (readonly) NSString * _Nullable documentNumberOld __attribute__((swift_name("documentNumberOld")));
@property (readonly) NSString *expireDate __attribute__((swift_name("expireDate")));
@property (readonly) NSString * _Nullable facePathStorage __attribute__((swift_name("facePathStorage")));
@property (readonly) BOOL isCheckC06 __attribute__((swift_name("isCheckC06")));
@property (readonly) BOOL optionalSOD __attribute__((swift_name("optionalSOD")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NfcConfig.Companion")))
@interface SharedNfcConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNfcConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OcrConfig")))
@interface SharedOcrConfig : SharedBase
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId expectedDocumentSide:(NSString *)expectedDocumentSide idImagePath:(NSString *)idImagePath __attribute__((swift_name("init(transactionId:expectedDocumentSide:idImagePath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedOcrConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedOcrConfig *)doCopyTransactionId:(NSString * _Nullable)transactionId expectedDocumentSide:(NSString *)expectedDocumentSide idImagePath:(NSString *)idImagePath __attribute__((swift_name("doCopy(transactionId:expectedDocumentSide:idImagePath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *expectedDocumentSide __attribute__((swift_name("expectedDocumentSide")));
@property (readonly) NSString *idImagePath __attribute__((swift_name("idImagePath")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OcrConfig.Companion")))
@interface SharedOcrConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOcrConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptionConfig")))
@interface SharedOptionConfig : SharedBase
- (instancetype)initWithBaseUrl:(NSString * _Nullable)baseUrl esignGatewayUrl:(NSString * _Nullable)esignGatewayUrl licenseCodeESign:(NSString * _Nullable)licenseCodeESign countMaxRetry:(int32_t)countMaxRetry language:(NSString * _Nullable)language networkTimeoutMs:(int64_t)networkTimeoutMs isOcrFollowedByQrCode:(BOOL)isOcrFollowedByQrCode showWelcomeScreen:(BOOL)showWelcomeScreen showResultScreens:(BOOL)showResultScreens isCheckC06:(BOOL)isCheckC06 returnToWelcomeOnComplete:(BOOL)returnToWelcomeOnComplete allowedSignatures:(NSArray<NSString *> *)allowedSignatures allowedPackageNames:(NSArray<NSString *> *)allowedPackageNames __attribute__((swift_name("init(baseUrl:esignGatewayUrl:licenseCodeESign:countMaxRetry:language:networkTimeoutMs:isOcrFollowedByQrCode:showWelcomeScreen:showResultScreens:isCheckC06:returnToWelcomeOnComplete:allowedSignatures:allowedPackageNames:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedOptionConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedOptionConfig *)doCopyBaseUrl:(NSString * _Nullable)baseUrl esignGatewayUrl:(NSString * _Nullable)esignGatewayUrl licenseCodeESign:(NSString * _Nullable)licenseCodeESign countMaxRetry:(int32_t)countMaxRetry language:(NSString * _Nullable)language networkTimeoutMs:(int64_t)networkTimeoutMs isOcrFollowedByQrCode:(BOOL)isOcrFollowedByQrCode showWelcomeScreen:(BOOL)showWelcomeScreen showResultScreens:(BOOL)showResultScreens isCheckC06:(BOOL)isCheckC06 returnToWelcomeOnComplete:(BOOL)returnToWelcomeOnComplete allowedSignatures:(NSArray<NSString *> *)allowedSignatures allowedPackageNames:(NSArray<NSString *> *)allowedPackageNames __attribute__((swift_name("doCopy(baseUrl:esignGatewayUrl:licenseCodeESign:countMaxRetry:language:networkTimeoutMs:isOcrFollowedByQrCode:showWelcomeScreen:showResultScreens:isCheckC06:returnToWelcomeOnComplete:allowedSignatures:allowedPackageNames:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedOptionConfig *)mergedWithOther:(SharedOptionConfig *)other __attribute__((swift_name("mergedWith(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> *allowedPackageNames __attribute__((swift_name("allowedPackageNames")));
@property NSArray<NSString *> *allowedSignatures __attribute__((swift_name("allowedSignatures")));
@property NSString * _Nullable baseUrl __attribute__((swift_name("baseUrl")));
@property int32_t countMaxRetry __attribute__((swift_name("countMaxRetry")));
@property NSString * _Nullable esignGatewayUrl __attribute__((swift_name("esignGatewayUrl")));
@property BOOL isCheckC06 __attribute__((swift_name("isCheckC06")));
@property BOOL isOcrFollowedByQrCode __attribute__((swift_name("isOcrFollowedByQrCode")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property NSString * _Nullable licenseCodeESign __attribute__((swift_name("licenseCodeESign")));
@property int64_t networkTimeoutMs __attribute__((swift_name("networkTimeoutMs")));
@property BOOL returnToWelcomeOnComplete __attribute__((swift_name("returnToWelcomeOnComplete")));
@property BOOL showResultScreens __attribute__((swift_name("showResultScreens")));
@property BOOL showWelcomeScreen __attribute__((swift_name("showWelcomeScreen")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptionConfig.Companion")))
@interface SharedOptionConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOptionConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) int32_t DEFAULT_RETRY __attribute__((swift_name("DEFAULT_RETRY")));
@property (readonly) int64_t DEFAULT_TIMEOUT_MS __attribute__((swift_name("DEFAULT_TIMEOUT_MS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmsOtpConfig")))
@interface SharedSmsOtpConfig : SharedBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber purpose:(NSString *)purpose referenceId:(NSString *)referenceId requestId:(NSString * _Nullable)requestId __attribute__((swift_name("init(phoneNumber:purpose:referenceId:requestId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSmsOtpConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedSmsOtpConfig *)doCopyPhoneNumber:(NSString *)phoneNumber purpose:(NSString *)purpose referenceId:(NSString *)referenceId requestId:(NSString * _Nullable)requestId __attribute__((swift_name("doCopy(phoneNumber:purpose:referenceId:requestId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString *purpose __attribute__((swift_name("purpose")));
@property (readonly) NSString *referenceId __attribute__((swift_name("referenceId")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmsOtpConfig.Companion")))
@interface SharedSmsOtpConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSmsOtpConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StyleConfig")))
@interface SharedStyleConfig : SharedBase
- (instancetype)initWithTextSize:(int32_t)textSize textFont:(NSString *)textFont textColor:(int32_t)textColor statusBarBackground:(SharedInt * _Nullable)statusBarBackground backIcon:(SharedInt * _Nullable)backIcon titleStyle:(SharedStyleConfigTextStyle * _Nullable)titleStyle toolbarStyle:(SharedStyleConfigTextStyle * _Nullable)toolbarStyle instructionStyle:(SharedStyleConfigTextStyle * _Nullable)instructionStyle errorStyle:(SharedStyleConfigTextStyle * _Nullable)errorStyle successStyle:(SharedStyleConfigTextStyle * _Nullable)successStyle warningStyle:(SharedStyleConfigTextStyle * _Nullable)warningStyle captureButtonColor:(SharedInt * _Nullable)captureButtonColor captureButtonDisabledColor:(SharedInt * _Nullable)captureButtonDisabledColor __attribute__((swift_name("init(textSize:textFont:textColor:statusBarBackground:backIcon:titleStyle:toolbarStyle:instructionStyle:errorStyle:successStyle:warningStyle:captureButtonColor:captureButtonDisabledColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedStyleConfigCompanion *companion __attribute__((swift_name("companion")));
- (SharedStyleConfig *)doCopyTextSize:(int32_t)textSize textFont:(NSString *)textFont textColor:(int32_t)textColor statusBarBackground:(SharedInt * _Nullable)statusBarBackground backIcon:(SharedInt * _Nullable)backIcon titleStyle:(SharedStyleConfigTextStyle * _Nullable)titleStyle toolbarStyle:(SharedStyleConfigTextStyle * _Nullable)toolbarStyle instructionStyle:(SharedStyleConfigTextStyle * _Nullable)instructionStyle errorStyle:(SharedStyleConfigTextStyle * _Nullable)errorStyle successStyle:(SharedStyleConfigTextStyle * _Nullable)successStyle warningStyle:(SharedStyleConfigTextStyle * _Nullable)warningStyle captureButtonColor:(SharedInt * _Nullable)captureButtonColor captureButtonDisabledColor:(SharedInt * _Nullable)captureButtonDisabledColor __attribute__((swift_name("doCopy(textSize:textFont:textColor:statusBarBackground:backIcon:titleStyle:toolbarStyle:instructionStyle:errorStyle:successStyle:warningStyle:captureButtonColor:captureButtonDisabledColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedInt * _Nullable backIcon __attribute__((swift_name("backIcon")));
@property SharedInt * _Nullable captureButtonColor __attribute__((swift_name("captureButtonColor")));
@property SharedInt * _Nullable captureButtonDisabledColor __attribute__((swift_name("captureButtonDisabledColor")));
@property SharedStyleConfigTextStyle * _Nullable errorStyle __attribute__((swift_name("errorStyle")));
@property SharedStyleConfigTextStyle * _Nullable instructionStyle __attribute__((swift_name("instructionStyle")));
@property SharedInt * _Nullable statusBarBackground __attribute__((swift_name("statusBarBackground")));
@property SharedStyleConfigTextStyle * _Nullable successStyle __attribute__((swift_name("successStyle")));
@property int32_t textColor __attribute__((swift_name("textColor")));
@property NSString *textFont __attribute__((swift_name("textFont")));
@property int32_t textSize __attribute__((swift_name("textSize")));
@property SharedStyleConfigTextStyle * _Nullable titleStyle __attribute__((swift_name("titleStyle")));
@property SharedStyleConfigTextStyle * _Nullable toolbarStyle __attribute__((swift_name("toolbarStyle")));
@property SharedStyleConfigTextStyle * _Nullable warningStyle __attribute__((swift_name("warningStyle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StyleConfig.Companion")))
@interface SharedStyleConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedStyleConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StyleConfig.TextStyle")))
@interface SharedStyleConfigTextStyle : SharedBase
- (instancetype)initWithTextSize:(SharedInt * _Nullable)textSize textFont:(NSString * _Nullable)textFont textColor:(SharedInt * _Nullable)textColor __attribute__((swift_name("init(textSize:textFont:textColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedStyleConfigTextStyleCompanion *companion __attribute__((swift_name("companion")));
- (SharedStyleConfigTextStyle *)doCopyTextSize:(SharedInt * _Nullable)textSize textFont:(NSString * _Nullable)textFont textColor:(SharedInt * _Nullable)textColor __attribute__((swift_name("doCopy(textSize:textFont:textColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedInt * _Nullable textColor __attribute__((swift_name("textColor")));
@property NSString * _Nullable textFont __attribute__((swift_name("textFont")));
@property SharedInt * _Nullable textSize __attribute__((swift_name("textSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StyleConfig.TextStyleCompanion")))
@interface SharedStyleConfigTextStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedStyleConfigTextStyleCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKCaptureCondition")))
@interface SharedEKCaptureCondition : SharedKotlinEnum<SharedEKCaptureCondition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKCaptureCondition *ok __attribute__((swift_name("ok")));
@property (class, readonly) SharedEKCaptureCondition *noCard __attribute__((swift_name("noCard")));
@property (class, readonly) SharedEKCaptureCondition *notInFrame __attribute__((swift_name("notInFrame")));
@property (class, readonly) SharedEKCaptureCondition *tooFar __attribute__((swift_name("tooFar")));
@property (class, readonly) SharedEKCaptureCondition *tooNear __attribute__((swift_name("tooNear")));
@property (class, readonly) SharedEKCaptureCondition *tooDark __attribute__((swift_name("tooDark")));
@property (class, readonly) SharedEKCaptureCondition *glare __attribute__((swift_name("glare")));
@property (class, readonly) SharedEKCaptureCondition *blurry __attribute__((swift_name("blurry")));
@property (class, readonly) SharedEKCaptureCondition *occluded __attribute__((swift_name("occluded")));
@property (class, readonly) SharedEKCaptureCondition *wrongSide __attribute__((swift_name("wrongSide")));
@property (class, readonly) SharedEKCaptureCondition *noPortrait __attribute__((swift_name("noPortrait")));
@property (class, readonly) SharedEKCaptureCondition *noBackMarker __attribute__((swift_name("noBackMarker")));
+ (SharedKotlinArray<SharedEKCaptureCondition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKCaptureCondition *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *messageKey __attribute__((swift_name("messageKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKCaptureMetrics")))
@interface SharedEKCaptureMetrics : SharedBase
- (instancetype)initWithCardDetected:(BOOL)cardDetected cardFillRatio:(float)cardFillRatio cardInsideFrame:(BOOL)cardInsideFrame blurScore:(float)blurScore glareRatio:(float)glareRatio brightness:(float)brightness __attribute__((swift_name("init(cardDetected:cardFillRatio:cardInsideFrame:blurScore:glareRatio:brightness:)"))) __attribute__((objc_designated_initializer));
- (SharedEKCaptureMetrics *)doCopyCardDetected:(BOOL)cardDetected cardFillRatio:(float)cardFillRatio cardInsideFrame:(BOOL)cardInsideFrame blurScore:(float)blurScore glareRatio:(float)glareRatio brightness:(float)brightness __attribute__((swift_name("doCopy(cardDetected:cardFillRatio:cardInsideFrame:blurScore:glareRatio:brightness:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float blurScore __attribute__((swift_name("blurScore")));
@property (readonly) float brightness __attribute__((swift_name("brightness")));
@property (readonly) BOOL cardDetected __attribute__((swift_name("cardDetected")));
@property (readonly) float cardFillRatio __attribute__((swift_name("cardFillRatio")));
@property (readonly) BOOL cardInsideFrame __attribute__((swift_name("cardInsideFrame")));
@property (readonly) float glareRatio __attribute__((swift_name("glareRatio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKCaptureQuality")))
@interface SharedEKCaptureQuality : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKCaptureQuality __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKCaptureQuality *shared __attribute__((swift_name("shared")));
- (SharedEKCaptureCondition *)evaluateM:(SharedEKCaptureMetrics *)m __attribute__((swift_name("evaluate(m:)")));
- (SharedEKCaptureCondition * _Nullable)evaluateContentIsBackSide:(BOOL)isBackSide faceCount:(int32_t)faceCount frontTextConfirmed:(BOOL)frontTextConfirmed idNumberFound:(BOOL)idNumberFound backTextConfirmed:(BOOL)backTextConfirmed qrDetected:(SharedBoolean * _Nullable)qrDetected qrEverDetected:(BOOL)qrEverDetected brightness:(float)brightness faceEverDetected:(BOOL)faceEverDetected __attribute__((swift_name("evaluateContent(isBackSide:faceCount:frontTextConfirmed:idNumberFound:backTextConfirmed:qrDetected:qrEverDetected:brightness:faceEverDetected:)")));
- (BOOL)isReadyM:(SharedEKCaptureMetrics *)m __attribute__((swift_name("isReady(m:)")));
@property (readonly) int64_t AUTO_CAPTURE_HOLD_MS __attribute__((swift_name("AUTO_CAPTURE_HOLD_MS")));
@property float maxFillRatio __attribute__((swift_name("maxFillRatio")));
@property float maxGlareRatio __attribute__((swift_name("maxGlareRatio")));
@property float minBlurScore __attribute__((swift_name("minBlurScore")));
@property float minBrightness __attribute__((swift_name("minBrightness")));
@property float minFillRatio __attribute__((swift_name("minFillRatio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKCaptureTimings")))
@interface SharedEKCaptureTimings : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKCaptureTimings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKCaptureTimings *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ALIGNING_TIP_COUNT __attribute__((swift_name("ALIGNING_TIP_COUNT")));
@property (readonly) int64_t ALIGNING_TIP_INTERVAL_MS __attribute__((swift_name("ALIGNING_TIP_INTERVAL_MS")));
@property (readonly) int64_t ALIGN_STABILIZE_MS __attribute__((swift_name("ALIGN_STABILIZE_MS")));
@property (readonly) int64_t ERROR_RESET_MS __attribute__((swift_name("ERROR_RESET_MS")));
@property (readonly) int64_t FRAME_THROTTLE_MS __attribute__((swift_name("FRAME_THROTTLE_MS")));
@property (readonly) int64_t LIVENESS_FACE_MOVE_RECOVERY_MS __attribute__((swift_name("LIVENESS_FACE_MOVE_RECOVERY_MS")));
@property (readonly) int64_t LIVENESS_HOLD_DURATION_MS __attribute__((swift_name("LIVENESS_HOLD_DURATION_MS")));
@property (readonly) int64_t LIVENESS_HOLD_FRAME_MS __attribute__((swift_name("LIVENESS_HOLD_FRAME_MS")));
@property (readonly) int64_t NO_CARD_OVERLAY_DELAY_MS __attribute__((swift_name("NO_CARD_OVERLAY_DELAY_MS")));
@property (readonly) int64_t WRONG_SIDE_DEBOUNCE_MS __attribute__((swift_name("WRONG_SIDE_DEBOUNCE_MS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKCardTextClassifier")))
@interface SharedEKCardTextClassifier : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKCardTextClassifier __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKCardTextClassifier *shared __attribute__((swift_name("shared")));
- (SharedEKCardTextFlags *)classifyRawText:(NSString *)rawText __attribute__((swift_name("classify(rawText:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKCardTextFlags")))
@interface SharedEKCardTextFlags : SharedBase
- (instancetype)initWithFrontConfirmed:(BOOL)frontConfirmed backConfirmed:(BOOL)backConfirmed idNumberFound:(BOOL)idNumberFound __attribute__((swift_name("init(frontConfirmed:backConfirmed:idNumberFound:)"))) __attribute__((objc_designated_initializer));
- (SharedEKCardTextFlags *)doCopyFrontConfirmed:(BOOL)frontConfirmed backConfirmed:(BOOL)backConfirmed idNumberFound:(BOOL)idNumberFound __attribute__((swift_name("doCopy(frontConfirmed:backConfirmed:idNumberFound:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL backConfirmed __attribute__((swift_name("backConfirmed")));
@property (readonly) BOOL frontConfirmed __attribute__((swift_name("frontConfirmed")));
@property (readonly) BOOL idNumberFound __attribute__((swift_name("idNumberFound")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKConditionStabilizer")))
@interface SharedEKConditionStabilizer : SharedBase
- (instancetype)initWithDurationMs:(int64_t)durationMs __attribute__((swift_name("init(durationMs:)"))) __attribute__((objc_designated_initializer));
- (void)reset __attribute__((swift_name("reset()")));
- (NSString *)updateKey:(NSString *)key nowMs:(int64_t)nowMs __attribute__((swift_name("update(key:nowMs:)")));
@property (readonly) int64_t durationMs __attribute__((swift_name("durationMs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKDetectionMapping")))
@interface SharedEKDetectionMapping : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKDetectionMapping __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKDetectionMapping *shared __attribute__((swift_name("shared")));
- (BOOL)isRetryableCode:(NSString *)code __attribute__((swift_name("isRetryable(code:)")));
- (SharedEKIssueKind *)kindForCode:(NSString *)code __attribute__((swift_name("kindFor(code:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKFaceCondition")))
@interface SharedEKFaceCondition : SharedKotlinEnum<SharedEKFaceCondition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKFaceCondition *ok __attribute__((swift_name("ok")));
@property (class, readonly) SharedEKFaceCondition *noFace __attribute__((swift_name("noFace")));
@property (class, readonly) SharedEKFaceCondition *tooFar __attribute__((swift_name("tooFar")));
@property (class, readonly) SharedEKFaceCondition *tooNear __attribute__((swift_name("tooNear")));
@property (class, readonly) SharedEKFaceCondition *offCenter __attribute__((swift_name("offCenter")));
@property (class, readonly) SharedEKFaceCondition *tooDark __attribute__((swift_name("tooDark")));
@property (class, readonly) SharedEKFaceCondition *blurry __attribute__((swift_name("blurry")));
+ (SharedKotlinArray<SharedEKFaceCondition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKFaceCondition *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *messageKey __attribute__((swift_name("messageKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKFaceMetrics")))
@interface SharedEKFaceMetrics : SharedBase
- (instancetype)initWithFaceDetected:(BOOL)faceDetected faceRatio:(float)faceRatio centered:(BOOL)centered blurScore:(float)blurScore brightness:(float)brightness __attribute__((swift_name("init(faceDetected:faceRatio:centered:blurScore:brightness:)"))) __attribute__((objc_designated_initializer));
- (SharedEKFaceMetrics *)doCopyFaceDetected:(BOOL)faceDetected faceRatio:(float)faceRatio centered:(BOOL)centered blurScore:(float)blurScore brightness:(float)brightness __attribute__((swift_name("doCopy(faceDetected:faceRatio:centered:blurScore:brightness:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float blurScore __attribute__((swift_name("blurScore")));
@property (readonly) float brightness __attribute__((swift_name("brightness")));
@property (readonly) BOOL centered __attribute__((swift_name("centered")));
@property (readonly) BOOL faceDetected __attribute__((swift_name("faceDetected")));
@property (readonly) float faceRatio __attribute__((swift_name("faceRatio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKFaceQuality")))
@interface SharedEKFaceQuality : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKFaceQuality __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKFaceQuality *shared __attribute__((swift_name("shared")));
- (SharedEKFaceCondition *)evaluateM:(SharedEKFaceMetrics *)m __attribute__((swift_name("evaluate(m:)")));
- (BOOL)isReadyM:(SharedEKFaceMetrics *)m __attribute__((swift_name("isReady(m:)")));
@property (readonly) float CENTER_TOLERANCE __attribute__((swift_name("CENTER_TOLERANCE")));
@property float maxFaceRatio __attribute__((swift_name("maxFaceRatio")));
@property float minBlurScore __attribute__((swift_name("minBlurScore")));
@property float minBrightness __attribute__((swift_name("minBrightness")));
@property float minFaceRatio __attribute__((swift_name("minFaceRatio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKFrameDebounce")))
@interface SharedEKFrameDebounce : SharedBase
- (instancetype)initWithDurationMs:(int64_t)durationMs __attribute__((swift_name("init(durationMs:)"))) __attribute__((objc_designated_initializer));
- (void)reset __attribute__((swift_name("reset()")));
- (BOOL)updateActive:(BOOL)active nowMs:(int64_t)nowMs __attribute__((swift_name("update(active:nowMs:)")));
@property (readonly) int64_t durationMs __attribute__((swift_name("durationMs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKImageMetrics")))
@interface SharedEKImageMetrics : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKImageMetrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKImageMetrics *shared __attribute__((swift_name("shared")));
- (SharedEKRoi * _Nullable)brightRegionBoundsLuma:(SharedKotlinByteArray *)luma width:(int32_t)width height:(int32_t)height marginAboveMean:(int32_t)marginAboveMean __attribute__((swift_name("brightRegionBounds(luma:width:height:marginAboveMean:)")));
- (float)laplacianVarianceLuma:(SharedKotlinByteArray *)luma width:(int32_t)width height:(int32_t)height roi:(SharedEKRoi * _Nullable)roi __attribute__((swift_name("laplacianVariance(luma:width:height:roi:)")));
- (float)meanBrightnessLuma:(SharedKotlinByteArray *)luma width:(int32_t)width height:(int32_t)height roi:(SharedEKRoi * _Nullable)roi __attribute__((swift_name("meanBrightness(luma:width:height:roi:)")));
- (float)saturatedRatioLuma:(SharedKotlinByteArray *)luma width:(int32_t)width height:(int32_t)height threshold:(int32_t)threshold roi:(SharedEKRoi * _Nullable)roi __attribute__((swift_name("saturatedRatio(luma:width:height:threshold:roi:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIssueKind")))
@interface SharedEKIssueKind : SharedKotlinEnum<SharedEKIssueKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKIssueKind *quality __attribute__((swift_name("quality")));
@property (class, readonly) SharedEKIssueKind *environment __attribute__((swift_name("environment")));
@property (class, readonly) SharedEKIssueKind *spoof __attribute__((swift_name("spoof")));
@property (class, readonly) SharedEKIssueKind *validation __attribute__((swift_name("validation")));
@property (class, readonly) SharedEKIssueKind *unknown __attribute__((swift_name("unknown")));
+ (SharedKotlinArray<SharedEKIssueKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKIssueKind *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL retryable __attribute__((swift_name("retryable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKNeutralResetFilter")))
@interface SharedEKNeutralResetFilter : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)activate __attribute__((swift_name("activate()")));
- (BOOL)filterDetected:(BOOL)detected __attribute__((swift_name("filter(detected:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (readonly) BOOL active __attribute__((swift_name("active")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKRoi")))
@interface SharedEKRoi : SharedBase
- (instancetype)initWithLeft:(int32_t)left top:(int32_t)top right:(int32_t)right bottom:(int32_t)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
- (SharedEKRoi *)doCopyLeft:(int32_t)left top:(int32_t)top right:(int32_t)right bottom:(int32_t)bottom __attribute__((swift_name("doCopy(left:top:right:bottom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t right __attribute__((swift_name("right")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneratedQualityRules")))
@interface SharedGeneratedQualityRules : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)generatedQualityRules __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGeneratedQualityRules *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t CAPTURE_FULL_HD_MAX_DIMENSION __attribute__((swift_name("CAPTURE_FULL_HD_MAX_DIMENSION")));
@property (readonly) int32_t CAPTURE_JPEG_QUALITY __attribute__((swift_name("CAPTURE_JPEG_QUALITY")));
@property (readonly) int32_t CAPTURE_OCR_MAX_DIMENSION __attribute__((swift_name("CAPTURE_OCR_MAX_DIMENSION")));
@property (readonly) int32_t CAPTURE_RESULT_IMAGE_JPEG_QUALITY __attribute__((swift_name("CAPTURE_RESULT_IMAGE_JPEG_QUALITY")));
@property (readonly) float DOC_MAX_FILL_RATIO __attribute__((swift_name("DOC_MAX_FILL_RATIO")));
@property (readonly) float DOC_MAX_GLARE_RATIO __attribute__((swift_name("DOC_MAX_GLARE_RATIO")));
@property (readonly) float DOC_MIN_BLUR_SCORE __attribute__((swift_name("DOC_MIN_BLUR_SCORE")));
@property (readonly) float DOC_MIN_BRIGHTNESS __attribute__((swift_name("DOC_MIN_BRIGHTNESS")));
@property (readonly) float DOC_MIN_FILL_RATIO __attribute__((swift_name("DOC_MIN_FILL_RATIO")));
@property (readonly) float FACE_CENTER_TOLERANCE __attribute__((swift_name("FACE_CENTER_TOLERANCE")));
@property (readonly) float FACE_MAX_FACE_RATIO __attribute__((swift_name("FACE_MAX_FACE_RATIO")));
@property (readonly) float FACE_MIN_BLUR_SCORE __attribute__((swift_name("FACE_MIN_BLUR_SCORE")));
@property (readonly) float FACE_MIN_BRIGHTNESS __attribute__((swift_name("FACE_MIN_BRIGHTNESS")));
@property (readonly) float FACE_MIN_FACE_RATIO __attribute__((swift_name("FACE_MIN_FACE_RATIO")));
@property (readonly) float LIVENESS_DET_EYE_OPENNESS_THRESHOLD __attribute__((swift_name("LIVENESS_DET_EYE_OPENNESS_THRESHOLD")));
@property (readonly) float LIVENESS_DET_FACE_CONFIDENCE_THRESHOLD __attribute__((swift_name("LIVENESS_DET_FACE_CONFIDENCE_THRESHOLD")));
@property (readonly) int32_t LIVENESS_DET_MAX_CONSECUTIVE_INVALID_FRAMES __attribute__((swift_name("LIVENESS_DET_MAX_CONSECUTIVE_INVALID_FRAMES")));
@property (readonly) int32_t LIVENESS_DET_MIN_VALID_FRAMES __attribute__((swift_name("LIVENESS_DET_MIN_VALID_FRAMES")));
@property (readonly) float LIVENESS_DET_MOUTH_OPENNESS_MAX __attribute__((swift_name("LIVENESS_DET_MOUTH_OPENNESS_MAX")));
@property (readonly) float LIVENESS_DET_PITCH_MAX_DEGREES __attribute__((swift_name("LIVENESS_DET_PITCH_MAX_DEGREES")));
@property (readonly) float LIVENESS_DET_ROLL_MAX_DEGREES __attribute__((swift_name("LIVENESS_DET_ROLL_MAX_DEGREES")));
@property (readonly) float LIVENESS_DET_SUCCESS_RATE_THRESHOLD __attribute__((swift_name("LIVENESS_DET_SUCCESS_RATE_THRESHOLD")));
@property (readonly) float LIVENESS_DET_YAW_MAX_DEGREES __attribute__((swift_name("LIVENESS_DET_YAW_MAX_DEGREES")));
@property (readonly) float LIVENESS_FACE_RATIO_TOO_CLOSE __attribute__((swift_name("LIVENESS_FACE_RATIO_TOO_CLOSE")));
@property (readonly) float LIVENESS_FACE_RATIO_TOO_FAR __attribute__((swift_name("LIVENESS_FACE_RATIO_TOO_FAR")));
@property (readonly) float LIVENESS_PITCH_DOWN __attribute__((swift_name("LIVENESS_PITCH_DOWN")));
@property (readonly) float LIVENESS_PITCH_UP __attribute__((swift_name("LIVENESS_PITCH_UP")));
@property (readonly) float LIVENESS_YAW_LEFT __attribute__((swift_name("LIVENESS_YAW_LEFT")));
@property (readonly) float LIVENESS_YAW_RIGHT __attribute__((swift_name("LIVENESS_YAW_RIGHT")));
@property (readonly) float MASK_THRESHOLD __attribute__((swift_name("MASK_THRESHOLD")));
@property (readonly) int64_t OCCLUSION_CONTENT_DEBOUNCE_MS __attribute__((swift_name("OCCLUSION_CONTENT_DEBOUNCE_MS")));
@property (readonly) float OCCLUSION_DARK_RELATIVE_FRACTION __attribute__((swift_name("OCCLUSION_DARK_RELATIVE_FRACTION")));
@property (readonly) float OCCLUSION_MIN_CONTENT_BRIGHTNESS __attribute__((swift_name("OCCLUSION_MIN_CONTENT_BRIGHTNESS")));
@property (readonly) float OCCLUSION_MIN_DARK_RATIO __attribute__((swift_name("OCCLUSION_MIN_DARK_RATIO")));
@property (readonly) BOOL OCCLUSION_REQUIRE_QR_WHEN_SEEN __attribute__((swift_name("OCCLUSION_REQUIRE_QR_WHEN_SEEN")));
@property (readonly) float OVAL_MAX_CENTER_DEVIATION __attribute__((swift_name("OVAL_MAX_CENTER_DEVIATION")));
@property (readonly) float OVAL_MAX_FACE_SIZE __attribute__((swift_name("OVAL_MAX_FACE_SIZE")));
@property (readonly) float OVAL_MAX_STRAIGHT_ANGLE __attribute__((swift_name("OVAL_MAX_STRAIGHT_ANGLE")));
@property (readonly) float OVAL_MIN_FACE_SIZE __attribute__((swift_name("OVAL_MIN_FACE_SIZE")));
@property (readonly) float OVAL_TOLERANCE __attribute__((swift_name("OVAL_TOLERANCE")));
@property (readonly) int32_t TIMING_ALIGNING_TIP_COUNT __attribute__((swift_name("TIMING_ALIGNING_TIP_COUNT")));
@property (readonly) int64_t TIMING_ALIGNING_TIP_INTERVAL_MS __attribute__((swift_name("TIMING_ALIGNING_TIP_INTERVAL_MS")));
@property (readonly) int64_t TIMING_ALIGN_STABILIZE_MS __attribute__((swift_name("TIMING_ALIGN_STABILIZE_MS")));
@property (readonly) int64_t TIMING_ERROR_RESET_MS __attribute__((swift_name("TIMING_ERROR_RESET_MS")));
@property (readonly) int64_t TIMING_FRAME_THROTTLE_MS __attribute__((swift_name("TIMING_FRAME_THROTTLE_MS")));
@property (readonly) int64_t TIMING_LIVENESS_FACE_MOVE_RECOVERY_MS __attribute__((swift_name("TIMING_LIVENESS_FACE_MOVE_RECOVERY_MS")));
@property (readonly) int64_t TIMING_LIVENESS_HOLD_DURATION_MS __attribute__((swift_name("TIMING_LIVENESS_HOLD_DURATION_MS")));
@property (readonly) int64_t TIMING_LIVENESS_HOLD_FRAME_MS __attribute__((swift_name("TIMING_LIVENESS_HOLD_FRAME_MS")));
@property (readonly) int64_t TIMING_NO_CARD_OVERLAY_DELAY_MS __attribute__((swift_name("TIMING_NO_CARD_OVERLAY_DELAY_MS")));
@property (readonly) int64_t TIMING_WRONG_SIDE_DEBOUNCE_MS __attribute__((swift_name("TIMING_WRONG_SIDE_DEBOUNCE_MS")));
@end

__attribute__((swift_name("SDKResult")))
@interface SharedSDKResult<__covariant T> : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKResultError")))
@interface SharedSDKResultError : SharedSDKResult<SharedKotlinNothing *>
- (instancetype)initWithStatusCode:(int32_t)statusCode rawBody:(NSString * _Nullable)rawBody __attribute__((swift_name("init(statusCode:rawBody:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKResultError *)doCopyStatusCode:(int32_t)statusCode rawBody:(NSString * _Nullable)rawBody __attribute__((swift_name("doCopy(statusCode:rawBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable rawBody __attribute__((swift_name("rawBody")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKResultException")))
@interface SharedSDKResultException : SharedSDKResult<SharedKotlinNothing *>
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(SharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKResultException *)doCopyMessage:(NSString * _Nullable)message throwable:(SharedKotlinThrowable * _Nullable)throwable __attribute__((swift_name("doCopy(message:throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) SharedKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKResultSuccess")))
@interface SharedSDKResultSuccess<__covariant T> : SharedSDKResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (SharedSDKResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((swift_name("EKIntegrityChecker")))
@protocol SharedEKIntegrityChecker
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)attestChallenge:(NSString *)challenge completionHandler:(void (^)(SharedEKIntegrityResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("attest(challenge:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIntegrityResult")))
@interface SharedEKIntegrityResult : SharedBase
- (instancetype)initWithVerdict:(SharedEKIntegrityVerdict *)verdict token:(NSString * _Nullable)token reason:(NSString * _Nullable)reason __attribute__((swift_name("init(verdict:token:reason:)"))) __attribute__((objc_designated_initializer));
- (SharedEKIntegrityResult *)doCopyVerdict:(SharedEKIntegrityVerdict *)verdict token:(NSString * _Nullable)token reason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(verdict:token:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) SharedEKIntegrityVerdict *verdict __attribute__((swift_name("verdict")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIntegrityVerdict")))
@interface SharedEKIntegrityVerdict : SharedKotlinEnum<SharedEKIntegrityVerdict *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKIntegrityVerdict *pass __attribute__((swift_name("pass")));
@property (class, readonly) SharedEKIntegrityVerdict *fail __attribute__((swift_name("fail")));
@property (class, readonly) SharedEKIntegrityVerdict *unavailable __attribute__((swift_name("unavailable")));
@property (class, readonly) SharedEKIntegrityVerdict *notEvaluated __attribute__((swift_name("notEvaluated")));
+ (SharedKotlinArray<SharedEKIntegrityVerdict *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKIntegrityVerdict *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKBackOfficeService")))
@interface SharedSDKBackOfficeService : SharedBase
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchTransactionHistoriesAppKey:(NSString * _Nullable)appKey requestIds:(NSString *)requestIds completionHandler:(void (^)(SharedSDKListTransactionResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchTransactionHistories(appKey:requestIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionHistoryDetailAppKey:(NSString * _Nullable)appKey transactionId:(NSString *)transactionId completionHandler:(void (^)(SharedSDKBaseResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactionHistoryDetail(appKey:transactionId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKEkycService")))
@interface SharedSDKEkycService : SharedBase
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)c06CheckTransactionId:(NSString *)transactionId request:(SharedCheckC06Request *)request completionHandler:(void (^)(SharedCheckC06Response * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("c06Check(transactionId:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)compareCheckTransactionId:(NSString *)transactionId requestId:(NSString *)requestId idBytes:(SharedKotlinByteArray *)idBytes selfieBytes:(SharedKotlinByteArray *)selfieBytes completionHandler:(void (^)(SharedCheckFaceResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("compareCheck(transactionId:requestId:idBytes:selfieBytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)livenessActiveCheckTransactionId:(NSString *)transactionId requestId:(NSString *)requestId result:(NSString *)result selfieBytes:(SharedKotlinByteArray *)selfieBytes completionHandler:(void (^)(SharedSubmitLivenessResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("livenessActiveCheck(transactionId:requestId:result:selfieBytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)livenessPassiveCheckTransactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes completionHandler:(void (^)(SharedCheckLivenessResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("livenessPassiveCheck(transactionId:imageBytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nfcCheckTransactionId:(NSString *)transactionId request:(SharedAuditNfcRequest *)request completionHandler:(void (^)(SharedSDKBaseResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("nfcCheck(transactionId:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ocrCheckTransactionId:(NSString *)transactionId imageBytes:(SharedKotlinByteArray *)imageBytes side:(NSString *)side completionHandler:(void (^)(SharedCheckOcrResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ocrCheck(transactionId:imageBytes:side:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sdkInitAppKey:(NSString *)appKey deviceFingerprint:(NSString *)deviceFingerprint completionHandler:(void (^)(SharedSdkInitResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sdkInit(appKey:deviceFingerprint:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKSmsOtpService")))
@interface SharedSDKSmsOtpService : SharedBase
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resendOtpApiKey:(NSString *)apiKey request:(SharedResendOtpRequest *)request completionHandler:(void (^)(SharedResendOtpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resendOtp(apiKey:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendOtpApiKey:(NSString *)apiKey request:(SharedSendOtpRequest *)request completionHandler:(void (^)(SharedSendOtpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendOtp(apiKey:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyOtpApiKey:(NSString *)apiKey request:(SharedVerifyOtpRequest *)request completionHandler:(void (^)(SharedVerifyOtpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyOtp(apiKey:request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIdValidator")))
@interface SharedEKIdValidator : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eKIdValidator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEKIdValidator *shared __attribute__((swift_name("shared")));
- (SharedEKIdValidatorExpiryStatus *)checkExpiryExpiry:(NSString * _Nullable)expiry todayYear:(int32_t)todayYear todayMonth:(int32_t)todayMonth todayDay:(int32_t)todayDay __attribute__((swift_name("checkExpiry(expiry:todayYear:todayMonth:todayDay:)")));
- (SharedEKIdValidatorCccdInfo * _Nullable)decodeCccdIdNumber:(NSString * _Nullable)idNumber __attribute__((swift_name("decodeCccd(idNumber:)")));
- (NSString * _Nullable)errorCodeForCheck:(SharedEKIdValidatorIdCheck *)check __attribute__((swift_name("errorCodeFor(check:)")));
- (SharedEKIdValidatorIdCheck *)validateCccdIdNumber:(NSString * _Nullable)idNumber dobYear:(SharedInt * _Nullable)dobYear isMaleField:(SharedBoolean * _Nullable)isMaleField __attribute__((swift_name("validateCccd(idNumber:dobYear:isMaleField:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIdValidator.CccdInfo")))
@interface SharedEKIdValidatorCccdInfo : SharedBase
- (instancetype)initWithProvinceCode:(NSString *)provinceCode isMale:(BOOL)isMale birthYear:(int32_t)birthYear __attribute__((swift_name("init(provinceCode:isMale:birthYear:)"))) __attribute__((objc_designated_initializer));
- (SharedEKIdValidatorCccdInfo *)doCopyProvinceCode:(NSString *)provinceCode isMale:(BOOL)isMale birthYear:(int32_t)birthYear __attribute__((swift_name("doCopy(provinceCode:isMale:birthYear:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t birthYear __attribute__((swift_name("birthYear")));
@property (readonly) BOOL isMale __attribute__((swift_name("isMale")));
@property (readonly) NSString *provinceCode __attribute__((swift_name("provinceCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIdValidator.ExpiryStatus")))
@interface SharedEKIdValidatorExpiryStatus : SharedKotlinEnum<SharedEKIdValidatorExpiryStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKIdValidatorExpiryStatus *valid __attribute__((swift_name("valid")));
@property (class, readonly) SharedEKIdValidatorExpiryStatus *expired __attribute__((swift_name("expired")));
@property (class, readonly) SharedEKIdValidatorExpiryStatus *noExpiry __attribute__((swift_name("noExpiry")));
@property (class, readonly) SharedEKIdValidatorExpiryStatus *unreadable __attribute__((swift_name("unreadable")));
+ (SharedKotlinArray<SharedEKIdValidatorExpiryStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKIdValidatorExpiryStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EKIdValidator.IdCheck")))
@interface SharedEKIdValidatorIdCheck : SharedKotlinEnum<SharedEKIdValidatorIdCheck *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEKIdValidatorIdCheck *ok __attribute__((swift_name("ok")));
@property (class, readonly) SharedEKIdValidatorIdCheck *notCccd12 __attribute__((swift_name("notCccd12")));
@property (class, readonly) SharedEKIdValidatorIdCheck *unknownProvince __attribute__((swift_name("unknownProvince")));
@property (class, readonly) SharedEKIdValidatorIdCheck *genderMismatch __attribute__((swift_name("genderMismatch")));
@property (class, readonly) SharedEKIdValidatorIdCheck *birthYearMismatch __attribute__((swift_name("birthYearMismatch")));
+ (SharedKotlinArray<SharedEKIdValidatorIdCheck *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEKIdValidatorIdCheck *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKInputValidator")))
@interface SharedSDKInputValidator : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKInputValidator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSDKInputValidator *shared __attribute__((swift_name("shared")));
- (SharedValidationResult *)allChecks:(SharedKotlinArray<SharedValidationResult *> *)checks __attribute__((swift_name("all(checks:)")));
- (SharedValidationResult *)apiKeyKey:(NSString *)key event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("apiKey(key:event:)")));
- (SharedValidationResult *)languageLanguage:(NSString *)language event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("language(language:event:)")));
- (SharedValidationResult *)notBlankValue:(NSString *)value errorResult:(SharedEKYCErrorResult *)errorResult event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("notBlank(value:errorResult:event:)")));
- (SharedValidationResult *)notNullOrBlankValue:(NSString * _Nullable)value errorResult:(SharedEKYCErrorResult *)errorResult event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("notNullOrBlank(value:errorResult:event:)")));
- (SharedValidationResult *)otpCodeCode:(NSString *)code event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("otpCode(code:event:)")));
- (SharedValidationResult *)phoneNumberPhone:(NSString *)phone event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("phoneNumber(phone:event:)")));
- (SharedValidationResult *)pinCodeCode:(NSString *)code event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("pinCode(code:event:)")));
- (SharedValidationResult *)positiveIntValue:(int32_t)value errorResult:(SharedEKYCErrorResult *)errorResult event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("positiveInt(value:errorResult:event:)")));
- (SharedValidationResult *)recoveryCodeCode:(NSString *)code event:(SharedEKYCErrorEvent *)event __attribute__((swift_name("recoveryCode(code:event:)")));
- (SharedEKYCErrorResult * _Nullable)validateApiKeyKey:(NSString *)key __attribute__((swift_name("validateApiKey(key:)")));
- (SharedEKYCErrorResult * _Nullable)validateLanguageLanguage:(NSString *)language __attribute__((swift_name("validateLanguage(language:)")));
- (SharedEKYCErrorResult * _Nullable)validateOtpCodeCode:(NSString *)code __attribute__((swift_name("validateOtpCode(code:)")));
- (SharedEKYCErrorResult * _Nullable)validatePhoneNumberPhone:(NSString *)phone __attribute__((swift_name("validatePhoneNumber(phone:)")));
- (SharedEKYCErrorResult * _Nullable)validatePinCodeCode:(NSString *)code __attribute__((swift_name("validatePinCode(code:)")));
- (SharedEKYCErrorResult * _Nullable)validateRecoveryCodeCode:(NSString *)code __attribute__((swift_name("validateRecoveryCode(code:)")));
@end

__attribute__((swift_name("ValidationResult")))
@interface SharedValidationResult : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.Error")))
@interface SharedValidationResultError : SharedValidationResult
- (instancetype)initWithEvent:(SharedEKYCErrorEvent *)event result:(SharedEKYCErrorResult *)result __attribute__((swift_name("init(event:result:)"))) __attribute__((objc_designated_initializer));
- (SharedValidationResultError *)doCopyEvent:(SharedEKYCErrorEvent *)event result:(SharedEKYCErrorResult *)result __attribute__((swift_name("doCopy(event:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedEKYCErrorEvent *event __attribute__((swift_name("event")));
@property (readonly) SharedEKYCErrorResult *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.Ok")))
@interface SharedValidationResultOk : SharedValidationResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ok __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedValidationResultOk *shared __attribute__((swift_name("shared")));
@end

@interface SharedEKYCConfigSDK (Extensions)
- (SharedEKYCConfigSDK *)mergedWithOther:(SharedEKYCConfigSDK *)other __attribute__((swift_name("mergedWith(other:)")));
@end

@interface SharedSDKResult (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)onErrorBlock:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(SharedSDKResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("onError(block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)onExceptionBlock:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(SharedSDKResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("onException(block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)onSuccessBlock:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(SharedSDKResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("onSuccess(block:completionHandler:)")));
@end

@interface SharedValidationResult (Extensions)
- (BOOL)onErrorBlock:(void (^)(SharedEKYCErrorEvent *, SharedEKYCErrorResult *))block __attribute__((swift_name("onError(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuditNfcRequestExtKt")))
@interface SharedAuditNfcRequestExtKt : SharedBase
+ (SharedAuditNfcRequest *)emptyAuditFields __attribute__((swift_name("emptyAuditFields()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildFlagsKt")))
@interface SharedBuildFlagsKt : SharedBase
@property (class, readonly) BOOL isDebugBuild __attribute__((swift_name("isDebugBuild")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurlLoggingPluginKt")))
@interface SharedCurlLoggingPluginKt : SharedBase
@property (class, readonly) id<SharedKtor_client_coreClientPlugin> CurlLoggingPlugin __attribute__((swift_name("CurlLoggingPlugin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceFingerprint_iosKt")))
@interface SharedDeviceFingerprint_iosKt : SharedBase
+ (NSString *)getOrCreateDeviceFingerprint __attribute__((swift_name("getOrCreateDeviceFingerprint()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface SharedKoinKt : SharedBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
+ (void)doInitKoinAppDeclaration:(void (^)(SharedKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appDeclaration:)")));
@property (class, readonly) SharedKoin_coreModule *commonModule __attribute__((swift_name("commonModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorClientFactory_iosKt")))
@interface SharedKtorClientFactory_iosKt : SharedBase
+ (SharedKtor_client_coreHttpClient *)createPlatformClientConfig:(void (^)(SharedKtor_client_coreHttpClientConfig<id> *))config __attribute__((swift_name("createPlatformClient(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidKt")))
@interface SharedUuidKt : SharedBase
+ (NSString *)randomUuid __attribute__((swift_name("randomUuid()")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_authBearerTokens")))
@interface SharedKtor_client_authBearerTokens : SharedBase
- (instancetype)initWithAccessToken:(NSString *)accessToken refreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("init(accessToken:refreshToken:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol SharedKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SharedKtor_ioCloseable <SharedKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SharedKtor_client_coreHttpClient : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SharedKtor_client_coreHttpClientEngine>)engine userConfig:(SharedKtor_client_coreHttpClientConfig<SharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_client_coreHttpClient *)configBlock:(void (^)(SharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SharedKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface SharedKoin_coreKoin : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreScope *)createScopeT:(id<SharedKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) SharedKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) SharedKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) SharedKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinRandom")))
@interface SharedKotlinRandom : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKotlinRandomDefault *companion __attribute__((swift_name("companion")));
- (int32_t)nextBitsBitCount:(int32_t)bitCount __attribute__((swift_name("nextBits(bitCount:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (SharedKotlinByteArray *)nextBytesArray:(SharedKotlinByteArray *)array __attribute__((swift_name("nextBytes(array:)")));
- (SharedKotlinByteArray *)nextBytesSize:(int32_t)size __attribute__((swift_name("nextBytes(size:)")));
- (SharedKotlinByteArray *)nextBytesArray:(SharedKotlinByteArray *)array fromIndex:(int32_t)fromIndex toIndex:(int32_t)toIndex __attribute__((swift_name("nextBytes(array:fromIndex:toIndex:)")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (double)nextDoubleUntil:(double)until __attribute__((swift_name("nextDouble(until:)")));
- (double)nextDoubleFrom:(double)from until:(double)until __attribute__((swift_name("nextDouble(from:until:)")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (int32_t)nextIntUntil:(int32_t)until __attribute__((swift_name("nextInt(until:)")));
- (int32_t)nextIntFrom:(int32_t)from until:(int32_t)until __attribute__((swift_name("nextInt(from:until:)")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
- (int64_t)nextLongUntil:(int64_t)until __attribute__((swift_name("nextLong(until:)")));
- (int64_t)nextLongFrom:(int64_t)from until:(int64_t)until __attribute__((swift_name("nextLong(from:until:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SharedKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_client_coreClientPlugin")))
@protocol SharedKtor_client_coreClientPlugin <SharedKtor_client_coreHttpClientPlugin>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface SharedKoin_coreKoinApplication : SharedBase
@property (class, readonly, getter=companion) SharedKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreKoinApplication *)loggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKoin_coreKoinApplication *)modulesModules:(SharedKotlinArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKoin_coreKoinApplication *)modulesModules_:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKoin_coreKoinApplication *)modulesModules__:(SharedKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKoin_coreKoinApplication *)printLoggerLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface SharedKoin_coreModule : SharedBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKoin_coreKoinDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(SharedKotlinArray<SharedKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(SharedKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(SharedKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModule:(SharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(SharedKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<SharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (SharedKoin_coreKoinDefinition<id> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) SharedMutableSet<SharedKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<SharedKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) SharedMutableDictionary<NSString *, SharedKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SharedKtor_client_coreHttpClientConfig<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SharedKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SharedKtor_client_coreHttpClientEngine <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SharedKtor_client_coreHttpClientEngineConfig : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SharedKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SharedKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SharedKtor_eventsEvents : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SharedKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SharedKtor_utilsPipeline<TSubject, TContext> : SharedBase
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SharedKtor_utilsPipelinePhase *)phase block:(id<SharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SharedKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SharedKtor_client_coreHttpReceivePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponse *, SharedKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SharedKtor_client_coreHttpRequestPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SharedKtor_client_coreHttpResponsePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponseContainer *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SharedKtor_client_coreHttpSendPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface SharedKoin_coreLockable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface SharedKoin_coreScope : SharedKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride holdInstance:(BOOL)holdInstance __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:holdInstance:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id _Nullable)getWithParametersClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("getWithParameters(clazz:qualifier:parameters:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<SharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol SharedKoin_coreKoinScopeComponent <SharedKoin_coreKoinComponent>
@required
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol SharedKoin_coreQualifier
@required
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface SharedKoin_coreParametersHolder : SharedBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(SharedBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) SharedBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface SharedKotlinLazyThreadSafetyMode : SharedKotlinEnum<SharedKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface SharedKoin_coreLogger : SharedBase
- (instancetype)initWithLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(SharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(SharedKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(SharedKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property SharedKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface SharedKoin_coreExtensionManager : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<SharedKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<SharedKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<SharedKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface SharedKoin_coreInstanceRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(SharedKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) SharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface SharedKoin_corePropertyRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface SharedKoin_coreScopeRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<SharedKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) SharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<SharedKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRandom.Default")))
@interface SharedKotlinRandomDefault : SharedKotlinRandom
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinRandomDefault *shared __attribute__((swift_name("shared")));
- (int32_t)nextBitsBitCount:(int32_t)bitCount __attribute__((swift_name("nextBits(bitCount:)")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (SharedKotlinByteArray *)nextBytesArray:(SharedKotlinByteArray *)array __attribute__((swift_name("nextBytes(array:)")));
- (SharedKotlinByteArray *)nextBytesSize:(int32_t)size __attribute__((swift_name("nextBytes(size:)")));
- (SharedKotlinByteArray *)nextBytesArray:(SharedKotlinByteArray *)array fromIndex:(int32_t)fromIndex toIndex:(int32_t)toIndex __attribute__((swift_name("nextBytes(array:fromIndex:toIndex:)")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (double)nextDoubleUntil:(double)until __attribute__((swift_name("nextDouble(until:)")));
- (double)nextDoubleFrom:(double)from until:(double)until __attribute__((swift_name("nextDouble(from:until:)")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (int32_t)nextIntUntil:(int32_t)until __attribute__((swift_name("nextInt(until:)")));
- (int32_t)nextIntFrom:(int32_t)from until:(int32_t)until __attribute__((swift_name("nextInt(from:until:)")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
- (int64_t)nextLongUntil:(int64_t)until __attribute__((swift_name("nextLong(until:)")));
- (int64_t)nextLongFrom:(int64_t)from until:(int64_t)until __attribute__((swift_name("nextLong(from:until:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SharedKtor_utilsAttributeKey<T> : SharedBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(SharedKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(SharedKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface SharedKoin_coreKoinApplicationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (SharedKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface SharedKoin_coreLevel : SharedKotlinEnum<SharedKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedKoin_coreLevel *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface SharedKoin_coreKoinDefinition<R> : SharedBase
- (instancetype)initWithModule:(SharedKoin_coreModule *)module factory:(SharedKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreKoinDefinition<R> *)doCopyModule:(SharedKoin_coreModule *)module factory:(SharedKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) SharedKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface SharedKoin_coreInstanceFactory<T> : SharedKoin_coreLockable
- (instancetype)initWithBeanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(SharedKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) SharedKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface SharedKoin_coreSingleInstanceFactory<T> : SharedKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface SharedKoin_coreScopeDSL : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier module:(SharedKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreKoinDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (SharedKoin_coreKoinDefinition<id> *)scopedQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) SharedKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SharedKtor_client_coreHttpRequestData : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url method:(SharedKtor_httpHttpMethod *)method headers:(id<SharedKtor_httpHeaders>)headers body:(SharedKtor_httpOutgoingContent *)body executionContext:(id<SharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<SharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SharedKtor_client_coreHttpResponseData : SharedBase
- (instancetype)initWithStatusCode:(SharedKtor_httpHttpStatusCode *)statusCode requestTime:(SharedKtor_utilsGMTDate *)requestTime headers:(id<SharedKtor_httpHeaders>)headers version:(SharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SharedKtor_client_coreProxyConfig : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SharedKtor_eventsEventDefinition<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SharedKtor_utilsPipelinePhase : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SharedKtor_client_coreHttpReceivePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SharedKtor_httpHttpMessage
@required
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SharedKtor_client_coreHttpResponse : SharedBase <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SharedKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SharedKtor_client_coreHttpRequestPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SharedKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SharedKtor_httpHttpMessageBuilder
@required
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SharedKtor_client_coreHttpRequestBuilder : SharedBase <SharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SharedKtor_httpURLBuilder *, SharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SharedKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SharedKtor_client_coreHttpResponsePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SharedKtor_client_coreHttpResponseContainer : SharedBase
- (instancetype)initWithExpectedType:(SharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SharedKtor_client_coreHttpClientCall : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client requestData:(SharedKtor_client_coreHttpRequestData *)requestData responseData:(SharedKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(SharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SharedKtor_client_coreHttpSendPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SharedKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol SharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol SharedKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(SharedKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface SharedKoin_coreScopeRegistryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SharedKtor_utilsTypeInfo : SharedBase
- (instancetype)initWithType:(id<SharedKotlinKClass>)type kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface SharedKoin_coreBeanDefinition<T> : SharedBase
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<SharedKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) SharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<SharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<SharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<SharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface SharedKoin_coreInstanceFactoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface SharedKoin_coreResolutionContext : SharedBase
- (instancetype)initWithLogger:(SharedKoin_coreLogger *)logger scope:(SharedKoin_coreScope *)scope clazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<SharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol SharedKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedKtor_httpUrl : SharedBase <SharedKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) SharedKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) SharedKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SharedKtor_httpHttpMethod : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SharedKtor_httpHeaders <SharedKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SharedKtor_httpOutgoingContent : SharedBase
- (id _Nullable)getPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SharedKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SharedKotlinx_coroutines_coreJob <SharedKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedKotlinx_coroutines_coreJob>)plusOther_:(id<SharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SharedKtor_httpHttpStatusCode : SharedBase <SharedKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (SharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SharedKtor_utilsGMTDate : SharedBase <SharedKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (SharedKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SharedKtor_httpHttpProtocolVersion : SharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SharedKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) SharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<SharedKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SharedKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SharedKtor_utilsStringValuesBuilderImpl : SharedBase <SharedKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SharedKtor_httpHeadersBuilder : SharedKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SharedKtor_client_coreHttpRequestBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SharedKtor_httpURLBuilder : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SharedKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property SharedKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SharedKtor_client_coreHttpClientCallCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SharedKtor_client_coreHttpRequest <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface SharedKoin_coreKind : SharedKotlinEnum<SharedKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) SharedKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) SharedKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (SharedKotlinArray<SharedKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface SharedKoin_coreCallbacks<T> : SharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SharedKtor_httpUrlCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedKtor_httpParameters <SharedKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedKtor_httpURLProtocol : SharedBase <SharedKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SharedKtor_httpHttpMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SharedKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SharedKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SharedKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SharedKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SharedKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SharedKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SharedKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SharedKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SharedKtor_httpHeaderValueWithParameters : SharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SharedKtor_httpContentType : SharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SharedKotlinx_coroutines_coreChildHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SharedKotlinx_coroutines_coreChildJob <SharedKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<SharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol SharedKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) SharedKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<SharedKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(SharedKotlinThrowable *, id _Nullable, id<SharedKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<SharedKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0 <SharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SharedKtor_httpHttpStatusCodeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SharedKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SharedKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SharedKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SharedKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SharedKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SharedKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SharedKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SharedKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SharedKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SharedKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SharedKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SharedKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SharedKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SharedKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SharedKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SharedKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SharedKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SharedKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SharedKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SharedKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) SharedKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SharedKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SharedKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SharedKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SharedKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SharedKtor_utilsWeekDay : SharedKotlinEnum<SharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SharedKotlinArray<SharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SharedKtor_utilsMonth : SharedKotlinEnum<SharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SharedKotlinArray<SharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SharedKtor_utilsGMTDateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SharedKtor_httpHttpProtocolVersionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SharedKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol SharedKotlinx_io_coreRawSource <SharedKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(SharedKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol SharedKotlinx_io_coreSource <SharedKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<SharedKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(SharedKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SharedKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<SharedKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SharedKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SharedKtor_httpURLBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SharedKtor_httpParametersBuilder <SharedKtor_utilsStringValuesBuilder>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SharedKtor_httpURLProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SharedKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SharedKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SharedKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SharedKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SharedKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SharedKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SharedKtor_httpHeaderValueParam : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SharedKtor_httpHeaderValueWithParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SharedKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SharedKtor_httpContentTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SharedKotlinx_coroutines_coreParentJob <SharedKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SharedKtor_utilsWeekDayCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SharedKtor_utilsMonthCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol SharedKotlinx_io_coreRawSink <SharedKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(SharedKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol SharedKotlinx_io_coreSink <SharedKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<SharedKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<SharedKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SharedKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SharedKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface SharedKotlinx_io_coreBuffer : SharedBase <SharedKotlinx_io_coreSource, SharedKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (SharedKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(SharedKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<SharedKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(SharedKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(SharedKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SharedKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<SharedKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<SharedKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(SharedKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<SharedKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SharedKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SharedKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (SharedKotlinArray<SharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SharedKotlinKTypeProjectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)contravariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)covariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)invariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
