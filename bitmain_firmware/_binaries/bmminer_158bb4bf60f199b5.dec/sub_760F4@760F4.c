int __fastcall sub_760F4(int a1, char a2, char a3, int a4)
{
  int v4; // r5

  if ( !a4 )
    return -1;
  v4 = 0;
  *(_DWORD *)a4 = 0;
  *(_BYTE *)(a4 + 3) = a3;
  *(_BYTE *)(a4 + 2) = a2;
  *(_BYTE *)(a4 + 4) = 0;
  *(_BYTE *)(a4 + 1) = 5;
  *(_BYTE *)a4 = (16 * (a1 != 0)) & 0x1D | 0x42;
  *(_BYTE *)(a4 + 4) = *(_BYTE *)(a4 + 4) & 0xE0 | sub_76284(a4, 32) & 0x1F;
  return v4;
}
