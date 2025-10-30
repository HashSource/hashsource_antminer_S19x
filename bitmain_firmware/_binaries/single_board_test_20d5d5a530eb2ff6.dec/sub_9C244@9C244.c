int __fastcall sub_9C244(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r6
  int v7; // r5
  int *v8; // r3
  int v9; // r2
  int v10; // r1
  void (__fastcall *v11)(_DWORD *, int, int); // r5
  int *v12; // r3
  int result; // r0
  int v14; // r3
  _BOOL4 v15; // r2
  int *v16; // r3
  int v17; // r2
  int v18; // r3
  unsigned int *v19; // r3
  unsigned int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r3
  int *v26; // r3
  int v27; // r3
  _BOOL4 v28; // r2
  _DWORD *v29; // r0
  unsigned int *v30; // r0
  unsigned int v31; // r3
  _WORD *v32; // r3
  unsigned int *v33; // r0
  unsigned int v34; // r3

  v6 = a1[21];
  if ( !a3 )
    goto LABEL_5;
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
  {
    sub_BAE3C(a1[27]);
    a1[27] = 0;
    v7 = sub_8A8AC((int)a1);
    if ( v7 )
      goto LABEL_4;
LABEL_50:
    sub_95494(a1, 80, 597, 68, (int)"ssl/statem/statem_lib.c", 1059);
    return v7;
  }
  v7 = sub_8A8AC((int)a1);
  if ( !v7 )
    goto LABEL_50;
LABEL_4:
  a1[29] = 0;
LABEL_5:
  v8 = (int *)a1[1];
  v9 = *(_DWORD *)(v8[25] + 48);
  v10 = v9 << 28;
  if ( (v9 & 8) != 0 )
    goto LABEL_6;
  v14 = *v8;
  v15 = v14 >= 772;
  if ( v14 == 0x10000 )
    v15 = 0;
  if ( !v15 || a1[7] )
  {
LABEL_6:
    if ( v6 )
    {
LABEL_20:
      a1[379] = 0;
      a1[8] = 0;
      a1[21] = 0;
      a1[343] = 0;
      sub_A8DC4(a1, v10);
      if ( a1[7] )
      {
        v16 = (int *)a1[1];
        if ( (*(_DWORD *)(v16[25] + 48) & 8) != 0 )
          goto LABEL_54;
        v17 = *v16;
        v18 = *v16 < 772;
        if ( v17 == 0x10000 )
          v18 |= 1u;
        if ( v18 )
LABEL_54:
          sub_8A430(a1, 2);
        v19 = (unsigned int *)(a1[308] + 76);
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        a1[6] = ossl_statem_accept;
      }
      else
      {
        v26 = (int *)a1[1];
        if ( (*(_DWORD *)(v26[25] + 48) & 8) != 0 )
          goto LABEL_53;
        v27 = *v26;
        v28 = v27 >= 772;
        if ( v27 == 0x10000 )
          v28 = 0;
        if ( !v28 )
        {
LABEL_53:
          sub_8A430(a1, 1);
          v29 = (_DWORD *)a1[376];
        }
        else
        {
          v29 = (_DWORD *)a1[376];
          if ( (v29[9] & 1) != 0 )
          {
            sub_8DB08(v29, a1[285]);
            v29 = (_DWORD *)a1[376];
          }
        }
        if ( a1[35] )
        {
          v33 = v29 + 23;
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 + 1, v33) );
          v29 = (_DWORD *)a1[376];
        }
        v30 = v29 + 16;
        a1[6] = ossl_statem_connect;
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 + 1, v30) );
      }
      v21 = *(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48);
      v22 = v21 << 28;
      if ( (v21 & 8) != 0 )
      {
        v32 = (_WORD *)a1[32];
        v32[134] = 0;
        v32[132] = 0;
        v32[133] = 0;
        sub_A6EEC(a1, v22);
      }
      v11 = (void (__fastcall *)(_DWORD *, int, int))a1[301];
      if ( !v11 )
      {
        v11 = *(void (__fastcall **)(_DWORD *, int, int))(a1[308] + 160);
        if ( !v11 )
          goto LABEL_52;
      }
      sub_95D9C((int)a1, 0);
LABEL_9:
      v11(a1, 32, 1);
      goto LABEL_10;
    }
  }
  else
  {
    if ( a1[381] == 4 )
      a1[381] = 1;
    if ( v6 )
      goto LABEL_20;
  }
  v11 = (void (__fastcall *)(_DWORD *, int, int))a1[301];
  if ( v11 || (v11 = *(void (__fastcall **)(_DWORD *, int, int))(a1[308] + 160)) != 0 )
  {
    sub_95D9C((int)a1, v6);
    v12 = (int *)a1[1];
    if ( (*(_DWORD *)(v12[25] + 48) & 8) == 0 )
    {
      v23 = *v12;
      v24 = *v12 < 772;
      if ( v23 == 0x10000 )
        v24 |= 1u;
      if ( !v24 )
      {
        v25 = a1[31];
        if ( *(_DWORD *)(v25 + 384) )
        {
          if ( *(_DWORD *)(v25 + 516) )
            goto LABEL_10;
        }
      }
    }
    goto LABEL_9;
  }
LABEL_52:
  sub_95D9C((int)a1, 0);
LABEL_10:
  result = 1;
  if ( !a4 )
  {
    sub_95D9C((int)a1, 1);
    return 2;
  }
  return result;
}
