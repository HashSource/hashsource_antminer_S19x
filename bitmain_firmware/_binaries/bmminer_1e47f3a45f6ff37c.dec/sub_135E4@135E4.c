int __fastcall sub_135E4(int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  unsigned int v6; // r9
  int v7; // r10
  int v8; // r8
  unsigned int v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  int v12; // r3
  _DWORD *v13; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v3 = (_DWORD *)sub_75FEC(a1, "mix_levels");
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
  if ( (unsigned int)sub_76B34(v3) <= 0x10 )
  {
    v6 = 0;
    v7 = a2 + 196;
    memset((void *)(a2 + 196), 0, 0x104u);
LABEL_15:
    if ( v6 >= sub_76B34(v4) )
      return 0;
    v10 = (_DWORD *)sub_76B80(v4, v6);
    v11 = v10;
    if ( v10 && *v10 == 1 )
    {
      v8 = v7;
      v9 = 0;
      ++*(_DWORD *)(a2 + 196);
      while ( 1 )
      {
        if ( v9 >= sub_76B34(v11) )
        {
          ++v6;
          v7 += 16;
          goto LABEL_15;
        }
        v13 = (_DWORD *)sub_76B80(v11, v9);
        if ( !v13 || *v13 != 3 )
          break;
        ++v9;
        *(_DWORD *)(v8 + 4) = sub_77C98(v13);
        v8 += 4;
      }
      if ( (unsigned int)dword_B308C <= 3 )
        return -1;
      snprintf(s, 0x800u, "get mix level array[%d] index[%d] failed", v6, v9);
    }
    else
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return -1;
      snprintf(s, 0x800u, "get mix level array[%d] failed", v6);
    }
    sub_3B6AC(3, s, 0, v12);
    return -1;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "mix strategy num bigger than max");
    sub_3B6AC(3, s, 0, *(_DWORD *)" max");
    return -1;
  }
  return -1;
}
