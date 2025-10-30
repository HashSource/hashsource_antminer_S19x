void __fastcall sub_1497E0(int a1, int *a2)
{
  _DWORD *v2; // r3
  int v4; // r0
  int v5; // r1

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    sub_1496F0((char **)a1, *(char **)(a1 + 4), a2);
  }
  else
  {
    if ( v2 )
    {
      v4 = *a2;
      v5 = a2[1];
      *v2 = v4;
      v2[1] = v5;
    }
    *(_DWORD *)(a1 + 4) = v2 + 2;
  }
}
