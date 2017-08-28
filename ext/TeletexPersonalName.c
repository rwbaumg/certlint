/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "TeletexPersonalName.h"

static int
memb_surname_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 40)) {
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
memb_given_name_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_initials_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 5)) {
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
memb_generation_qualifier_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_TeletexPersonalName_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TeletexPersonalName, surname),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TeletexString,
		0,
		memb_surname_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"surname"
		},
	{ ATF_POINTER, 3, offsetof(struct TeletexPersonalName, given_name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TeletexString,
		0,
		memb_given_name_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"given-name"
		},
	{ ATF_POINTER, 2, offsetof(struct TeletexPersonalName, initials),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TeletexString,
		0,
		memb_initials_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initials"
		},
	{ ATF_POINTER, 1, offsetof(struct TeletexPersonalName, generation_qualifier),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TeletexString,
		0,
		memb_generation_qualifier_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"generation-qualifier"
		},
};
static const ber_tlv_tag_t asn_DEF_TeletexPersonalName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TeletexPersonalName_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* surname */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* given-name */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* initials */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* generation-qualifier */
};
static const uint8_t asn_MAP_TeletexPersonalName_mmap_1[(4 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(1 << 7) | (0 << 6) | (0 << 5) | (0 << 4)
};
static 
asn_SET_specifics_t asn_SPC_TeletexPersonalName_specs_1 = {
	sizeof(struct TeletexPersonalName),
	offsetof(struct TeletexPersonalName, _asn_ctx),
	offsetof(struct TeletexPersonalName, _presence_map),
	asn_MAP_TeletexPersonalName_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_TeletexPersonalName_tag2el_1,	/* Same as above */
	4,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(const unsigned int *)asn_MAP_TeletexPersonalName_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_TeletexPersonalName = {
	"TeletexPersonalName",
	"TeletexPersonalName",
	&asn_OP_SET,
	SET_constraint,
	asn_DEF_TeletexPersonalName_tags_1,
	sizeof(asn_DEF_TeletexPersonalName_tags_1)
		/sizeof(asn_DEF_TeletexPersonalName_tags_1[0]), /* 1 */
	asn_DEF_TeletexPersonalName_tags_1,	/* Same as above */
	sizeof(asn_DEF_TeletexPersonalName_tags_1)
		/sizeof(asn_DEF_TeletexPersonalName_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_TeletexPersonalName_1,
	4,	/* Elements count */
	&asn_SPC_TeletexPersonalName_specs_1	/* Additional specs */
};

