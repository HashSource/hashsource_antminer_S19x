unsigned int __fastcall sub_40824(unsigned __int16 *a1, int a2, int a3)
{
  unsigned int result; // r0
  int v6; // r7
  int v7; // r0
  int *v8; // r8
  unsigned int v9; // r3
  int v10; // r0
  unsigned __int64 v11; // [sp+10h] [bp-20h] BYREF
  _BYTE v12[18]; // [sp+18h] [bp-18h] BYREF
  __int16 v13; // [sp+2Ah] [bp-6h]

  result = (unsigned int)&dword_BCB34;
  if ( !dword_BCBC0 )
    return result;
  v6 = *a1;
  if ( v6 != 2 )
  {
    if ( !*((_DWORD *)a1 + 2) && !*((_DWORD *)a1 + 3) && !*((_DWORD *)a1 + 4) && !*((_DWORD *)a1 + 5)
      || *((unsigned __int8 *)a1 + 8) == 255 )
    {
      return result;
    }
    if ( v6 != 10 )
      sub_6ECC0("ntp_restrict.c", 760, 0, "2 == ((addr)->sa.sa_family) || 10 == ((addr)->sa.sa_family)");
    LOWORD(v11) = 10;
    *(_WORD *)&v12[16] = 0;
    memset((char *)&v11 + 2, 0, 6);
    v13 = 0;
    memset(v12, 255, 16);
    if ( !a2 )
    {
      v7 = sub_3FD1C((int)(a1 + 4), (unsigned __int16)__rev16(a1[1]));
      v8 = (int *)v7;
      if ( !v7 )
        sub_6ECC0("ntp_restrict.c", 786, 2, "res != ((void *)0)");
      result = memcmp((const void *)(v7 + 36), v12, 0x10u) == 0;
      goto LABEL_13;
    }
    return sub_40238(3, a1, &v11, -2, 0, 0, 0);
  }
  result = *((_DWORD *)a1 + 1);
  if ( !result )
    return result;
  result = bswap32(result);
  if ( (result & 0xF0000000) == 0xE0000000 || HIWORD(result) << 16 == 2139029504 )
    return result;
  memset(v12, 0, sizeof(v12));
  v11 = 0xFFFFFFFF00000002LL;
  v13 = 0;
  if ( a2 )
    return sub_40238(3, a1, &v11, -2, 0, 0, 0);
  v10 = sub_3FC3C(result, (unsigned __int16)__rev16(a1[1]));
  v8 = (int *)v10;
  if ( !v10 )
    sub_6ECC0("ntp_restrict.c", 781, 2, "res != ((void *)0)");
  result = *(_DWORD *)(v10 + 24) == bswap32(HIDWORD(v11));
LABEL_13:
  if ( a3 )
    v9 = 0;
  else
    v9 = result;
  if ( v9 )
  {
    if ( v8[4] )
    {
      sub_3FAA4(v8, *a1 == 10);
      return sub_40238(1, a1, &v11, word_BCBBC, word_BCBBA, word_BCBB8, a3);
    }
  }
  else if ( !result )
  {
    return sub_40238(1, a1, &v11, word_BCBBC, word_BCBBA, word_BCBB8, a3);
  }
  return result;
}
