/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_BuiltInDomainDefinedAttribute_H_
#define	_BuiltInDomainDefinedAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BuiltInDomainDefinedAttribute */
typedef struct BuiltInDomainDefinedAttribute {
	PrintableString_t	 type;
	PrintableString_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BuiltInDomainDefinedAttribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BuiltInDomainDefinedAttribute;
extern asn_SEQUENCE_specifics_t asn_SPC_BuiltInDomainDefinedAttribute_specs_1;
extern asn_TYPE_member_t asn_MBR_BuiltInDomainDefinedAttribute_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BuiltInDomainDefinedAttribute_H_ */
#include <asn_internal.h>
