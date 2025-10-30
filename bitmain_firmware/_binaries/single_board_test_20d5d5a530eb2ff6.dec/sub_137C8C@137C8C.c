int __fastcall sub_137C8C(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // r6
  _DWORD *v7; // r0
  _DWORD *v8; // r3
  int v9; // r3

  if ( *a1 == 2 )
  {
    v6 = a1[1];
    v7 = *(_DWORD **)(v6 + 4);
    if ( a2 )
      *a2 = *(_DWORD *)(v6 + 8);
    if ( a3 )
      *a3 = *v7;
    if ( a4 )
      *a4 = v7[1];
    if ( a5 )
    {
      v8 = (_DWORD *)v7[2];
      if ( v8 )
        *a5 = *v8;
      else
        *a5 = 0;
    }
    if ( a6 )
    {
      v9 = v7[2];
      if ( v9 )
        *a6 = *(_DWORD *)(v9 + 4);
      else
        *a6 = 0;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_D0048(46, 137, 123, (int)"crypto/cms/cms_env.c", 587);
    return 0;
  }
}
