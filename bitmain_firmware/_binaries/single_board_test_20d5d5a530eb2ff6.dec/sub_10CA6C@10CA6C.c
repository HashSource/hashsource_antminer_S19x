int __fastcall sub_10CA6C(int a1, _DWORD *a2)
{
  int v3; // r3
  int v5; // r5
  int v6; // r2
  int (__fastcall *v7)(_DWORD *); // r3
  int v8; // r0
  int v9; // r5
  int *v10; // r2
  int (__fastcall *v11)(_DWORD *); // r3
  int i; // r7
  int *v13; // r3
  int (*v14)(void); // r2

  v3 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 0 )
    goto LABEL_33;
  v5 = 0;
  do
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v5);
    if ( !v6 )
      goto LABEL_10;
    v7 = *(int (__fastcall **)(_DWORD *))(*(_DWORD *)(a1 + 12) + 4 * v5);
    if ( !v7 )
      goto LABEL_8;
    if ( v7(a2) )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v5);
LABEL_8:
      v8 = sub_DFA98(v6, (int)a2);
      if ( v8 )
      {
        *(_DWORD *)(a1 + 28) = v8;
        *(_DWORD *)(a1 + 20) = v5;
        *(_DWORD *)(a1 + 16) = 2;
        return 0;
      }
    }
    v3 = *(_DWORD *)a1;
LABEL_10:
    ++v5;
  }
  while ( v5 < v3 );
  if ( v3 > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = *(int **)(*(_DWORD *)(a1 + 8) + 4 * v9);
      if ( v10 )
        break;
LABEL_19:
      if ( ++v9 >= v3 )
        goto LABEL_20;
    }
    v11 = *(int (__fastcall **)(_DWORD *))(*(_DWORD *)(a1 + 12) + 4 * v9);
    if ( v11 )
    {
      if ( v11(a2) )
      {
        v10 = *(int **)(*(_DWORD *)(a1 + 8) + 4 * v9);
        goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      sub_DF7A0(v10, a2);
      if ( !sub_DFA98(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v9), (int)a2) )
        goto LABEL_21;
    }
    v3 = *(_DWORD *)a1;
    goto LABEL_19;
  }
LABEL_33:
  v9 = 0;
LABEL_20:
  if ( !sub_10BD3C(*(int **)(a1 + 4), (int)a2) )
  {
LABEL_21:
    *(_DWORD *)(a1 + 16) = 1;
    for ( i = 4 * (v9 - 1); ; i -= 4 )
    {
      if ( v9-- <= 0 )
        return 0;
      v13 = *(int **)(*(_DWORD *)(a1 + 8) + i);
      if ( v13 )
      {
        v14 = *(int (**)(void))(*(_DWORD *)(a1 + 12) + i);
        if ( v14 )
        {
          if ( !v14() )
            continue;
          v13 = *(int **)(*(_DWORD *)(a1 + 8) + i);
        }
        sub_DF92C(v13, (int)a2);
      }
    }
  }
  return 1;
}
