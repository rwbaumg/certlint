/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "TeletexOrganizationalUnitName.h"

int
TeletexOrganizationalUnitName_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using TeletexString,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_TeletexOrganizationalUnitName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (20 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TeletexOrganizationalUnitName = {
	"TeletexOrganizationalUnitName",
	"TeletexOrganizationalUnitName",
	&asn_OP_TeletexString,
	TeletexOrganizationalUnitName_constraint,
	asn_DEF_TeletexOrganizationalUnitName_tags_1,
	sizeof(asn_DEF_TeletexOrganizationalUnitName_tags_1)
		/sizeof(asn_DEF_TeletexOrganizationalUnitName_tags_1[0]), /* 1 */
	asn_DEF_TeletexOrganizationalUnitName_tags_1,	/* Same as above */
	sizeof(asn_DEF_TeletexOrganizationalUnitName_tags_1)
		/sizeof(asn_DEF_TeletexOrganizationalUnitName_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

