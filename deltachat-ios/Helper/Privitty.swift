import Foundation

public class PrivittySDK {
    
    enum PrvEventType: Int32 {
        case prvEventNone                                       = 0
        case prvEventCreateVault                                = 1
        case prvEventDeinit                                     = 2
        case prvEventAbort                                      = 3
        case prvEventShutdown                                   = 4
        case prvEventAddNewPeer                                 = 5
        case prvEventReceivedPeerPdu                            = 6
        case prvEventStopRendering                              = 7
        case prvEventPeerOffline                                = 8
        case prvEventPeerTimeoutReached                         = 9
        case prvEventFileSanityFailed                           = 10
        /*
         * NOTE: Add any event above prvEventLast and update prvEventLast
         */
        case prvEventLast                                       = 11
    }

    enum PrvAppStatus: Int {
        case prvAppStatusError                                  = 0
        case prvAppStatusFailed                                 = 1
        case prvAppStatusInvalidRequest                         = 2
        case prvAppStatusVaultIsReady                           = 3
        case prvAppStatusVaultFailed                            = 4
        case prvAppStatusUserAlreadyExists                      = 5
        case prvAppStatusUserNotExists                          = 6
        case prvAppStatusPeerAlreadtAdded                       = 7
        case prvAppStatusSendPeerPdu                            = 8
        case prvAppStatusPeerAddAccepted                        = 9
        case prvAppStatusPeerAddComplete                        = 10
        case prvAppStatusPeerAddConcluded                       = 11
        case prvAppStatusPeerAddPending                         = 12
        case prvAppStatusPeerBlocked                            = 13
        case prvAppStatusFileEncrypted                          = 14
        case prvAppStatusFileEncryptionFailed                   = 15
        case prvAppStatusFileDecryptedFailed                    = 16
        case prvAppStatusInvalidFile                            = 17
        case prvAppStatusFileInaccessible                       = 18
        case prvAppStatusAwaitingPeerAuth                       = 19
        case prvAppStatusPeerSplitkeysRequest                   = 20
        case prvAppStatusPeerSplitkeysResponse                  = 21
        case prvAppStatusPeerSplitkeysRevoked                   = 22
        case prvAppStatusPeerOtspSplitkeys                      = 23
        case prvAppStatusDeleteChat                             = 24
        case prvAppStatusGroupAlreadyExists                     = 25
        case prvAppStatusGroupAddAccepted                       = 26
        case prvAppStatusForwardPdu                             = 27
        case prvAppStatusForwardSplitkeysRequest                = 28
        case prvAppStatusRelayForwardSplitkeysRequest           = 29
        case prvAppStatusRevertForwardSplitkeysRequest          = 30
        case prvAppStatusRelayBackwardSplitkeysResponse         = 31
        case prvAppStatusPeerSplitkeysDeleted                   = 32
        case prvAppStatusPeerSplitkeysRestore                   = 33
        case prvAppStatusForwardSplitkeysRevoked                = 34

        /*
         * NOTE: Add any event above PrvAppStatusLast and update PrvAppStatusLast
         */
        case prvAppStatusLast                                   = 35
    }
}
