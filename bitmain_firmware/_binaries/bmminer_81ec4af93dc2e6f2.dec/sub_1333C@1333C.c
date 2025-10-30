int __fastcall sub_1333C(int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r8
  int v6; // r7
  unsigned int v7; // r4
  unsigned int v8; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r9
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_72B10(a1, "mix_levels");
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
  if ( (unsigned int)sub_7365C(v3) <= 0x10 )
  {
    v6 = a2;
    memset((void *)(a2 + 196), 0, 0x104u);
    v7 = 0;
LABEL_14:
    if ( sub_7365C(v4) <= v7 )
      return 0;
    v9 = (_DWORD *)sub_736A8(v4, v7);
    v10 = v9;
    if ( v9 && *v9 == 1 )
    {
      v8 = 0;
      ++*(_DWORD *)(a2 + 196);
      while ( 1 )
      {
        if ( sub_7365C(v10) <= v8 )
        {
          ++v7;
          v6 += 16;
          goto LABEL_14;
        }
        v12 = (_DWORD *)sub_736A8(v10, v8);
        if ( !v12 || *v12 != 3 )
          break;
        v13 = sub_747D0(v12);
        v14 = v6 + 4 * v8++;
        *(_DWORD *)(v14 + 200) = v13;
      }
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "get mix level array[%d] index[%d] failed", v7, v8);
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "get mix level array[%d] failed", v7);
    }
    sub_3AF5C(3, s, 0, v11);
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "mix strategy num bigger than max");
    sub_3AF5C(3, s, 0, *(_DWORD *)" max");
    return -1;
  }
  return -1;
}
