void *sub_24E20()
{
  unsigned int v0; // r0
  const unsigned __int16 **v1; // r0
  const unsigned __int16 **v2; // r4
  __int16 v3; // r3
  int v4; // r5
  const unsigned __int16 **v5; // r0
  size_t v7; // r5
  size_t v8; // r0
  char *v9; // r0
  const unsigned __int16 *v10; // r2
  int v11; // r3
  bool v12; // zf
  char *v13; // r5
  int v14; // t1
  bool v15; // zf
  void *v16; // r10
  size_t v17; // r0
  size_t v18; // r0
  char *s; // [sp+4h] [bp-10h] BYREF
  int v20; // [sp+8h] [bp-Ch] BYREF

  v20 = 0;
  if ( word_BA6C8 )
    return (void *)sub_1F734(1);
  v0 = sub_2389C();
  word_BA4A0 = (v0 >> 8) | ((_WORD)v0 << 8);
  while ( 1 )
  {
    v1 = sub_1EA58((int)&unk_B5148, &s);
    v2 = v1;
    if ( !v1 )
      return sub_1EDD4(0);
    v3 = *((_WORD *)v1 + 1);
    v4 = v3 & 0x80;
    if ( (v3 & 0x80) != 0 )
    {
      v5 = sub_1EA58(dword_BA8D8, &s);
      v2 = v5;
      if ( !v5 )
        return sub_1EDD4(0);
      v3 = *((_WORD *)v5 + 1);
      if ( (v3 & 0x80) != 0 )
        return (void *)sub_1F734(5);
      v4 = 1;
    }
    if ( (v3 & 2) == 0 )
      return (void *)sub_1F734(1);
    if ( !s )
      return (void *)sub_1F734(2);
    if ( !v4 )
      break;
    v7 = strlen((const char *)v2[1]);
    v8 = strlen(s);
    v9 = (char *)sub_64B04(0, v7 + v8 + 2, 0, 0);
    v10 = v2[1];
    v11 = *(unsigned __int8 *)v10;
    v12 = v11 == 61;
    if ( v11 != 61 )
      v12 = v11 == 0;
    v13 = v9;
    if ( !v12 )
    {
      do
      {
        *v9++ = v11;
        v14 = *((unsigned __int8 *)v10 + 1);
        v10 = (const unsigned __int16 *)((char *)v10 + 1);
        v11 = v14;
        v15 = v14 == 61;
        if ( v14 != 61 )
          v15 = v11 == 0;
      }
      while ( !v15 );
    }
    *v9 = 61;
    v16 = v9 + 1;
    v17 = strlen(s);
    memcpy(v16, s, v17 + 1);
    v18 = strlen(v13);
    sub_248E4((unsigned __int8 *)v13, v18 + 1, *((_WORD *)v2 + 1));
    free(v13);
  }
  if ( !*s || !sub_61814(s, &v20) )
    return (void *)sub_1F734(2);
  if ( (v20 & 0xFFFFFFFC) != 0 )
    return (void *)sub_1F734(6);
  else
    return (void *)sub_1F734(0);
}
