/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "TeletexDomainDefinedAttribute.h"

static int
memb_type_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const TeletexString_t *st = (const TeletexString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_value_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const TeletexString_t *st = (const TeletexString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

asn_TYPE_member_t asn_MBR_TeletexDomainDefinedAttribute_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TeletexDomainDefinedAttribute, type),
		(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),
		0,
		&asn_DEF_TeletexString,
		0,
		memb_type_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TeletexDomainDefinedAttribute, value),
		(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),
		0,
		&asn_DEF_TeletexString,
		0,
		memb_value_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_TeletexDomainDefinedAttribute_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TeletexDomainDefinedAttribute_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (20 << 2)), 0, 0, 1 }, /* type */
    { (ASN_TAG_CLASS_UNIVERSAL | (20 << 2)), 1, -1, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_TeletexDomainDefinedAttribute_specs_1 = {
	sizeof(struct TeletexDomainDefinedAttribute),
	offsetof(struct TeletexDomainDefinedAttribute, _asn_ctx),
	asn_MAP_TeletexDomainDefinedAttribute_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TeletexDomainDefinedAttribute = {
	"TeletexDomainDefinedAttribute",
	"TeletexDomainDefinedAttribute",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_TeletexDomainDefinedAttribute_tags_1,
	sizeof(asn_DEF_TeletexDomainDefinedAttribute_tags_1)
		/sizeof(asn_DEF_TeletexDomainDefinedAttribute_tags_1[0]), /* 1 */
	asn_DEF_TeletexDomainDefinedAttribute_tags_1,	/* Same as above */
	sizeof(asn_DEF_TeletexDomainDefinedAttribute_tags_1)
		/sizeof(asn_DEF_TeletexDomainDefinedAttribute_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_TeletexDomainDefinedAttribute_1,
	2,	/* Elements count */
	&asn_SPC_TeletexDomainDefinedAttribute_specs_1	/* Additional specs */
};

