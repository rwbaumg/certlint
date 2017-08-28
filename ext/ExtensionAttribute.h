/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_ExtensionAttribute_H_
#define	_ExtensionAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExtensionAttribute */
typedef struct ExtensionAttribute {
	long	 extension_attribute_type;
	ANY_t	 extension_attribute_value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExtensionAttribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExtensionAttribute;
extern asn_SEQUENCE_specifics_t asn_SPC_ExtensionAttribute_specs_1;
extern asn_TYPE_member_t asn_MBR_ExtensionAttribute_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ExtensionAttribute_H_ */
#include <asn_internal.h>
