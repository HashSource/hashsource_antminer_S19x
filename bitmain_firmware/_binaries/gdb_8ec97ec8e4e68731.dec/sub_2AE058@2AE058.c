unsigned int __fastcall sub_2AE058(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // r3
  unsigned int result; // r0
  unsigned int v5; // r2
  int v6; // r3

  v3 = a2[2];
  result = *a3;
  if ( v3 < *a3 )
  {
    v5 = a3[1];
    result = *(_DWORD *)(v5 + 8 * v3);
    v6 = *(_DWORD *)(v5 + 8 * v3 + 4);
    a2[14] = result;
    a2[15] = v6;
  }
  return result;
}
