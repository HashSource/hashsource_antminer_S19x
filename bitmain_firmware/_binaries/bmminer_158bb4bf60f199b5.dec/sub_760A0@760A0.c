int __fastcall sub_760A0(char a1, int a2)
{
  int v2; // r5

  if ( !a2 )
    return -1;
  v2 = 0;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  *(_BYTE *)(a2 + 2) = a1;
  *(_BYTE *)(a2 + 1) = 5;
  *(_BYTE *)a2 = 64;
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(a2 + 4) & 0xE0 | sub_76284(a2, 32) & 0x1F;
  return v2;
}
