int __fastcall sub_32A768(int a1, int a2, int a3)
{
  int v4; // r3
  unsigned int v5; // r0
  int v6; // r3

  v4 = *(unsigned __int8 *)(a2 + 8);
  v5 = *(unsigned __int8 *)(a3 + 8);
  if ( ((v4 | v5) & 0x70) != 0 )
  {
    if ( (v4 & 0x30) != 0 && (v5 & 0x30) != 0 )
    {
      LOWORD(v6) = 1;
    }
    else
    {
      v6 = v4 & 0x40;
      if ( v6 )
        v6 = (v5 >> 6) & 1;
    }
  }
  else
  {
    LOWORD(v6) = *(_DWORD *)(a2 + 4) == *(_DWORD *)(a3 + 4);
  }
  *(_WORD *)(a1 + 10) = v6;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}
