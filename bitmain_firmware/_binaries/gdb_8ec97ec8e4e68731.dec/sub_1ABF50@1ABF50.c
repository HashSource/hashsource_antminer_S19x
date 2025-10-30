int __fastcall sub_1ABF50(int a1, int a2, int a3, int a4, char a5, int a6, int a7, const char *a8)
{
  int v9; // r12
  int v13; // r3
  bool v14; // zf
  int v15; // r2
  int v16; // r3
  int result; // r0
  unsigned int v18; // r2

  v9 = dword_487AC4;
  *(_BYTE *)(a4 + 32) = (8 * (a5 & 0x1F)) | 1;
  ((void (__fastcall *)(int, _DWORD))loc_2209F8)(a4, *(_DWORD *)(v9 + 8));
  sub_10B4AC(*(_DWORD *)(a6 + 16));
  v13 = *(_WORD *)(a1 + 8) & 0x7C0;
  v14 = v13 == 1344;
  if ( v13 != 1344 )
    v14 = v13 == 384;
  v15 = v14;
  if ( (*(_WORD *)(a1 + 8) & 0x7C0) != 0 )
    v16 = v15;
  else
    v16 = 1;
  if ( v16 || (v18 = *(_DWORD *)(a1 + 8), (v18 & 0xFFFFF000) == 0xFFFFF000) )
  {
    result = sub_1780C4(a7);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(result + 80);
  }
  else
  {
    result = sub_1AAC98(dword_487AD4, a2, v18 >> 12, 0, a3, a8);
    *(_DWORD *)(a4 + 24) = result;
  }
  return result;
}
