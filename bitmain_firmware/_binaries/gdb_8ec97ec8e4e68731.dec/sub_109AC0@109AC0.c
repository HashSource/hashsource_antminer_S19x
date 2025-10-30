int __fastcall sub_109AC0(const char *a1)
{
  _DWORD *v2; // r4
  unsigned int v3; // r7
  _DWORD *v5; // r0
  unsigned int v6; // r5
  int v7; // r6
  int v8; // r0
  const char *v9; // r0
  int v10; // r6
  int v11; // t1
  unsigned int v12; // r3
  int v13; // r5
  int v14; // t1
  const char *v15; // r0
  int v16; // r6
  const char *v17; // r0
  int v18; // r0
  _DWORD *v19; // r7
  int v20; // r8
  int v21; // r5
  int v22; // r0
  const char *v23; // r0
  char *endptr; // [sp+4h] [bp-8h] BYREF

  v2 = (_DWORD *)sub_234910();
  if ( !a1 )
  {
    LOWORD(v15) = (unsigned __int16)"Dcache %u lines of %u bytes each.\n";
    if ( v2 )
    {
      HIWORD(v15) = (unsigned int)"Dcache %u lines of %u bytes each.\n" >> 16;
      sub_259F10(v15, dword_46D440, v2[4]);
      v16 = sub_98F78(v2 + 5, &dword_475848);
      if ( !v16 )
      {
        v17 = (const char *)sub_23095C(v2[5], v2[6], v2[7]);
        sub_259F10("Contains data for %s\n", v17);
        v18 = sub_326FB4(*v2);
        v19 = (_DWORD *)v18;
        if ( v18 )
        {
          v20 = 0;
          do
          {
            v21 = v19[1];
            v22 = sub_16F654(v18);
            v23 = (const char *)sub_25AC8C(v22, *(_DWORD *)(v21 + 8));
            sub_259F10("Line %d: address %s [%d hits]\n", v16++, v23, *(_DWORD *)(v21 + 12));
            v20 += *(_DWORD *)(v21 + 12);
            v18 = sub_327048(*v2, *v19);
            v19 = (_DWORD *)v18;
          }
          while ( v18 );
        }
        else
        {
          v20 = 0;
        }
        return sub_259F10("Cache state: %d active lines, %d hits\n", v16, v20);
      }
    }
    else
    {
      HIWORD(v15) = (unsigned int)"Dcache %u lines of %u bytes each.\n" >> 16;
      sub_259F10(v15, dword_46D440, dword_46D43C);
    }
    return sub_259F10("No data cache available.\n");
  }
  v3 = strtol(a1, &endptr, 10);
  if ( (endptr == a1) | (v3 >> 31) )
    return sub_259F10("Usage: info dcache [linenumber]\n");
  if ( !v2 )
    return sub_259F10("No data cache available.\n");
  v5 = (_DWORD *)sub_326FB4(*v2);
  if ( v3 )
  {
    if ( !v5 )
      return sub_259F10("No such cache line exists.\n");
    v6 = v3;
    while ( 1 )
    {
      v5 = (_DWORD *)sub_327048(*v2, *v5);
      if ( !--v6 )
        break;
      if ( !v5 )
        return sub_259F10("No such cache line exists.\n");
    }
  }
  if ( !v5 )
    return sub_259F10("No such cache line exists.\n");
  v7 = v5[1];
  v8 = sub_16F654(v5);
  v9 = (const char *)sub_25AC8C(v8, *(_DWORD *)(v7 + 8));
  sub_259F10("Line %d: address %s [%d hits]\n", v3, v9, *(_DWORD *)(v7 + 12));
  if ( v2[4] )
  {
    v11 = *(unsigned __int8 *)(v7 + 16);
    v10 = v7 + 16;
    sub_259F10("%02x ", v11);
    v12 = v2[4];
    v13 = 0;
    while ( ++v13 < v12 )
    {
      v14 = *(unsigned __int8 *)++v10;
      sub_259F10("%02x ", v14);
      v12 = v2[4];
      if ( (v13 & 0xF) == 0xF && v13 != v12 - 1 )
      {
        sub_259F10((const char *)&word_356638);
        v12 = v2[4];
      }
    }
  }
  return sub_259F10((const char *)&word_356638);
}
