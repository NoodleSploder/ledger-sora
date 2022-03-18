

#ifndef SORA_ENUM_H
    #define SORA_ENUM_H
    typedef enum {
    	Transfer,
        AddAsset,
        AddPeer,
        RemovePeer,
        PrepareForMigration,
        Migrate,
        AddPeerCompat,
        RemovePeerCompat,
        TransferXOR
    } pd_IncomingTransactionRequestKind_e;



    typedef enum {
        CancelOutgoingRequest=0,
        MarkAsDone
    } pd_IncomingMetaRequestKind_e;


    typedef enum {
        Transaction = 0,
        Meta
    } pd_IncomingRequestKind_e;


    typedef struct {
        pd_IncomingTransactionRequestKind_e type;
        uint64_t idx;
        const uint8_t* idPtr;
    } pd_IncomingTransactionRequestKind_t;
#endif