int __fastcall sub_22E9C(int a1, int a2, int a3)
{
  int v4; // r8
  int result; // r0
  unsigned int v6; // r3
  int v9; // r0
  unsigned int i; // r1
  int v11; // r4
  int v12; // r0
  unsigned int v13; // r8
  __int64 v14; // r2
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v4 = dword_A0D68;
  result = *(unsigned __int8 *)(dword_A0D68 + 12954);
  if ( *(_BYTE *)(dword_A0D68 + 12954) && (v6 = *(_DWORD *)(dword_A0D68 + 12950)) != 0 )
  {
    v9 = result << 24;
    if ( v6 > 1 )
    {
      for ( i = 1; i < v6; i *= 2 )
        ;
      v9 = sub_772E8(v9);
    }
    v11 = v9 * a3 / 100;
    *(_DWORD *)(v4 + 68) = v11;
    v12 = sub_77070(v11, a1, 1374389535 * v9 * a3);
    *(_DWORD *)(v4 + 72) = v12;
    if ( (byte_241D04 & 4) != 0 && word_241D12 )
    {
      v12 = HIBYTE(word_241D12) + 1000 * (unsigned __int8)word_241D12;
      *(_DWORD *)(v4 + 72) = v12;
    }
    v13 = (unsigned int)(v12 * a2) >> 2;
    result = sub_6FC8C(v13 & 0x1FFFF | 0x80000000);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(
        s,
        0x800u,
        "freq = %d, percent = %d, hcn = %d, timeout = %d\n",
        a1,
        a3,
        (unsigned int)(a2 * v11) >> 2,
        v13);
      return sub_47AB4(3, s, 0);
    }
  }
  else
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Note: addrInterval or corenum is not initialized.\n");
      result = sub_47AB4(3, s, 0);
      v4 = dword_A0D68;
    }
    HIDWORD(v14) = (char *)&loc_1FFFC + 3;
    LODWORD(v14) = -1;
    *(_QWORD *)(v4 + 68) = v14;
  }
  return result;
}
