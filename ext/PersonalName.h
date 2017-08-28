/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_PersonalName_H_
#define	_PersonalName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum PersonalName_PR {
	PersonalName_PR_surname,	/* Member surname is present */
	PersonalName_PR_given_name,	/* Member given_name is present */
	PersonalName_PR_initials,	/* Member initials is present */
	PersonalName_PR_generation_qualifier,	/* Member generation_qualifier is present */
} PersonalName_PR;

/* PersonalName */
typedef struct PersonalName {
	PrintableString_t	 surname;
	PrintableString_t	*given_name	/* OPTIONAL */;
	PrintableString_t	*initials	/* OPTIONAL */;
	PrintableString_t	*generation_qualifier	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pPersonalName, PersonalName_PR_x) */
	unsigned int _presence_map
		[((4+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PersonalName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonalName;
extern asn_SET_specifics_t asn_SPC_PersonalName_specs_1;
extern asn_TYPE_member_t asn_MBR_PersonalName_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PersonalName_H_ */
#include <asn_internal.h>
