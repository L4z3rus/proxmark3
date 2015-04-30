#include "cmdhfmf.h"
#include "cmdhf14a.h"

#ifndef CMDHFMFU_H__
#define CMDHFMFU_H__

//standard ultralight
int CmdHF14AMfUWrBl(const char *Cmd);
int CmdHF14AMfURdBl(const char *Cmd);

//Crypto Cards
int CmdHF14AMfUCRdBl(const char *Cmd);
int CmdHF14AMfUCRdCard(const char *Cmd);
int CmdHF14AMfucAuth(const char *Cmd);

//general stuff
int CmdHF14AMfUDump(const char *Cmd);
void rol (uint8_t *data, const size_t len);

uint8_t requestAuthentication( uint8_t *nonce);
int try3DesAuthentication( uint8_t *key);
uint8_t GetHF14AMfU_Type();

int usage_hf_mfu_dump();

int CmdHFMFUltra(const char *Cmd);
int CmdHF14AMfUInfo(const char *Cmd);
#endif
