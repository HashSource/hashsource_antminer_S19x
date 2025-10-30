bool __fastcall sub_9CA0C(int a1)
{
  int *v1; // r2
  int v2; // r4
  int *v5; // r0
  int v6; // r4
  int *i; // r4
  int (__fastcall *v9)(int *); // r3
  int v10; // r3
  int *v11; // r8
  int v12; // r6
  int v13; // r2
  int v14; // r3

  v1 = **(int ***)(a1 + 1232);
  v2 = *v1;
  if ( *(_DWORD *)a1 == *v1 )
    return 1;
  v5 = (int *)sub_7C288();
  if ( v2 == *v5 )
  {
    i = &dword_2165F0;
    goto LABEL_10;
  }
  v6 = ***(_DWORD ***)(a1 + 1232);
  v5 = (int *)sub_7C38C();
  if ( v6 != *v5 )
    return 0;
  for ( i = &dword_216638; ; i += 3 )
  {
LABEL_10:
    v9 = (int (__fastcall *)(int *))i[2];
    if ( !v9 )
      goto LABEL_9;
    v5 = (int *)v9(v5);
    v10 = *(_DWORD *)(a1 + 1268);
    v11 = v5;
    v12 = *v5;
    if ( v10 && v12 != v10 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
      {
        if ( v12 == 256 )
        {
          if ( v10 == 256 )
            goto LABEL_8;
          v13 = 65280;
        }
        else
        {
          v13 = *v5;
          if ( v10 == 256 )
            v10 = 65280;
        }
        if ( v10 < v13 )
          goto LABEL_9;
      }
      else if ( v12 < v10 )
      {
        goto LABEL_9;
      }
    }
LABEL_8:
    v5 = (int *)sub_854EC(a1, 9);
    if ( !v5 )
      goto LABEL_9;
    v14 = *(_DWORD *)(a1 + 1272);
    if ( !v14 || v12 == v14 )
      break;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
    {
      if ( v12 == 256 )
      {
        if ( v14 == 256 )
          goto LABEL_9;
        v12 = 65280;
      }
      else if ( v14 == 256 )
      {
        v14 = 65280;
      }
      if ( v14 < v12 )
        break;
    }
    else if ( v12 < v14 )
    {
      break;
    }
LABEL_9:
    __pld(i + 12);
    if ( !i[3] )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 1260) & v11[2]) != 0
    || (v11[1] & 2) != 0 && (*(_DWORD *)(*(_DWORD *)(a1 + 1028) + 16) & 0x30000) != 0 )
  {
    goto LABEL_9;
  }
  return *(_DWORD *)a1 == *i;
}
