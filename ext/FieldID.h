/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_FieldID_H_
#define	_FieldID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FieldID */
typedef struct FieldID {
	OBJECT_IDENTIFIER_t	 fieldType;
	ANY_t	 parameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FieldID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FieldID;
extern asn_SEQUENCE_specifics_t asn_SPC_FieldID_specs_1;
extern asn_TYPE_member_t asn_MBR_FieldID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FieldID_H_ */
#include <asn_internal.h>
