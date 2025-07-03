import Foundation

public class PrivittySDK {
    
    enum PrvEventType: Int32 {
        case prvEventNone                      = 0
        case prvEventCreateVault               = 1
        case prvEventDeinit                    = 2
        case prvEventAbort                     = 3
        case prvEventShutdown                  = 4
        case prvEventAddNewPeer                = 5
        case prvEventReceivedPeerPdu           = 6
        case prvEventStopRendering             = 7
        case prvEventPeerOffline               = 8
        case prvEventPeerTimeoutReached        = 9
        case prvEventFileSanityFailed          = 10
        /*
         * NOTE: Add any event above prvEventLast and update prvEventLast
         */
        case prvEventLast                      = 11

    }
}
