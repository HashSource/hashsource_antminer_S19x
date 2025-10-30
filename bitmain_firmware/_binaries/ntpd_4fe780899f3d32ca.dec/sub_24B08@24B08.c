__int16 *sub_24B08()
{
  const char **v0; // r0
  const char **v1; // r4
  __int16 v2; // r3
  int v3; // r10
  const char **v4; // r0
  size_t v6; // r10
  size_t v7; // r0
  char *v8; // r0
  const char *v9; // r2
  char *v10; // r5
  int v11; // r3
  bool v12; // zf
  int v13; // t1
  bool v14; // zf
  void *v15; // r10
  size_t v16; // r0
  size_t v17; // r0
  char *s; // [sp+4h] [bp-10h] BYREF
  int v19; // [sp+8h] [bp-Ch] BYREF

  v19 = 0;
  if ( word_B96C8 )
    return (__int16 *)sub_1F4D0(1);
  word_B94A0 = __rev16(sub_235A8());
  while ( 1 )
  {
    v0 = (const char **)sub_1E820((int)&unk_B4148, &s);
    v1 = v0;
    if ( !v0 )
      return sub_1EBA4(0);
    v2 = *((_WORD *)v0 + 1);
    v3 = v2 & 0x80;
    if ( (v2 & 0x80) != 0 )
    {
      v4 = (const char **)sub_1E820(dword_B98D8, &s);
      v1 = v4;
      if ( !v4 )
        return sub_1EBA4(0);
      v2 = *((_WORD *)v4 + 1);
      if ( (v2 & 0x80) != 0 )
        return (__int16 *)sub_1F4D0(5);
      v3 = 1;
    }
    if ( (v2 & 2) == 0 )
      return (__int16 *)sub_1F4D0(1);
    if ( !s )
      return (__int16 *)sub_1F4D0(2);
    if ( !v3 )
      break;
    v6 = strlen(v1[1]);
    v7 = strlen(s);
    v8 = (char *)sub_63BA4(0, v6 + v7 + 2, 0, 0);
    v9 = v1[1];
    v10 = v8;
    v11 = *(unsigned __int8 *)v9;
    v12 = v11 == 0;
    if ( *v9 )
      v12 = v11 == 61;
    if ( !v12 )
    {
      do
      {
        *v8++ = v11;
        v13 = *(unsigned __int8 *)++v9;
        v11 = v13;
        v14 = v13 == 0;
        if ( v13 )
          v14 = v11 == 61;
      }
      while ( !v14 );
    }
    *v8 = 61;
    v15 = v8 + 1;
    v16 = strlen(s);
    memcpy(v15, s, v16 + 1);
    v17 = strlen(v10);
    sub_245C4((unsigned __int8 *)v10, v17 + 1, *((_WORD *)v1 + 1));
    free(v10);
  }
  if ( !*s || !sub_60930(s, &v19) )
    return (__int16 *)sub_1F4D0(2);
  if ( (v19 & 0xFFFFFFFC) != 0 )
    return (__int16 *)sub_1F4D0(6);
  else
    return (__int16 *)sub_1F4D0(0);
}
