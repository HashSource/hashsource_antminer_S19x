int __fastcall sub_4EC80(int a1, int a2, _BYTE *s)
{
  bool v3; // cc
  int result; // r0
  char v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1

  v3 = a1 <= 0;
  result = 2092;
  if ( !v3 )
    return sub_64E00(3, "leitch_control: unit %d invalid", a1);
  if ( a2 )
  {
    v7 = *(_BYTE *)(a2 + 2);
    if ( (v7 & 4) != 0 )
    {
      result = *(_DWORD *)(a2 + 56);
      *((_BYTE *)&unk_BD578 + a1 + 116) = result;
    }
    if ( (v7 & 8) != 0 )
      *((_DWORD *)&unk_BD578 + a1 + 28) = *(_DWORD *)(a2 + 60);
    if ( *((_BYTE *)&unk_BD578 + a1 + 108) )
    {
      result = *((unsigned __int8 *)&unk_BD578 + a1 + 116);
      v8 = *((_DWORD *)&unk_BD578 + a1 + 28);
      v9 = *((_DWORD *)&unk_BD578 + 27 * a1);
      *(_BYTE *)(v9 + 93) = result;
      *(_DWORD *)(v9 + 112) = v8;
    }
  }
  if ( s )
  {
    memset(s, 0, 0x48u);
    *s = 13;
    s[2] = 12;
    result = *((unsigned __int8 *)&unk_BD578 + a1 + 116);
    v10 = *((_DWORD *)&unk_BD578 + a1 + 28);
    *((_DWORD *)s + 2) = byte_97F7C;
    *((_DWORD *)s + 14) = result;
    *((_DWORD *)s + 15) = v10;
    *((_DWORD *)s + 8) = "Leitch: CSD 5300 Master Clock System Driver";
  }
  return result;
}
