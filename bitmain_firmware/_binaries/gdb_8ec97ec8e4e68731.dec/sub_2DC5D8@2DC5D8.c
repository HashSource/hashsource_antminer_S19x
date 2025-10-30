int __fastcall sub_2DC5D8(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int result; // r0
  int (__fastcall *v10)(int, int, int, int); // r5
  char v11; // r1
  int v12; // r3

  result = *(_DWORD *)(a1 + 444);
  v10 = *(int (__fastcall **)(int, int, int, int))(result + 232);
  if ( v10 )
    result = v10(a2, a3, a5, a6);
  if ( a6 )
  {
    if ( a5 && (*(_BYTE *)(a3 + 13) & 3) != 0 && (*a4 & 8) == 0 )
      *(_BYTE *)(a2 + 53) |= 8u;
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 49);
    v12 = *(_BYTE *)(a3 + 13) & 3;
    result = v12 - 1;
    if ( v12 - 1 < (v11 & 3u) - 1 )
      *(_BYTE *)(a2 + 49) = v12 | v11 & 0xFC;
  }
  return result;
}
