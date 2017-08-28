/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "ValidationParms.h"

asn_TYPE_member_t asn_MBR_ValidationParms_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ValidationParms, seed),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"seed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ValidationParms, pgenCounter),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"pgenCounter"
		},
};
static const ber_tlv_tag_t asn_DEF_ValidationParms_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ValidationParms_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* pgenCounter */
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 0, 0, 0 } /* seed */
};
asn_SEQUENCE_specifics_t asn_SPC_ValidationParms_specs_1 = {
	sizeof(struct ValidationParms),
	offsetof(struct ValidationParms, _asn_ctx),
	asn_MAP_ValidationParms_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ValidationParms = {
	"ValidationParms",
	"ValidationParms",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_ValidationParms_tags_1,
	sizeof(asn_DEF_ValidationParms_tags_1)
		/sizeof(asn_DEF_ValidationParms_tags_1[0]), /* 1 */
	asn_DEF_ValidationParms_tags_1,	/* Same as above */
	sizeof(asn_DEF_ValidationParms_tags_1)
		/sizeof(asn_DEF_ValidationParms_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_ValidationParms_1,
	2,	/* Elements count */
	&asn_SPC_ValidationParms_specs_1	/* Additional specs */
};

