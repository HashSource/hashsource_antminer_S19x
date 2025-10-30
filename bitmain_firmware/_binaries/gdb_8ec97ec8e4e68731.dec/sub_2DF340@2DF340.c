int __fastcall sub_2DF340(int a1, int *a2)
{
  int v2; // r3

  if ( (*(_BYTE *)(a1 + 52) & 8) != 0 && *(_DWORD *)(a1 + 32) != -1 )
  {
    v2 = *a2 + 1;
    *a2 = v2;
    *(_DWORD *)(a1 + 32) = v2;
  }
  return 1;
}
