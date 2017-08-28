/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_ECParameters_H_
#define	_ECParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECPVer.h"
#include "FieldID.h"
#include "Curve.h"
#include "ECPoint.h"
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ECParameters */
typedef struct ECParameters {
	ECPVer_t	 version;
	FieldID_t	 fieldID;
	Curve_t	 curve;
	ECPoint_t	 base;
	INTEGER_t	 order;
	INTEGER_t	*cofactor	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ECParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ECParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ECParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ECParameters_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ECParameters_H_ */
#include <asn_internal.h>
