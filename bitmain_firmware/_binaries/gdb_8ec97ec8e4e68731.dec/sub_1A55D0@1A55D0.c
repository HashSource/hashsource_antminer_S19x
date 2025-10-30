void __fastcall sub_1A55D0(int a1, unsigned int *a2, int *a3)
{
  unsigned int *v3; // r12
  int v4; // r3

  v3 = *(unsigned int **)(a1 + 4);
  if ( v3 == *(unsigned int **)(a1 + 8) )
  {
    sub_1A54A8((_DWORD *)a1, *(char **)(a1 + 4), a2, a3);
  }
  else
  {
    if ( v3 )
    {
      v4 = *a3;
      *v3 = *a2;
      v3[1] = v4;
    }
    *(_DWORD *)(a1 + 4) = v3 + 2;
  }
}
