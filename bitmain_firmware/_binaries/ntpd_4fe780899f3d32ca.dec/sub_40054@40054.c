unsigned int __fastcall sub_40054(unsigned int result, _WORD *a2)
{
  int v3; // r7
  unsigned __int16 *v4; // r6
  int v5; // r7
  __int16 v6; // r2
  int v7; // r3
  int v8; // r3
  __int16 v9; // r3
  int v10; // r2
  int v11; // r2
  __int16 v12; // r3

  if ( !a2 )
    sub_6ECC0("ntp_restrict.c", 511, 0, "((void *)0) != r4a");
  v3 = *(unsigned __int16 *)result;
  *a2 = 1;
  v4 = (unsigned __int16 *)result;
  a2[1] = 0;
  ++dword_BCBAC;
  if ( v3 != 2 )
  {
    if ( v3 != 10 )
      return result;
    goto LABEL_15;
  }
  result = bswap32(*(_DWORD *)(result + 4));
  if ( (result & 0xF0000000) == 0xE0000000 )
  {
    a2[1] = 2;
    return result;
  }
  result = sub_3FC3C(result, (unsigned __int16)__rev16(v4[1]));
  if ( !result )
    sub_6ECC0("ntp_restrict.c", 535, 2, "match != ((void *)0)");
  v5 = *v4;
  v6 = *(_WORD *)(result + 8);
  ++*(_DWORD *)(result + 4);
  if ( (int *)result == &dword_BCB44 )
    v7 = dword_BCBB0;
  else
    v7 = dword_BCBB4;
  v8 = v7 + 1;
  if ( (int *)result == &dword_BCB44 )
    dword_BCBB0 = v8;
  else
    dword_BCBB4 = v8;
  v9 = *(_WORD *)(result + 12);
  *a2 = v6;
  a2[1] = v9;
  if ( v5 == 10 )
  {
LABEL_15:
    if ( *((unsigned __int8 *)v4 + 8) != 255 )
    {
      result = sub_3FD1C((int)(v4 + 4), (unsigned __int16)__rev16(v4[1]));
      if ( !result )
        sub_6ECC0("ntp_restrict.c", 564, 2, "match != ((void *)0)");
      ++*(_DWORD *)(result + 4);
      if ( (int *)result == &dword_BCB78 )
        v10 = dword_BCBB0;
      else
        v10 = dword_BCBB4;
      v11 = v10 + 1;
      if ( (int *)result == &dword_BCB78 )
        dword_BCBB0 = v11;
      else
        dword_BCBB4 = v11;
      v12 = *(_WORD *)(result + 12);
      *a2 = *(_WORD *)(result + 8);
      a2[1] = v12;
    }
  }
  return result;
}
