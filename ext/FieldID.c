/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "FieldID.h"

asn_TYPE_member_t asn_MBR_FieldID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FieldID, fieldType),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fieldType"
		},
	{ ATF_ANY_TYPE | ATF_NOFLAGS, 0, offsetof(struct FieldID, parameters),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ANY,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"parameters"
		},
};
static const ber_tlv_tag_t asn_DEF_FieldID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FieldID_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 } /* fieldType */
};
asn_SEQUENCE_specifics_t asn_SPC_FieldID_specs_1 = {
	sizeof(struct FieldID),
	offsetof(struct FieldID, _asn_ctx),
	asn_MAP_FieldID_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FieldID = {
	"FieldID",
	"FieldID",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_FieldID_tags_1,
	sizeof(asn_DEF_FieldID_tags_1)
		/sizeof(asn_DEF_FieldID_tags_1[0]), /* 1 */
	asn_DEF_FieldID_tags_1,	/* Same as above */
	sizeof(asn_DEF_FieldID_tags_1)
		/sizeof(asn_DEF_FieldID_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_FieldID_1,
	2,	/* Elements count */
	&asn_SPC_FieldID_specs_1	/* Additional specs */
};

