/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_NameConstraints_H_
#define	_NameConstraints_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GeneralSubtrees;

/* NameConstraints */
typedef struct NameConstraints {
	struct GeneralSubtrees	*permittedSubtrees	/* OPTIONAL */;
	struct GeneralSubtrees	*excludedSubtrees	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NameConstraints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NameConstraints;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeneralSubtrees.h"

#endif	/* _NameConstraints_H_ */
#include <asn_internal.h>
