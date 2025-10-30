void __fastcall sub_2116D0(int a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  unsigned int v4; // r12
  unsigned int v5; // r0

  if ( (a2[5] & 3) != 0 )
  {
    v3 = *a3;
    if ( !*a3 || (v4 = *(_DWORD *)(v3 + 28), v5 = a2[7], v4 > v5) || v4 == v5 && *(_DWORD *)(v3 + 36) <= a2[9] )
      *a3 = (int)a2;
  }
}
