int __fastcall sub_25BAC(int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  char *v6; // r6
  unsigned int i; // r5
  int v8; // r0
  const char *v9; // r0
  const char *v10; // r7
  size_t v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_72B10(a1, "mix_boardnames");
  v4 = v3;
  if ( !v3 || *v3 != 1 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "abandon mix board!\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"board!\n");
    }
    return 0;
  }
  if ( (unsigned int)sub_7365C(v3) <= 4 )
  {
    v6 = (char *)(a2 + 456);
    memset((void *)(a2 + 456), 0, 0x40u);
    for ( i = 0; sub_7365C(v4) > i; ++i )
    {
      v8 = sub_736A8(v4, i);
      v9 = (const char *)sub_74300(v8);
      v10 = v9;
      if ( !v9 )
      {
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf(s, 0x800u, "get mix boardname index[%d] failed", i);
          sub_3AF5C(4, s, 0, v13);
        }
        return -1;
      }
      v11 = strlen(v9);
      if ( v11 > 0xF )
      {
        if ( (unsigned int)off_AFC24 <= 4 )
          return -1;
        snprintf(s, 0x800u, "get mix boardname [%s] len > 15", v10);
        sub_3AF5C(4, s, 0, v14);
        return -1;
      }
      memcpy(v6, v10, v11);
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "get mix boardname[%d][%s], name:%s", i, v6, v10);
        sub_3AF5C(4, s, 0, v12);
      }
      v6 += 16;
    }
    return 0;
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    return -1;
  strcpy(s, "mix strategy num bigger than max");
  sub_3AF5C(3, s, 0, *(_DWORD *)" max");
  return -1;
}
