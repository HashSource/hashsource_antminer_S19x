void __fastcall sub_114A88(int a1, unsigned int *a2, char *a3)
{
  int v3; // r12
  bool v4; // zf
  int v5; // r12
  char v6; // r3

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
  {
    sub_114960((_DWORD *)a1, *(char **)(a1 + 4), a2, a3);
  }
  else
  {
    v4 = v3 == 0;
    v5 = v3 + 8;
    if ( !v4 )
    {
      v6 = *a3;
      *(_DWORD *)(v5 - 8) = *a2;
      *(_BYTE *)(v5 - 4) = v6;
    }
    *(_DWORD *)(a1 + 4) = v5;
  }
}
