/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "GeneralNames.h"

asn_TYPE_member_t asn_MBR_GeneralNames_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_GeneralName,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_GeneralNames_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_GeneralNames_specs_1 = {
	sizeof(struct GeneralNames),
	offsetof(struct GeneralNames, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_GeneralNames = {
	"GeneralNames",
	"GeneralNames",
	&asn_OP_SEQUENCE_OF,
	SEQUENCE_OF_constraint,
	asn_DEF_GeneralNames_tags_1,
	sizeof(asn_DEF_GeneralNames_tags_1)
		/sizeof(asn_DEF_GeneralNames_tags_1[0]), /* 1 */
	asn_DEF_GeneralNames_tags_1,	/* Same as above */
	sizeof(asn_DEF_GeneralNames_tags_1)
		/sizeof(asn_DEF_GeneralNames_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_GeneralNames_1,
	1,	/* Single element */
	&asn_SPC_GeneralNames_specs_1	/* Additional specs */
};

