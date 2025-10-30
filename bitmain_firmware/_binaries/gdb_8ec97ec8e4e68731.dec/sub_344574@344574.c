bool __fastcall sub_344574(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r0

  v2 = *a1;
  return v2 > a2 || a2 > v2 + *(_DWORD *)(v2 - 12);
}
