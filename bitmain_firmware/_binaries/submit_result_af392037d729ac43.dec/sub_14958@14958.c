bool __fastcall sub_14958(int a1, int a2)
{
  bool v2; // zf
  _BOOL4 result; // r0
  int v6; // r0
  char *v7; // r5
  int v8; // r0
  int v9; // r8
  int v10; // r0
  size_t v11; // r2
  int v12; // r7
  int v13; // r5

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    return 0;
  result = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    if ( a1 == a2 )
      return 1;
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) )
          return 0;
        v6 = sub_13E80((_DWORD *)a1);
        v7 = (char *)sub_13EBC(v6);
        if ( !v7 )
          return 1;
        while ( 2 )
        {
          v9 = sub_13EC4((int)(v7 - 16));
          if ( !v9 )
            return 1;
          v10 = sub_13E38((_DWORD *)a2, v7);
          if ( sub_14958(v9, v10) )
          {
            v8 = sub_13EA8((_DWORD *)a1, (int)(v7 - 16));
            v7 = (char *)sub_13EBC(v8);
            if ( !v7 )
              return 1;
            continue;
          }
          break;
        }
        return 0;
      case 1:
        v12 = *(_DWORD *)(a1 + 12);
        if ( v12 != *(_DWORD *)(a2 + 12) )
          return 0;
        if ( !v12 )
          return 1;
        v13 = 0;
        break;
      case 2:
        v11 = *(_DWORD *)(a1 + 12);
        if ( v11 != *(_DWORD *)(a2 + 12) )
          return 0;
        return memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v11) == 0;
      case 3:
        return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
      case 4:
        return *(double *)(a1 + 8) == *(double *)(a2 + 8);
      default:
        return 0;
    }
    while ( ((int (*)(void))sub_14958)() )
    {
      if ( ++v13 == v12 )
        return 1;
    }
    return 0;
  }
  return result;
}
