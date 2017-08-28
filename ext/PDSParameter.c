/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "PDSParameter.h"

static const int permitted_alphabet_table_2[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};

static int check_permitted_alphabet_2(const void *sptr) {
	const int *table = permitted_alphabet_table_2;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_printable_string_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 30)
		 && !check_permitted_alphabet_2(st)) {
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
memb_teletex_string_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 30)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

asn_TYPE_member_t asn_MBR_PDSParameter_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PDSParameter, printable_string),
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_PrintableString,
		0,
		memb_printable_string_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"printable-string"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSParameter, teletex_string),
		(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),
		0,
		&asn_DEF_TeletexString,
		0,
		memb_teletex_string_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"teletex-string"
		},
};
static const ber_tlv_tag_t asn_DEF_PDSParameter_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSParameter_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (19 << 2)), 0, 0, 0 }, /* printable-string */
    { (ASN_TAG_CLASS_UNIVERSAL | (20 << 2)), 1, 0, 0 } /* teletex-string */
};
static const uint8_t asn_MAP_PDSParameter_mmap_1[(2 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(0 << 7) | (0 << 6)
};
asn_SET_specifics_t asn_SPC_PDSParameter_specs_1 = {
	sizeof(struct PDSParameter),
	offsetof(struct PDSParameter, _asn_ctx),
	offsetof(struct PDSParameter, _presence_map),
	asn_MAP_PDSParameter_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PDSParameter_tag2el_1,	/* Same as above */
	2,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(const unsigned int *)asn_MAP_PDSParameter_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_PDSParameter = {
	"PDSParameter",
	"PDSParameter",
	&asn_OP_SET,
	SET_constraint,
	asn_DEF_PDSParameter_tags_1,
	sizeof(asn_DEF_PDSParameter_tags_1)
		/sizeof(asn_DEF_PDSParameter_tags_1[0]), /* 1 */
	asn_DEF_PDSParameter_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSParameter_tags_1)
		/sizeof(asn_DEF_PDSParameter_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_PDSParameter_1,
	2,	/* Elements count */
	&asn_SPC_PDSParameter_specs_1	/* Additional specs */
};

