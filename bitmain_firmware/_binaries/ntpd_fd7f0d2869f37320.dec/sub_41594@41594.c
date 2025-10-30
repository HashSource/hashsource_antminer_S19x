int __fastcall sub_41594(unsigned __int16 *a1, int a2, int a3)
{
  int result; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r0
  int v10; // r5
  int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  int v14; // r0
  int v15; // [sp+10h] [bp-24h] BYREF
  unsigned int v16; // [sp+14h] [bp-20h]
  _DWORD s2[4]; // [sp+18h] [bp-1Ch] BYREF
  int v18; // [sp+28h] [bp-Ch]

  result = 2092;
  if ( !dword_BDBD4 )
    return result;
  v7 = *a1;
  if ( v7 == 2 )
  {
    v12 = *((_DWORD *)a1 + 1);
    if ( !v12 )
      return result;
    v13 = bswap32(v12);
    if ( (v13 & 0xF0000000) == 0xE0000000 || HIWORD(v13) << 16 == 2139029504 )
      return result;
    v8 = 1;
    memset(s2, 0, sizeof(s2));
    v18 = 0;
    v15 = 2;
  }
  else
  {
    if ( !*((_DWORD *)a1 + 2) && !*((_DWORD *)a1 + 3) && !*((_DWORD *)a1 + 4) && !*((_DWORD *)a1 + 5)
      || *((unsigned __int8 *)a1 + 8) == 255 )
    {
      return result;
    }
    if ( (v7 & 0xFFFFFFF7) != 2 )
      sub_6FC54("ntp_restrict.c", 760, 0, "2 == ((addr)->sa.sa_family) || 10 == ((addr)->sa.sa_family)");
    v8 = 0;
    v16 = 0;
    memset(s2, 0, sizeof(s2));
    v18 = 0;
    v15 = (unsigned __int16)v7;
    if ( v7 == 10 )
    {
      memset(s2, 255, sizeof(s2));
      if ( !a2 )
        goto LABEL_11;
      return sub_41008(3u, a1, &v15, -2, 0, 0, 0);
    }
  }
  v16 = -1;
  if ( a2 )
    return sub_41008(3u, a1, &v15, -2, 0, 0, 0);
  if ( v8 )
  {
    v14 = sub_40994(bswap32(*((_DWORD *)a1 + 1)), (unsigned __int16)(HIBYTE(a1[1]) | (a1[1] << 8)));
    v10 = v14;
    if ( !v14 )
      sub_6FC54("ntp_restrict.c", 781, 2, "res != ((void *)0)");
    result = *(_DWORD *)(v14 + 24) == bswap32(v16);
    goto LABEL_13;
  }
LABEL_11:
  v9 = sub_40AF4((int)(a1 + 4), (unsigned __int16)(HIBYTE(a1[1]) | (a1[1] << 8)));
  v10 = v9;
  if ( !v9 )
    sub_6FC54("ntp_restrict.c", 786, 2, "res != ((void *)0)");
  result = memcmp((const void *)(v9 + 36), s2, 0x10u) == 0;
LABEL_13:
  if ( a3 )
    v11 = 0;
  else
    v11 = result & 1;
  if ( v11 )
  {
    if ( !*(_DWORD *)(v10 + 16) )
      return result;
    sub_40820(v10, *a1 == 10);
    return sub_41008(1u, a1, &v15, word_BDBD0, word_BDBCE, word_BDBCC, a3);
  }
  if ( !result )
    return sub_41008(1u, a1, &v15, word_BDBD0, word_BDBCE, word_BDBCC, a3);
  return result;
}
