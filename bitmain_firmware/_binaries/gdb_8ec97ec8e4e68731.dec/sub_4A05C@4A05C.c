int __fastcall sub_4A05C(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  int v6; // r4
  __int64 v7; // kr00_8
  __int64 v8; // r10
  int v9; // r7
  _BOOL4 v10; // r3
  int v11; // lr
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r11
  __int64 *v16; // r8
  __int64 v17; // r2
  __int64 v18; // r0
  __int64 v19; // r2
  __int64 v20; // r10
  unsigned int v21; // r3
  int v22; // r2
  int v23; // r3
  int v24; // r4
  int v25; // r2
  int v26; // r3
  int v27; // r7
  bool v28; // cc
  __int64 v29; // r2
  __int64 v30; // r2
  __int64 v32; // [sp+0h] [bp-24h]
  int v33; // [sp+18h] [bp-Ch]

  v6 = (a2 - 1) / 2;
  v33 = a2 & 1;
  v7 = a1;
  v8 = a5;
  v32 = a4;
  if ( SHIDWORD(a1) < v6 )
  {
    v9 = HIDWORD(a1);
    while ( 1 )
    {
      v15 = 32 * (v9 + 1);
      v11 = 2 * (v9 + 1) - 1;
      v16 = (__int64 *)(v7 + v15);
      v17 = *(_QWORD *)(v7 + v15 + 8);
      v5 = (__int64 *)(v7 + 16 * v11);
      v18 = v5[1];
      if ( v18 != v17 )
        break;
      v19 = *(_QWORD *)(v7 + v15);
      if ( v19 != v18 )
      {
        v20 = *(_QWORD *)(v7 + 16 * v11);
        if ( v20 != v18 )
        {
          v10 = v19 < v20;
LABEL_4:
          if ( !v10 )
          {
            v5 = v16;
            v11 = 2 * (v9 + 1);
          }
          goto LABEL_6;
        }
        v5 = v16;
        v11 = 2 * (v9 + 1);
      }
LABEL_6:
      a1 = *v5;
      v12 = *((_DWORD *)v5 + 2);
      v13 = *((_DWORD *)v5 + 3);
      v14 = v7 + 16 * v9;
      v9 = v11;
      *(_QWORD *)v14 = *v5;
      *(_DWORD *)(v14 + 8) = v12;
      *(_DWORD *)(v14 + 12) = v13;
      if ( v11 >= v6 )
      {
        v8 = a5;
        if ( !v33 )
          goto LABEL_12;
        goto LABEL_17;
      }
    }
    v10 = v17 < v18;
    goto LABEL_4;
  }
  if ( (a2 & 1) != 0 )
  {
    v5 = (__int64 *)(a1 + 16 * HIDWORD(a1));
  }
  else
  {
    v11 = HIDWORD(a1);
LABEL_12:
    v21 = a2 - 2 + ((unsigned int)(a2 - 2) >> 31);
    if ( v11 == (a2 - 2) / 2 )
    {
      v21 = 2 * v11;
      v6 = v7 + 16 * v11;
    }
    else
    {
      v5 = (__int64 *)(v7 + 16 * v11);
    }
    if ( v11 == (a2 - 2) / 2 )
    {
      v11 = v21 + 1;
      v5 = (__int64 *)(v7 + 16 * (v21 + 1));
      a1 = *v5;
      v22 = *((_DWORD *)v5 + 2);
      v23 = *((_DWORD *)v5 + 3);
      *(_QWORD *)v6 = *v5;
      *(_DWORD *)(v6 + 8) = v22;
      *(_DWORD *)(v6 + 12) = v23;
    }
LABEL_17:
    v24 = (v11 - 1) / 2;
    if ( v11 > SHIDWORD(v7) )
    {
      do
      {
        v5 = (__int64 *)(v7 + 16 * v24);
        v29 = v5[1];
        if ( v29 == v8 )
        {
          v30 = *(_QWORD *)(v7 + 16 * v24);
          if ( v30 != v8 )
          {
            a1 = a4;
            if ( v8 == a4 )
            {
              v5 = (__int64 *)(v7 + 16 * v11);
              v32 = v8;
              break;
            }
            LODWORD(a1) = a4;
            if ( v30 >= a4 )
            {
LABEL_26:
              v5 = (__int64 *)(v7 + 16 * v11);
              break;
            }
          }
        }
        else if ( v29 >= v8 )
        {
          goto LABEL_26;
        }
        a1 = *v5;
        v25 = *((_DWORD *)v5 + 2);
        v26 = *((_DWORD *)v5 + 3);
        v27 = v7 + 16 * v11;
        v28 = SHIDWORD(v7) < v24;
        v11 = v24;
        *(_QWORD *)v27 = *v5;
        *(_DWORD *)(v27 + 8) = v25;
        *(_DWORD *)(v27 + 12) = v26;
        v24 = (v24 - 1) / 2;
      }
      while ( v28 );
    }
  }
  v5[1] = v8;
  *v5 = v32;
  return a1;
}
