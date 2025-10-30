int __fastcall sub_D1964(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r3

  v6 = ((int (*)(void))sub_D8934)();
  v7 = v6;
  if ( a2 == 8 )
  {
    v9 = sub_D8934(a4);
    v10 = *(_DWORD *)(v7 + 496);
    if ( v10 )
    {
      if ( v10 != v7 )
        return 0;
      *(_DWORD *)(v9 + 496) = v9;
    }
    v11 = *(_DWORD *)(v7 + 500);
    if ( !v11 )
      return 1;
    if ( v11 == v7 + 248 )
    {
      *(_DWORD *)(v9 + 500) = v9 + 248;
      return 1;
    }
    return 0;
  }
  if ( a2 )
    return -1;
  *(_DWORD *)(v6 + 496) = 0;
  *(_DWORD *)(v6 + 500) = 0;
  return 1;
}
