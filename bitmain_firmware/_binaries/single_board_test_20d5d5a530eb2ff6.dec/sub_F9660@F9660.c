int __fastcall sub_F9660(size_t a1, void *a2, int a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r6
  int *v9; // r9
  int *v10; // r10
  int v11; // r0
  int v12; // r5
  int v13; // r0
  int v14; // r5
  _BYTE *v15; // r0
  bool v16; // zf
  int v17; // r2
  int v18; // r4
  int v20; // r0
  int v21; // r3
  int v22; // r8
  _DWORD *v23; // r0
  int *v24; // r1
  int v25; // r7
  int v26; // r0
  int v27; // r0
  _BYTE *v28; // [sp+8h] [bp-14h]
  void *srca; // [sp+Ch] [bp-10h]
  int v32; // [sp+14h] [bp-8h]

  v7 = sub_130B08(a1);
  v8 = v7;
  if ( !v7 )
  {
    v14 = 0;
    v28 = 0;
    v18 = -1;
    goto LABEL_12;
  }
  sub_130BC0(v7);
  v9 = (int *)sub_130CCC(v8);
  v10 = (int *)sub_130CCC(v8);
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
  v28 = v15;
  if ( v16 )
  {
    v17 = 257;
LABEL_40:
    sub_D0048(4, 102, 65, (int)"crypto/rsa/rsa_ossl.c", v17);
    goto LABEL_41;
  }
  switch ( a5 )
  {
    case 3:
      v20 = sub_1663C0((int)v15, v14, a2, a1);
      break;
    case 5:
      v20 = sub_FBB78((int)v15, v14, a2, a1);
      break;
    case 1:
      v20 = sub_F9CFC();
      break;
    default:
      v18 = -1;
      sub_D0048(4, 102, 118, (int)"crypto/rsa/rsa_ossl.c", 273);
      goto LABEL_12;
  }
  if ( v20 <= 0 || !sub_B8AEC(v28, v14, v9) )
    goto LABEL_41;
  if ( sub_B82F8(v9, *(int **)(a4 + 16)) >= 0 )
  {
    v18 = -1;
    sub_D0048(4, 102, 132, (int)"crypto/rsa/rsa_ossl.c", 285);
    goto LABEL_12;
  }
  v21 = *(_DWORD *)(a4 + 64);
  if ( (v21 & 2) != 0 )
  {
    if ( !sub_B96D8((int **)(a4 + 68), *(_DWORD *)(a4 + 92), *(int ***)(a4 + 16), v8) )
      goto LABEL_41;
    v21 = *(_DWORD *)(a4 + 64);
  }
  if ( (v21 & 0x80) == 0 )
  {
    sub_10C554(*(_DWORD *)(a4 + 92));
    v22 = *(_DWORD *)(a4 + 84);
    if ( !v22 )
    {
      v22 = sub_F7F54(a4, v8);
      *(_DWORD *)(a4 + 84) = v22;
      if ( !v22 )
      {
        sub_10C564(*(_DWORD *)(a4 + 92));
LABEL_61:
        v18 = -1;
        sub_D0048(4, 102, 68, (int)"crypto/rsa/rsa_ossl.c", 297);
        goto LABEL_12;
      }
    }
    if ( sub_130798(v22) )
    {
      srca = 0;
      sub_10C564(*(_DWORD *)(a4 + 92));
      v26 = sub_130A7C(v9, 0, v22, v8);
    }
    else
    {
      v22 = *(_DWORD *)(a4 + 88);
      if ( v22 )
      {
        sub_10C564(*(_DWORD *)(a4 + 92));
      }
      else
      {
        v22 = sub_F7F54(a4, v8);
        v27 = *(_DWORD *)(a4 + 92);
        *(_DWORD *)(a4 + 88) = v22;
        sub_10C564(v27);
        if ( !v22 )
          goto LABEL_61;
      }
      srca = (void *)sub_130CCC(v8);
      if ( !srca )
      {
        v17 = 304;
        goto LABEL_40;
      }
      sub_130870(v22);
      v25 = sub_130A7C(v9, srca, v22, v8);
      sub_130878(v22);
      v26 = v25;
    }
    if ( !v26 )
      goto LABEL_41;
    v21 = *(_DWORD *)(a4 + 64);
    goto LABEL_21;
  }
  v22 = 0;
  srca = 0;
LABEL_21:
  if ( (v21 & 0x20) != 0
    || *(_DWORD *)(a4 + 4) == 1
    || *(_DWORD *)(a4 + 28)
    && *(_DWORD *)(a4 + 32)
    && *(_DWORD *)(a4 + 36)
    && *(_DWORD *)(a4 + 40)
    && *(_DWORD *)(a4 + 44) )
  {
    if ( !(*(int (__fastcall **)(int *, int *, int, int))(*(_DWORD *)(a4 + 8) + 20))(v10, v9, a4, v8) )
    {
LABEL_41:
      v18 = -1;
      goto LABEL_12;
    }
  }
  else
  {
    v23 = (_DWORD *)sub_B822C();
    v32 = (int)v23;
    if ( !v23 )
    {
      v17 = 321;
      goto LABEL_40;
    }
    v24 = *(int **)(a4 + 24);
    if ( !v24 )
    {
      v18 = -1;
      sub_D0048(4, 102, 179, (int)"crypto/rsa/rsa_ossl.c", 325);
      sub_B895C(v32);
      goto LABEL_12;
    }
    sub_B8740(v23, v24, 4);
    if ( !(*(int (__fastcall **)(int *, int *, int, _DWORD, int, _DWORD))(*(_DWORD *)(a4 + 8) + 24))(
            v10,
            v9,
            v32,
            *(_DWORD *)(a4 + 16),
            v8,
            *(_DWORD *)(a4 + 68)) )
    {
      v18 = -1;
      sub_B895C(v32);
      goto LABEL_12;
    }
    sub_B895C(v32);
  }
  if ( v22 && !sub_13063C(v10, srca, v22, v8) )
    goto LABEL_41;
  if ( a5 == 5 )
  {
    if ( !BN_sub(v9, *(_DWORD *)(a4 + 16), v10) )
      goto LABEL_41;
    if ( sub_B8354(v10, v9) > 0 )
      v10 = v9;
  }
  v18 = sub_B8CD4(v10, a3, v14);
LABEL_12:
  sub_130C74(v8);
  sub_130B5C(v8);
  sub_E0758(v28, v14, (size_t)"crypto/rsa/rsa_ossl.c");
  return v18;
}
