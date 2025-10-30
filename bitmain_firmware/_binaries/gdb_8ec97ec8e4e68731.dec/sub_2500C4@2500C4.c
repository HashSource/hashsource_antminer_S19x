void __fastcall sub_2500C4(int a1, _BYTE *a2, int *a3)
{
  _DWORD *v3; // r12
  int v5; // r2

  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 == *(_DWORD **)(a1 + 8) )
  {
    sub_24FDDC((void **)a1, *(char **)(a1 + 4), a2, a3);
  }
  else
  {
    if ( v3 )
    {
      v5 = *a3;
      *v3 = v3 + 2;
      sub_248B24(v3, a2, (int)&a2[v5]);
      v3 = *(_DWORD **)(a1 + 4);
    }
    *(_DWORD *)(a1 + 4) = v3 + 6;
  }
}
