int __fastcall sub_B5F60(int a1, _BYTE *a2, int a3)
{
  _DWORD *v4; // r4
  int v6; // r5
  int v7; // r8
  int v8; // r1
  int v9; // r3
  int v10; // r0
  int v11; // r2
  _BYTE *v12; // lr
  int i; // r0
  int v14; // t1
  int v15; // r3
  bool v16; // cc
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v21; // r0
  _BOOL4 v22; // r0
  int v23; // [sp+4h] [bp-8h]

  v4 = *(_DWORD **)(a1 + 36);
  v6 = a3 - 1;
  v7 = 0;
  sub_B66FC(a1, 15);
  v8 = v4[3];
  while ( 1 )
  {
    while ( v8 > 0 )
    {
      v9 = v4[2];
      v10 = v4[4];
      if ( v6 > 0 )
      {
        v11 = v9 + v10;
        v12 = a2 + 1;
        *a2 = *(_BYTE *)(v9 + v10);
        if ( *(_BYTE *)(v9 + v10) == 10 )
        {
          v17 = 1;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            v8 = v4[3];
            v15 = i + 1;
            v16 = v6 <= i + 1;
            if ( v6 > i + 1 )
              v16 = v8 <= v15;
            if ( v16 )
            {
              v10 = v4[4];
              a2 = v12;
              goto LABEL_13;
            }
            *v12++ = *(_BYTE *)(v11 + 1);
            v14 = *(unsigned __int8 *)++v11;
            if ( v14 == 10 )
              break;
          }
          v17 = i + 2;
        }
        v7 += v17;
        v18 = v4[3] - v17;
        v19 = v17 + v4[4];
        v4[3] = v18;
        v4[4] = v19;
        goto LABEL_17;
      }
      v15 = 0;
LABEL_13:
      v6 -= v15;
      v8 -= v15;
      v4[3] = v8;
      v7 += v15;
      v4[4] = v10 + v15;
      if ( !v6 )
      {
        v12 = a2;
LABEL_17:
        *v12 = 0;
        return v7;
      }
    }
    v21 = sub_B6740(*(_DWORD *)(a1 + 40), v4[2], *v4);
    v8 = v21;
    if ( v21 <= 0 )
      break;
    v4[3] = v21;
    v4[4] = 0;
  }
  v23 = v21;
  sub_B724C(a1);
  v22 = v7 > 0;
  *a2 = 0;
  if ( !v23 )
    v22 = 1;
  if ( v22 )
    return v7;
  else
    return v23;
}
