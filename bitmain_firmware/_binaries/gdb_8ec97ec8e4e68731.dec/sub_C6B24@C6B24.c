int __fastcall sub_C6B24(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2

  v1 = a1[4];
  if ( *(_DWORD *)(v1 + 212) )
    v2 = 1;
  else
    v2 = a1[14];
  return off_489A14(&dword_4899A0, a1[13], v2, a1[15], *(_DWORD *)(v1 + 152));
}
