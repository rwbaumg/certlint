/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "asn1/rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "OtherLogotypeInfo.h"

asn_TYPE_member_t asn_MBR_OtherLogotypeInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherLogotypeInfo, logotypeType),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"logotypeType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OtherLogotypeInfo, info),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_LogotypeInfo,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"info"
		},
};
static const ber_tlv_tag_t asn_DEF_OtherLogotypeInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OtherLogotypeInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* logotypeType */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* direct */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* indirect */
};
asn_SEQUENCE_specifics_t asn_SPC_OtherLogotypeInfo_specs_1 = {
	sizeof(struct OtherLogotypeInfo),
	offsetof(struct OtherLogotypeInfo, _asn_ctx),
	asn_MAP_OtherLogotypeInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OtherLogotypeInfo = {
	"OtherLogotypeInfo",
	"OtherLogotypeInfo",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_OtherLogotypeInfo_tags_1,
	sizeof(asn_DEF_OtherLogotypeInfo_tags_1)
		/sizeof(asn_DEF_OtherLogotypeInfo_tags_1[0]), /* 1 */
	asn_DEF_OtherLogotypeInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_OtherLogotypeInfo_tags_1)
		/sizeof(asn_DEF_OtherLogotypeInfo_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_OtherLogotypeInfo_1,
	2,	/* Elements count */
	&asn_SPC_OtherLogotypeInfo_specs_1	/* Additional specs */
};

