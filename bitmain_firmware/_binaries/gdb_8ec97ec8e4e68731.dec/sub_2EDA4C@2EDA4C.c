int __fastcall sub_2EDA4C(int a1, char *a2)
{
  __int64 v2; // r2
  char v6; // r1
  int v7; // r3

  HIDWORD(v2) = *(unsigned __int8 *)(a1 + 12);
  if ( (unsigned int)(HIDWORD(v2) - 3) > 1 )
    return 1;
  if ( (*(_BYTE *)(a1 + 51) & 4) != 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(a1 + 51) & 2) != 0 || (LODWORD(v2) = *(_BYTE *)(a1 + 51) & 0xA, v2 == 0x300000000LL) )
  {
    if ( (*(_BYTE *)(a1 + 49) & 3u) - 1 > 1 )
    {
      v6 = *a2;
      if ( (v6 & 3u) > 1 || (v6 & 0x90) != 0 )
        goto LABEL_21;
      v7 = *((_DWORD *)a2 + 32);
      if ( v7 )
        LOBYTE(v7) = 1;
      if ( (v7 & (*(unsigned __int8 *)(a1 + 52) >> 4)) != 0 && (*(int (**)(void))(*((_DWORD *)a2 + 32) + 16))() )
      {
LABEL_21:
        if ( ((*(unsigned __int8 *)(a1 + 52) >> 1) & 3u) > 1 || !sub_2FF6F0(*((_DWORD *)a2 + 33), *(_DWORD *)(a1 + 4)) )
LABEL_4:
          *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20) |= 0x200000u;
      }
    }
  }
  return 1;
}
