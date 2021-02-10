/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_RRCReconfiguration_v1560_IEs_H_
#define	_ASN_RRC_RRCReconfiguration_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "ASN_RRC_SK-Counter.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_RRC_SetupRelease_MRDC_SecondaryCellGroupConfig;

/* ASN_RRC_RRCReconfiguration-v1560-IEs */
typedef struct ASN_RRC_RRCReconfiguration_v1560_IEs {
	struct ASN_RRC_SetupRelease_MRDC_SecondaryCellGroupConfig	*mrdc_SecondaryCellGroupConfig;	/* OPTIONAL */
	OCTET_STRING_t	*radioBearerConfig2;	/* OPTIONAL */
	ASN_RRC_SK_Counter_t	*sk_Counter;	/* OPTIONAL */
	struct ASN_RRC_RRCReconfiguration_v1560_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_RRCReconfiguration_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_RRCReconfiguration_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_RRCReconfiguration_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_RRCReconfiguration_v1560_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_RRCReconfiguration_v1560_IEs_H_ */
#include <asn_internal.h>