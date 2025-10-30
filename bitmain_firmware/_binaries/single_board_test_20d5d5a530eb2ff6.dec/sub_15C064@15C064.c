int __fastcall sub_15C064(int a1, _DWORD *a2, int a3, void *a4, int a5)
{
  int v9; // r0
  int v10; // r6
  int (__fastcall *v11)(int, int, _DWORD *, int, int, int); // r5

  v9 = sub_B66C8(a1);
  if ( !v9 )
    return 0;
  v10 = v9;
  v11 = (int (__fastcall *)(int, int, _DWORD *, int, int, int))sub_B6718(a1);
  if ( v11 )
  {
    if ( v11(a1, 6, a2, 4, a5, 0) > 0 )
    {
      sub_B66CC(a1, 1);
      if ( sub_D8440(*(int **)(v10 + 20), a2, 0, a3, a4, a5) )
        return v11(a1, 6, a2, 4, a5, 1);
    }
    return 0;
  }
  sub_B66CC(a1, 1);
  return sub_D8440(*(int **)(v10 + 20), a2, 0, a3, a4, a5) != 0;
}
