/*
 * Do not modify this file. Changes will be overwritten.
 *
 * Generated automatically by the "register.c" target in
 * epan/dissectors/Makefile or Makefile.nmake using
 * ../../tools/make-dissector-reg.py
 * and information in epan/dissectors/register-cache.pkl.
 *
 * You can force this file to be regenerated completely by deleting
 * it along with epan/dissectors/register-cache.pkl.
 */

#include "register.h"
void
register_all_protocols(register_cb cb, gpointer client_data)
{
  {extern void proto_register_data (void); if(cb) (*cb)(RA_REGISTER, "proto_register_data", client_data); proto_register_data ();}
  {extern void proto_register_frame (void); if(cb) (*cb)(RA_REGISTER, "proto_register_frame", client_data); proto_register_frame ();}
}

void
register_all_protocol_handoffs(register_cb cb, gpointer client_data)
{
  {extern void proto_reg_handoff_frame (void); if(cb) (*cb)(RA_HANDOFF, "proto_reg_handoff_frame", client_data); proto_reg_handoff_frame ();}
}

static gulong proto_reg_count(void)
{
  return 2;
}

static gulong handoff_reg_count(void)
{
  return 1;
}

gulong register_count(void)
{
  return proto_reg_count() + handoff_reg_count();
}

