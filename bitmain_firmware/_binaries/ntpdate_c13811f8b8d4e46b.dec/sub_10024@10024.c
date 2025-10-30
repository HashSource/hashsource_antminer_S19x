int __fastcall sub_10024(unsigned __int8 *a1, int *a2)
{
  int v4; // r4
  _BYTE *v5; // r6
  int v6; // r4
  const __int32_t **v7; // r0
  _BYTE *v8; // r3
  int v9; // t1
  int v10; // r4
  int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r6
  int v14; // r3
  struct _IO_FILE *v15; // r5
  const char *v16; // r0
  int v17; // r0
  const char *v18; // r0
  struct _IO_FILE *v20; // r8
  const char *v21; // r0
  int v22; // r0
  const char *v23; // r0

  if ( !ssl_init_done )
    sub_FDCC();
  v4 = lib_nextbuf;
  v5 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v5, 0, 0x80u);
  lib_nextbuf = ((_BYTE)v4 + 1) & 0xF;
  sub_103C4(v5, a1, 128);
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
      if ( EVP_get_digestbyname(v11) && (v12 = EVP_MD_size(), v13 = v12, (v14 = v12) != 0) )
      {
        if ( v12 > 0x14 )
        {
          v15 = stderr;
          v16 = sub_FF00(v10);
          _fprintf_chk(v15, 1, "key type %s %u octet digests are too big, max %lu\n", v16, v13, 20);
          v17 = v10;
          v10 = 0;
          v18 = sub_FF00(v17);
          sub_A828((_BYTE *)&dword_0 + 3, "key type %s %u octet digests are too big, max %lu", v18, v13, 20);
          return v10;
        }
      }
      else
      {
        if ( v10 != 894 )
        {
          v20 = stderr;
          v21 = sub_FF00(v10);
          _fprintf_chk(v20, 1, "key type %s is not supported by OpenSSL\n", v21);
          v22 = v10;
          v10 = 0;
          v23 = sub_FF00(v22);
          sub_A828((_BYTE *)&dword_0 + 3, "key type %s is not supported by OpenSSL\n", v23);
          return v10;
        }
        if ( debug )
          _fprintf_chk(stderr, 1, "%s:%d:%s():%s:len\n", "ssl_init.c", 164, "keytype_from_text", "AES128CMAC");
        v14 = 16;
      }
      *a2 = v14;
    }
  }
  return v10;
}
