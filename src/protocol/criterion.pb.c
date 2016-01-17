/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.5-dev at Sun Jan 17 02:06:50 2016. */

#include "criterion.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const int32_t criterion_protocol_msg_version_default = 1;


const pb_field_t criterion_protocol_birth_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, POINTER , FIRST, criterion_protocol_birth, name, name, 0),
    PB_FIELD(  2, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_birth, timestamp, name, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_phase_fields[5] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, criterion_protocol_phase, phase, phase, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, POINTER , OTHER, criterion_protocol_phase, name, phase, 0),
    PB_FIELD(  3, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_phase, timestamp, name, 0),
    PB_FIELD(  4, STRING  , OPTIONAL, POINTER , OTHER, criterion_protocol_phase, message, timestamp, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_death_fields[4] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, criterion_protocol_death, result, result, 0),
    PB_FIELD(  2, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_death, status, result, 0),
    PB_FIELD(  3, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_death, timestamp, status, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_assert_fields[5] = {
    PB_FIELD(  1, STRING  , REQUIRED, POINTER , FIRST, criterion_protocol_assert, message, message, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, criterion_protocol_assert, passed, message, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, POINTER , OTHER, criterion_protocol_assert, file, passed, 0),
    PB_FIELD(  4, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_assert, line, file, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_log_fields[3] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, criterion_protocol_log, severity, severity, 0),
    PB_FIELD(  2, STRING  , REQUIRED, POINTER , OTHER, criterion_protocol_log, message, severity, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_ack_fields[3] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, criterion_protocol_ack, status_code, status_code, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, POINTER , OTHER, criterion_protocol_ack, message, status_code, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_submessage_fields[6] = {
    PB_ONEOF_FIELD(value,   1, MESSAGE , ONEOF, STATIC  , FIRST, criterion_protocol_submessage, birth, birth, &criterion_protocol_birth_fields),
    PB_ONEOF_FIELD(value,   2, MESSAGE , ONEOF, STATIC  , FIRST, criterion_protocol_submessage, phase, phase, &criterion_protocol_phase_fields),
    PB_ONEOF_FIELD(value,   3, MESSAGE , ONEOF, STATIC  , FIRST, criterion_protocol_submessage, death, death, &criterion_protocol_death_fields),
    PB_ONEOF_FIELD(value,   4, MESSAGE , ONEOF, STATIC  , FIRST, criterion_protocol_submessage, message, message, &criterion_protocol_log_fields),
    PB_ONEOF_FIELD(value,   5, MESSAGE , ONEOF, STATIC  , FIRST, criterion_protocol_submessage, assert, assert, &criterion_protocol_assert_fields),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_msg_fields[5] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, criterion_protocol_msg, version, version, &criterion_protocol_msg_version_default),
    PB_ONEOF_FIELD(id,   2, INT64   , ONEOF, STATIC  , OTHER, criterion_protocol_msg, pid, version, 0),
    PB_ONEOF_FIELD(id,   3, STRING  , ONEOF, POINTER , OTHER, criterion_protocol_msg, uid, version, 0),
    PB_FIELD( 16, MESSAGE , REQUIRED, STATIC  , OTHER, criterion_protocol_msg, data, id.uid, &criterion_protocol_submessage_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(criterion_protocol_submessage, value.birth) < 65536 && pb_membersize(criterion_protocol_submessage, value.phase) < 65536 && pb_membersize(criterion_protocol_submessage, value.death) < 65536 && pb_membersize(criterion_protocol_submessage, value.message) < 65536 && pb_membersize(criterion_protocol_submessage, value.assert) < 65536 && pb_membersize(criterion_protocol_submessage, value.birth) < 65536 && pb_membersize(criterion_protocol_submessage, value.phase) < 65536 && pb_membersize(criterion_protocol_submessage, value.death) < 65536 && pb_membersize(criterion_protocol_submessage, value.message) < 65536 && pb_membersize(criterion_protocol_submessage, value.assert) < 65536 && pb_membersize(criterion_protocol_submessage, value.birth) < 65536 && pb_membersize(criterion_protocol_submessage, value.phase) < 65536 && pb_membersize(criterion_protocol_submessage, value.death) < 65536 && pb_membersize(criterion_protocol_submessage, value.message) < 65536 && pb_membersize(criterion_protocol_submessage, value.assert) < 65536 && pb_membersize(criterion_protocol_submessage, value.birth) < 65536 && pb_membersize(criterion_protocol_submessage, value.phase) < 65536 && pb_membersize(criterion_protocol_submessage, value.death) < 65536 && pb_membersize(criterion_protocol_submessage, value.message) < 65536 && pb_membersize(criterion_protocol_submessage, value.assert) < 65536 && pb_membersize(criterion_protocol_msg, data) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_criterion_protocol_birth_criterion_protocol_phase_criterion_protocol_death_criterion_protocol_assert_criterion_protocol_log_criterion_protocol_ack_criterion_protocol_submessage_criterion_protocol_msg)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(criterion_protocol_submessage, value.birth) < 256 && pb_membersize(criterion_protocol_submessage, value.phase) < 256 && pb_membersize(criterion_protocol_submessage, value.death) < 256 && pb_membersize(criterion_protocol_submessage, value.message) < 256 && pb_membersize(criterion_protocol_submessage, value.assert) < 256 && pb_membersize(criterion_protocol_submessage, value.birth) < 256 && pb_membersize(criterion_protocol_submessage, value.phase) < 256 && pb_membersize(criterion_protocol_submessage, value.death) < 256 && pb_membersize(criterion_protocol_submessage, value.message) < 256 && pb_membersize(criterion_protocol_submessage, value.assert) < 256 && pb_membersize(criterion_protocol_submessage, value.birth) < 256 && pb_membersize(criterion_protocol_submessage, value.phase) < 256 && pb_membersize(criterion_protocol_submessage, value.death) < 256 && pb_membersize(criterion_protocol_submessage, value.message) < 256 && pb_membersize(criterion_protocol_submessage, value.assert) < 256 && pb_membersize(criterion_protocol_submessage, value.birth) < 256 && pb_membersize(criterion_protocol_submessage, value.phase) < 256 && pb_membersize(criterion_protocol_submessage, value.death) < 256 && pb_membersize(criterion_protocol_submessage, value.message) < 256 && pb_membersize(criterion_protocol_submessage, value.assert) < 256 && pb_membersize(criterion_protocol_msg, data) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_criterion_protocol_birth_criterion_protocol_phase_criterion_protocol_death_criterion_protocol_assert_criterion_protocol_log_criterion_protocol_ack_criterion_protocol_submessage_criterion_protocol_msg)
#endif


