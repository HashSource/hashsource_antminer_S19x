int __fastcall sub_2D6D88(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r2
  _DWORD *v6; // r4
  int (__fastcall *v8)(_DWORD *, _DWORD *, int, int); // r8
  int v9; // r7
  int v10; // r3
  int v11; // r3
  bool v12; // zf
  int v13; // r0
  int v14; // r3
  _DWORD *v15; // r1
  int i; // r2

  v4 = *(_DWORD *)(a1[40] + 2324);
  if ( !v4 )
  {
    v9 = -1;
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return v9;
  }
  v6 = (_DWORD *)a1[25];
  v8 = *(int (__fastcall **)(_DWORD *, _DWORD *, int, int))(*(_DWORD *)(*(_DWORD *)(a1[1] + 444) + 392) + 40);
  if ( !v6 )
  {
    v9 = 0;
LABEL_17:
    *a2 = 0;
    return v9;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = v6[35];
    if ( *(_DWORD *)(v10 + 28) != v4 )
      goto LABEL_4;
    v11 = *(_DWORD *)(v10 + 4);
    v12 = v11 == 4;
    if ( v11 != 4 )
      v12 = v11 == 9;
    if ( !v12 )
    {
LABEL_4:
      v6 = (_DWORD *)v6[3];
      if ( !v6 )
        goto LABEL_17;
      goto LABEL_5;
    }
    if ( !v8(a1, v6, a3, 1) )
      return -1;
    v13 = sub_347418(v6[9], *(_DWORD *)(v6[35] + 40));
    v14 = v6[17];
    if ( v13 > 0 )
    {
      v15 = a2;
      for ( i = 0; i != v13; ++i )
      {
        *v15++ = v14;
        v14 += 16;
      }
      a2 += v13;
    }
    v6 = (_DWORD *)v6[3];
    v9 += v13;
    if ( !v6 )
      goto LABEL_17;
LABEL_5:
    v4 = *(_DWORD *)(a1[40] + 2324);
  }
}
