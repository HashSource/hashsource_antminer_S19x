int __fastcall sub_2EEFE4(int a1, _BYTE *a2, int a3)
{
  int v6; // r0
  int v7; // r4
  char v9; // r3
  char v10; // r2

  v6 = sub_2FC920(*(_DWORD *)(a1 + 28), a2, 0);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 12) - 1 > 1 && (*(_BYTE *)(v6 + 51) & 3) != 1 )
      return 0;
    v9 = *(_BYTE *)(v6 + 51);
    v10 = *(_BYTE *)(v6 + 53);
    *(_DWORD *)(v6 + 20) = a3;
    *(_DWORD *)(v6 + 68) = a3;
    *(_BYTE *)(v6 + 51) = v9 & 0xF5 | 2;
    *(_DWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 53) = v10 | 0x10;
    *(_BYTE *)(v6 + 12) = 3;
    if ( *a2 == 46 )
    {
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) + 444) + 224))(
        a1,
        v6,
        1);
    }
    else if ( (*(_BYTE *)(v6 + 49) & 3) == 0 )
    {
      *(_BYTE *)(v6 + 49) |= 3u;
    }
  }
  return v7;
}
