int __fastcall sub_6C910(unsigned __int8 *a1, int *a2)
{
  int v4; // r4
  _BYTE *v5; // r6
  int v6; // r4
  const __int32_t **v7; // r0
  _BYTE *v8; // r3
  int v9; // t1
  int v10; // r4
  int v11; // r0
  int digestbyname; // r0
  unsigned int v13; // r0
  unsigned int v14; // r6
  int v15; // r3
  struct _IO_FILE *v16; // r5
  const char *v17; // r0
  int v18; // r0
  const char *v19; // r0
  struct _IO_FILE *v21; // r8
  const char *v22; // r0
  int v23; // r0
  const char *v24; // r0

  if ( !ssl_init_done )
    sub_6C6B8();
  v4 = lib_nextbuf;
  v5 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v5, 0, 0x80u);
  lib_nextbuf = ((_BYTE)v4 + 1) & 0xF;
  sub_6D4DC(v5);
  v6 = (unsigned __int8)lib_stringbuf[128 * v4];
  if ( v6 )
  {
    v7 = _ctype_toupper_loc();
    v8 = v5;
    do
    {
      *v8 = (*v7)[v6];
      v9 = (unsigned __int8)*++v8;
      v6 = v9;
    }
    while ( v9 );
  }
  v10 = OBJ_sn2nid(v5);
  if ( v10 )
  {
LABEL_10:
    if ( a2 )
      goto LABEL_11;
    return v10;
  }
  if ( !strcmp("AES128CMAC", v5) )
  {
    v10 = 894;
    if ( debug )
      _fprintf_chk(stderr, 1, "%s:%d:%s():%s:key\n", "ssl_init.c", 135, "keytype_from_text", "AES128CMAC");
    goto LABEL_10;
  }
  if ( (*_ctype_tolower_loc())[*a1] == 109 )
  {
    v10 = 4;
    if ( a2 )
    {
LABEL_11:
      v11 = OBJ_nid2sn(v10);
      digestbyname = EVP_get_digestbyname(v11);
      if ( digestbyname && (v13 = EVP_MD_size(digestbyname), v14 = v13, (v15 = v13) != 0) )
      {
        if ( v13 > 0x14 )
        {
          v16 = stderr;
          v17 = sub_6C7EC(v10);
          _fprintf_chk(v16, 1, "key type %s %u octet digests are too big, max %lu\n", v17, v14, 20);
          v18 = v10;
          v10 = 0;
          v19 = sub_6C7EC(v18);
          sub_64E00((_BYTE *)&dword_0 + 3, "key type %s %u octet digests are too big, max %lu", v19, v14, 20);
          return v10;
        }
      }
      else
      {
        if ( v10 != 894 )
        {
          v21 = stderr;
          v22 = sub_6C7EC(v10);
          _fprintf_chk(v21, 1, "key type %s is not supported by OpenSSL\n", v22);
          v23 = v10;
          v10 = 0;
          v24 = sub_6C7EC(v23);
          sub_64E00((_BYTE *)&dword_0 + 3, "key type %s is not supported by OpenSSL\n", v24);
          return v10;
        }
        if ( debug )
          _fprintf_chk(stderr, 1, "%s:%d:%s():%s:len\n", "ssl_init.c", 164, "keytype_from_text", "AES128CMAC");
        v15 = 16;
      }
      *a2 = v15;
    }
  }
  return v10;
}
