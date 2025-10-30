int __fastcall sub_F9984(int a1, _BYTE *a2, void *a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r5
  int *v9; // r8
  _DWORD *v10; // r7
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r10
  void *v15; // r0
  bool v16; // zf
  void *v17; // r11
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r6
  int v22; // r9
  size_t v23; // r0
  int v24; // r4
  _DWORD *v25; // r0
  int *v26; // r1
  int v27; // r0
  int v29; // r0
  int v31; // [sp+14h] [bp-10h]
  int v32; // [sp+14h] [bp-10h]
  int v34; // [sp+1Ch] [bp-8h]

  v7 = sub_130B08(a1);
  v8 = v7;
  if ( !v7 )
  {
    v14 = 0;
    v17 = 0;
    v24 = -1;
    goto LABEL_42;
  }
  sub_130BC0(v7);
  v9 = (int *)sub_130CCC(v8);
  v10 = (_DWORD *)sub_130CCC(v8);
  v11 = sub_B85BC(*(_DWORD **)(a4 + 16));
  v12 = v11 + 14;
  v13 = v11 + 7;
  if ( v13 < 0 )
    v13 = v12;
  v14 = v13 >> 3;
  v15 = CRYPTO_malloc((void *)(v13 >> 3));
  v16 = v15 == 0;
  if ( v15 )
    v16 = v10 == 0;
  v17 = v15;
  v18 = v16;
  v34 = v18;
  if ( v16 )
  {
    v19 = 391;
LABEL_49:
    sub_D0048(4, 101, 65, (int)"crypto/rsa/rsa_ossl.c", v19);
    goto LABEL_50;
  }
  if ( !sub_B8AEC(a2, a1, v9) )
    goto LABEL_50;
  if ( sub_B82F8(v9, *(int **)(a4 + 16)) >= 0 )
  {
    sub_D0048(4, 101, 132, (int)"crypto/rsa/rsa_ossl.c", 411);
    v24 = -1;
    goto LABEL_42;
  }
  v20 = *(_DWORD *)(a4 + 64);
  if ( (v20 & 0x80) != 0 )
  {
    v21 = v34;
    v22 = v34;
    goto LABEL_15;
  }
  sub_10C554(*(_DWORD *)(a4 + 92));
  v21 = *(_DWORD *)(a4 + 84);
  if ( !v21 )
  {
    v21 = sub_F7F54(a4, v8);
    *(_DWORD *)(a4 + 84) = v21;
    if ( !v21 )
    {
      sub_10C564(*(_DWORD *)(a4 + 92));
LABEL_56:
      v24 = -1;
      sub_D0048(4, 101, 68, (int)"crypto/rsa/rsa_ossl.c", 418);
      goto LABEL_42;
    }
  }
  if ( sub_130798(v21) )
  {
    v22 = 0;
    sub_10C564(*(_DWORD *)(a4 + 92));
    v27 = sub_130A7C(v9, 0, v21, v8);
  }
  else
  {
    v21 = *(_DWORD *)(a4 + 88);
    if ( v21 )
    {
      sub_10C564(*(_DWORD *)(a4 + 92));
    }
    else
    {
      v21 = sub_F7F54(a4, v8);
      v29 = *(_DWORD *)(a4 + 92);
      *(_DWORD *)(a4 + 88) = v21;
      sub_10C564(v29);
      if ( !v21 )
        goto LABEL_56;
    }
    v22 = sub_130CCC(v8);
    if ( !v22 )
    {
      v19 = 425;
      goto LABEL_49;
    }
    sub_130870(v21);
    v32 = sub_130A7C(v9, v22, v21, v8);
    sub_130878(v21);
    v27 = v32;
  }
  if ( !v27 )
    goto LABEL_50;
  v20 = *(_DWORD *)(a4 + 64);
LABEL_15:
  if ( (v20 & 0x20) != 0
    || *(_DWORD *)(a4 + 4) == 1
    || *(_DWORD *)(a4 + 28)
    && *(_DWORD *)(a4 + 32)
    && *(_DWORD *)(a4 + 36)
    && *(_DWORD *)(a4 + 40)
    && *(_DWORD *)(a4 + 44) )
  {
    if ( (*(int (__fastcall **)(_DWORD *, int *, int, int))(*(_DWORD *)(a4 + 8) + 20))(v10, v9, a4, v8) )
      goto LABEL_23;
LABEL_50:
    v24 = -1;
    goto LABEL_42;
  }
  v25 = (_DWORD *)sub_B822C();
  v31 = (int)v25;
  if ( !v25 )
  {
    v19 = 443;
    goto LABEL_49;
  }
  v26 = *(int **)(a4 + 24);
  if ( !v26 )
  {
    v24 = -1;
    sub_D0048(4, 101, 179, (int)"crypto/rsa/rsa_ossl.c", 447);
    sub_B895C(v31);
    goto LABEL_42;
  }
  sub_B8740(v25, v26, 4);
  if ( (*(_DWORD *)(a4 + 64) & 2) != 0 && !sub_B96D8((int **)(a4 + 68), *(_DWORD *)(a4 + 92), *(int ***)(a4 + 16), v8)
    || !(*(int (__fastcall **)(_DWORD *, int *, int, _DWORD, int, _DWORD))(*(_DWORD *)(a4 + 8) + 24))(
          v10,
          v9,
          v31,
          *(_DWORD *)(a4 + 16),
          v8,
          *(_DWORD *)(a4 + 68)) )
  {
    v24 = -1;
    sub_B895C(v31);
    goto LABEL_42;
  }
  sub_B895C(v31);
LABEL_23:
  if ( v21 && !sub_13063C(v10, v22, v21, v8) )
    goto LABEL_50;
  v23 = sub_B8CD4(v10, (int)v17, v14);
  v24 = v23;
  switch ( a5 )
  {
    case 1:
      v24 = sub_F9EF4(a3, v14, v17, v23, v14);
      goto LABEL_41;
    case 2:
      v24 = sub_FB860(a3, v14, v17, v23, v14);
      goto LABEL_41;
    case 3:
      memcpy(a3, v17, v23);
      goto LABEL_41;
    case 4:
      v24 = sub_1670DC(a3, v14, v17, v23, v14, 0, 0);
LABEL_41:
      sub_D0048(4, 101, 114, (int)"crypto/rsa/rsa_ossl.c", 491);
      sub_D1364(v24 >= 0);
      break;
    default:
      v24 = -1;
      sub_D0048(4, 101, 118, (int)"crypto/rsa/rsa_ossl.c", 488);
      break;
  }
LABEL_42:
  sub_130C74(v8);
  sub_130B5C(v8);
  sub_E0758(v17, v14, (size_t)"crypto/rsa/rsa_ossl.c");
  return v24;
}
