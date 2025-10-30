void __fastcall sub_152E2C(int a1)
{
  _DWORD *v1; // r4
  int v3; // r0
  int v4; // r2
  int v5; // r12
  int v6; // r12
  int v7; // r1
  int v8; // r3
  int v9; // r2
  void *v10; // r0
  int v11; // r9
  int v12; // r7
  void *v13; // r0
  int v14; // r8
  int v15; // r2
  int v16; // r3
  int v17; // r12
  __int16 v18; // lr
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int *v23; // lr
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r2
  int *v28; // lr
  int v29; // r2

  v1 = (_DWORD *)dword_48732C;
  if ( !dword_48732C )
    return;
  if ( a1 == *(_DWORD *)dword_48732C )
  {
LABEL_6:
    v3 = dword_487640;
    if ( byte_46D454 )
    {
      v10 = sub_93028(8 * (dword_487640 - 1));
      v11 = dword_487640;
      v12 = (int)v10;
      v13 = (void *)dword_487334;
      if ( dword_487640 > 0 )
      {
        v14 = dword_487334 + 8 * dword_487640;
        v15 = 0;
        v16 = dword_487334;
        do
        {
          v17 = v12 + 8 * v15;
          if ( *(_DWORD *)v16 != a1 )
          {
            v18 = *(_WORD *)(v16 + 4);
            *(_DWORD *)(v12 + 8 * v15++) = *(_DWORD *)v16;
            *(_WORD *)(v17 + 4) = v18;
            *(_WORD *)(v17 + 6) = *(_WORD *)(v16 + 6);
          }
          v16 += 8;
        }
        while ( v14 != v16 );
      }
      if ( v13 )
      {
        free(v13);
        v11 = dword_487640;
      }
      dword_487334 = v12;
      dword_487640 = v11 - 1;
    }
    else
    {
      v4 = v1[1];
      if ( (v4 & 2) != 0 )
      {
        LOBYTE(v5) = a1 & 0x1F;
        if ( a1 <= 0 )
          v5 = -(-a1 & 0x1F);
        dword_487320[a1 / 32 + 8] &= ~(1 << v5);
      }
      if ( (v4 & 4) != 0 )
      {
        LOBYTE(v6) = a1 & 0x1F;
        if ( a1 <= 0 )
          v6 = -(-a1 & 0x1F);
        dword_487320[a1 / 32 + 40] &= ~(1 << v6);
      }
      if ( (v4 & 8) != 0 )
      {
        LOBYTE(v7) = a1 & 0x1F;
        if ( a1 <= 0 )
          v7 = -(-a1 & 0x1F);
        dword_487320[a1 / 32 + 72] &= ~(1 << v7);
      }
      if ( a1 + 1 == v3 )
      {
        if ( !a1 )
          goto LABEL_62;
        v20 = a1 - 1;
        if ( a1 - 1 >= 0 )
          v21 = a1 - 1;
        else
          v21 = a1 + 30;
        LOBYTE(v22) = v20 & 0x1F;
        v23 = &dword_487320[v21 >> 5];
        if ( v20 <= 0 )
          v22 = -((1 - a1) & 0x1F);
        v24 = 1 << v22;
        if ( (v24 & v23[8]) != 0 || (v24 & v23[40]) != 0 || (v24 & v23[72]) != 0 )
        {
LABEL_62:
          v20 = a1;
        }
        else
        {
          while ( v20 )
          {
            v25 = v20 - 1;
            if ( v20 - 1 >= 0 )
              v26 = v20 - 1;
            else
              v26 = v20 + 30;
            LOBYTE(v27) = v25 & 0x1F;
            v28 = &dword_487320[v26 >> 5];
            if ( v25 <= 0 )
              v27 = -((1 - v20) & 0x1F);
            v29 = 1 << v27;
            if ( (v29 & v28[8]) != 0 || (v29 & v28[40]) != 0 || (v29 & v28[72]) != 0 )
              break;
            --v20;
          }
        }
        dword_487640 = v20;
      }
    }
    v8 = dword_487330;
    v1[1] = 0;
    if ( (_DWORD *)v8 == v1 )
    {
      v19 = v1[6];
      if ( !v19 && (_DWORD *)dword_48732C == v1 )
      {
        dword_487330 = v1[6];
        goto LABEL_37;
      }
      sub_152664();
      v9 = dword_48732C;
      if ( (_DWORD *)dword_48732C == v1 )
      {
LABEL_36:
        v19 = v1[6];
LABEL_37:
        dword_48732C = v19;
        free(v1);
        return;
      }
    }
    else
    {
      v9 = dword_48732C;
      if ( (_DWORD *)dword_48732C == v1 )
        goto LABEL_36;
    }
    while ( *(_DWORD **)(v9 + 24) != v1 )
      v9 = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 24) = v1[6];
    free(v1);
    return;
  }
  while ( 1 )
  {
    v1 = (_DWORD *)v1[6];
    if ( !v1 )
      break;
    if ( *v1 == a1 )
      goto LABEL_6;
  }
}
