int __fastcall sub_76164(int a1)
{
  int v1; // r5

  if ( !a1 )
    return -1;
  v1 = 0;
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 1) = 5;
  *(_BYTE *)a1 = 83;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a1 + 4) & 0xE0 | sub_76284(a1, 32) & 0x1F;
  return v1;
}
