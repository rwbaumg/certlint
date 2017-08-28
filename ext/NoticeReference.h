/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_NoticeReference_H_
#define	_NoticeReference_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DisplayText.h"
#include <INTEGER.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NoticeReference */
typedef struct NoticeReference {
	DisplayText_t	 organization;
	struct noticeNumbers {
		A_SEQUENCE_OF(INTEGER_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} noticeNumbers;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NoticeReference_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NoticeReference;
extern asn_SEQUENCE_specifics_t asn_SPC_NoticeReference_specs_1;
extern asn_TYPE_member_t asn_MBR_NoticeReference_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NoticeReference_H_ */
#include <asn_internal.h>
