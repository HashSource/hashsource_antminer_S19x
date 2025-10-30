int __fastcall sub_119244(int a1, _DWORD *a2, int *a3)
{
  signed int v3; // r9
  int *v5; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r10
  int v9; // r0
  signed int v10; // r4
  signed int v11; // r4
  int v12; // r7
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r11
  _DWORD *v16; // r3
  _DWORD *v17; // r2
  _DWORD *v18; // r0
  _DWORD *v19; // r9
  _DWORD *v20; // r7
  _DWORD *v21; // r0
  signed int v22; // r2
  bool v23; // zf
  int v24; // r0
  int v25; // r0
  int v26; // r4
  bool v27; // cc
  unsigned int v28; // r1
  int v29; // r0
  unsigned int v31; // r1
  int v32; // r0
  int v33; // r0
  signed int v35; // [sp+10h] [bp-Ch]

  v3 = 0;
  v5 = a3;
  v6 = -1;
  v7 = 0;
  if ( !a3 )
  {
    v33 = sub_10C01C(a2, 0);
    v5 = *(int **)(v33 + 168);
    v7 = v33;
    v8 = 1;
    if ( !v5 )
      goto LABEL_44;
    v3 = 1;
    v6 = 0;
  }
  if ( !sub_118E0C(v5) )
  {
    if ( a1 )
    {
      *(_DWORD *)(a1 + 92) = v6;
      *(_DWORD *)(a1 + 96) = 41;
      *(_DWORD *)(a1 + 100) = v7;
      v8 = (*(int (**)(void))(a1 + 28))();
      if ( v8 )
      {
        sub_10B9F0((int)v5, (int)sub_117A54);
        v5 = (int *)sub_10BDE0(v5);
        if ( v5 )
          goto LABEL_6;
        sub_D0048(34, 166, 65, (int)"crypto/x509v3/v3_addr.c", 1229);
LABEL_55:
        v8 = 0;
        *(_DWORD *)(a1 + 96) = 17;
        v5 = 0;
        goto LABEL_44;
      }
    }
LABEL_43:
    v8 = 0;
    v5 = 0;
    goto LABEL_44;
  }
  v8 = 1;
  sub_10B9F0((int)v5, (int)sub_117A54);
  v5 = (int *)sub_10BDE0(v5);
  if ( !v5 )
  {
    sub_D0048(34, 166, 65, (int)"crypto/x509v3/v3_addr.c", 1229);
    if ( a1 )
      goto LABEL_55;
    goto LABEL_43;
  }
LABEL_6:
  if ( v3 >= sub_10C010((int)a2) )
    goto LABEL_33;
  while ( 1 )
  {
    v7 = sub_10C01C(a2, v3);
    if ( !sub_118E0C(*(_DWORD **)(v7 + 168)) )
    {
      if ( !a1 )
        goto LABEL_52;
      *(_DWORD *)(a1 + 92) = v3;
      *(_DWORD *)(a1 + 96) = 41;
      *(_DWORD *)(a1 + 100) = v7;
      v8 = (*(int (**)(void))(a1 + 28))();
      if ( !v8 )
        goto LABEL_44;
    }
    v9 = *(_DWORD *)(v7 + 168);
    v10 = v9;
    if ( !v9 )
      break;
    v11 = 0;
    sub_10B9F0(v9, (int)sub_117A54);
    v35 = v3;
    while ( 1 )
    {
      if ( v11 >= sub_10C010((int)v5) )
      {
        v3 = v35;
        goto LABEL_32;
      }
      v12 = sub_10C01C(v5, v11);
      v13 = sub_10BC4C(*(_DWORD *)(v7 + 168), v12);
      v14 = sub_10C01C(*(_DWORD **)(v7 + 168), v13);
      v15 = v14;
      if ( !v14 )
        break;
      v16 = *(_DWORD **)(v14 + 4);
      if ( *v16 == 1 )
      {
        v17 = *(_DWORD **)(v12 + 4);
        if ( !*v17 )
          goto LABEL_45;
        v18 = (_DWORD *)v12;
        v19 = (_DWORD *)v17[1];
        v20 = (_DWORD *)v16[1];
        v21 = sub_1188F8(v18);
        if ( v21 == (_DWORD *)1 )
          v22 = 4;
        else
          v22 = v21 == (_DWORD *)2 ? 16 : 0;
        v23 = v20 == v19;
        if ( v20 != v19 )
          v23 = v19 == 0;
        if ( v23 || v20 && sub_117D90(v20, v19, v22) )
        {
LABEL_45:
          sub_10C040(v5, v11, v15);
        }
        else
        {
          if ( !a1 )
            goto LABEL_52;
          *(_DWORD *)(a1 + 96) = 46;
          *(_DWORD *)(a1 + 100) = v7;
          *(_DWORD *)(a1 + 92) = v35;
          v8 = (*(int (__fastcall **)(_DWORD, int, signed int))(a1 + 28))(0, a1, v22);
          if ( !v8 )
            goto LABEL_44;
        }
      }
LABEL_12:
      ++v11;
    }
    if ( **(_DWORD **)(v12 + 4) != 1 )
      goto LABEL_12;
    v3 = v35;
    if ( !a1 )
      goto LABEL_52;
    *(_DWORD *)(a1 + 96) = 46;
    *(_DWORD *)(a1 + 92) = v35;
LABEL_49:
    *(_DWORD *)(a1 + 100) = v7;
    v8 = (*(int (**)(void))(a1 + 28))();
    if ( !v8 )
    {
LABEL_44:
      sub_10BDB4((void **)v5);
      return v8;
    }
LABEL_32:
    if ( ++v3 >= sub_10C010((int)a2) )
    {
LABEL_33:
      v25 = *(_DWORD *)(v7 + 168);
      if ( v25 )
      {
        if ( a1 )
        {
          v26 = 0;
          while ( 1 )
          {
            v27 = v26 < sub_10C010(v25);
            v28 = v26++;
            if ( !v27 )
              break;
            v29 = sub_10C01C(*(_DWORD **)(v7 + 168), v28);
            if ( !**(_DWORD **)(v29 + 4) && sub_10BC4C((int)v5, v29) >= 0 )
            {
              *(_DWORD *)(a1 + 96) = 46;
              *(_DWORD *)(a1 + 92) = v3;
              *(_DWORD *)(a1 + 100) = v7;
              v8 = (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1);
              if ( !v8 )
                break;
            }
            v25 = *(_DWORD *)(v7 + 168);
          }
        }
        else
        {
          while ( 1 )
          {
            v27 = a1 < sub_10C010(v25);
            v31 = a1++;
            if ( !v27 )
              break;
            v32 = sub_10C01C(*(_DWORD **)(v7 + 168), v31);
            if ( !**(_DWORD **)(v32 + 4) && sub_10BC4C((int)v5, v32) >= 0 )
            {
              v8 = 0;
              goto LABEL_44;
            }
            v25 = *(_DWORD *)(v7 + 168);
          }
        }
      }
      goto LABEL_44;
    }
  }
  do
  {
    if ( v10 >= sub_10C010((int)v5) )
      goto LABEL_32;
    v24 = sub_10C01C(v5, v10++);
  }
  while ( !**(_DWORD **)(v24 + 4) );
  if ( a1 )
  {
    *(_DWORD *)(a1 + 96) = 46;
    *(_DWORD *)(a1 + 92) = v3;
    goto LABEL_49;
  }
LABEL_52:
  sub_10BDB4((void **)v5);
  return a1;
}
