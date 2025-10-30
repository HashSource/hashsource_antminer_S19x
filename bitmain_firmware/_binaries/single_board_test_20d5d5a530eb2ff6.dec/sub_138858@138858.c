int __fastcall sub_138858(int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int result; // r0
  int *v8; // r6
  int v9; // r7

  result = *a1;
  if ( result == 1 )
  {
    v8 = *(int **)(a1[1] + 4);
    if ( a5 )
      *a5 = 0;
    if ( a6 )
      *a6 = 0;
    if ( a4 )
      *a4 = 0;
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
    v9 = *v8;
    if ( *v8 )
    {
      if ( v9 == 1 )
      {
        if ( a4 )
        {
          result = *v8;
          *a4 = v8[1];
        }
      }
      else if ( v9 == 2 )
      {
        if ( a2 )
          *a2 = *(_DWORD *)v8[1];
        if ( a3 )
          *a3 = *(_DWORD *)(v8[1] + 4);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      if ( a5 )
        *a5 = *(_DWORD *)v8[1];
      if ( a6 )
        *a6 = *(_DWORD *)(v8[1] + 4);
    }
  }
  else
  {
    sub_D0048(46, 173, 181, (int)"crypto/cms/cms_kari.c", 61);
    return 0;
  }
  return result;
}
