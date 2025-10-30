void __fastcall sub_25C5E8(int a1, unsigned int *a2, int *a3)
{
  int v3; // r12
  bool v4; // zf
  int v5; // r12

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
  {
    sub_25C4C0((_DWORD *)a1, *(char **)(a1 + 4), a2, a3);
  }
  else
  {
    v4 = v3 == 0;
    v5 = v3 + 8;
    if ( !v4 )
    {
      *(_DWORD *)(v5 - 8) = *a2;
      *(_DWORD *)(v5 - 4) = *a3;
    }
    *(_DWORD *)(a1 + 4) = v5;
  }
}
