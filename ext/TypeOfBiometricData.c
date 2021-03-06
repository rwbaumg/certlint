/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXqualified88"
 * 	found in "asn1/rfc3739-PKIXqualified88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "TypeOfBiometricData.h"

asn_TYPE_member_t asn_MBR_TypeOfBiometricData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TypeOfBiometricData, choice.predefinedBiometricType),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PredefinedBiometricType,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"predefinedBiometricType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TypeOfBiometricData, choice.biometricDataOid),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"biometricDataOid"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TypeOfBiometricData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* predefinedBiometricType */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 1, 0, 0 } /* biometricDataOid */
};
asn_CHOICE_specifics_t asn_SPC_TypeOfBiometricData_specs_1 = {
	sizeof(struct TypeOfBiometricData),
	offsetof(struct TypeOfBiometricData, _asn_ctx),
	offsetof(struct TypeOfBiometricData, present),
	sizeof(((struct TypeOfBiometricData *)0)->present),
	asn_MAP_TypeOfBiometricData_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TypeOfBiometricData = {
	"TypeOfBiometricData",
	"TypeOfBiometricData",
	&asn_OP_CHOICE,
	CHOICE_constraint,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_TypeOfBiometricData_1,
	2,	/* Elements count */
	&asn_SPC_TypeOfBiometricData_specs_1	/* Additional specs */
};

