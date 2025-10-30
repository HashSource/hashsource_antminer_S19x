int __fastcall sub_6EAD8(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  int v4; // r9
  int v6; // r0
  char *v7; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r5

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = (int)(a2 + 2);
  v6 = sub_6BD80((int)(a2 + 2));
  if ( v6 )
  {
    v7 = (char *)sub_6BE20(v6);
    if ( v7 )
    {
      while ( 1 )
      {
        v10 = sub_6BE30((int)(v7 - 16));
        if ( !v10 )
          break;
        if ( *a1 || !sub_6BBAC((int)(a1 + 2), v7) )
        {
          v8 = *(_DWORD *)(v10 + 4);
          if ( v8 != -1 )
            *(_DWORD *)(v10 + 4) = v8 + 1;
          sub_6E894(a1, v7, v10);
          if ( *a2 )
            return 0;
        }
        else if ( *a2 )
        {
          return 0;
        }
        v9 = sub_6BE08(v4, (int)(v7 - 16));
        if ( v9 )
        {
          v7 = (char *)sub_6BE20(v9);
          if ( v7 )
            continue;
        }
        return 0;
      }
    }
  }
  return 0;
}
