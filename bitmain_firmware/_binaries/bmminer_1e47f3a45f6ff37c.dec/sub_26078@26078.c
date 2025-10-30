int __fastcall sub_26078(int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  char *v6; // r6
  unsigned int i; // r5
  int v8; // r0
  const char *v9; // r0
  const char *v10; // r7
  size_t v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v3 = (_DWORD *)sub_75FEC(a1, "mix_boardnames");
  v4 = v3;
  if ( !v3 || *v3 != 1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "abandon mix board!\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"board!\n");
    }
    return 0;
  }
  if ( (unsigned int)sub_76B34(v3) <= 4 )
  {
    v6 = (char *)(a2 + 456);
    memset((void *)(a2 + 456), 0, 0x40u);
    for ( i = 0; i < sub_76B34(v4); ++i )
    {
      v8 = sub_76B80(v4, i);
      v9 = (const char *)sub_777D0(v8);
      v10 = v9;
      if ( !v9 )
      {
        if ( (unsigned int)dword_B308C <= 4 )
          return -1;
        snprintf(s, 0x800u, "get mix boardname index[%d] failed", i);
        sub_3B6AC(4, s, 0, v13);
        return -1;
      }
      v11 = strlen(v9);
      if ( v11 > 0xF )
      {
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(s, 0x800u, "get mix boardname [%s] len > 15", v10);
          sub_3B6AC(4, s, 0, v14);
        }
        return -1;
      }
      memcpy(v6, v10, v11);
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "get mix boardname[%d][%s], name:%s", i, v6, v10);
        sub_3B6AC(4, s, 0, v12);
      }
      v6 += 16;
    }
    return 0;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return -1;
  strcpy(s, "mix strategy num bigger than max");
  sub_3B6AC(3, s, 0, *(_DWORD *)" max");
  return -1;
}
