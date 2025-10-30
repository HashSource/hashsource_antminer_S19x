int __fastcall sub_F9460(size_t a1, void *a2, int a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r0
  int v10; // r6
  _DWORD *v11; // r8
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r5
  _BYTE *v16; // r0
  bool v17; // zf
  _BYTE *v18; // r7
  int v19; // r2
  int v21; // r4
  int v22; // r0
  int *v24; // [sp+14h] [bp-8h]

  if ( sub_B85BC(*(_DWORD **)(a4 + 16)) > 0x4000 )
  {
    sub_D0048(4, 104, 105, (int)"crypto/rsa/rsa_ossl.c", 77);
    return -1;
  }
  else
  {
    if ( sub_B82F8(*(int **)(a4 + 16), *(int **)(a4 + 20)) <= 0 )
    {
      v19 = 82;
      goto LABEL_13;
    }
    v8 = sub_B85BC(*(_DWORD **)(a4 + 16));
    if ( v8 > 3072 )
    {
      v8 = sub_B85BC(*(_DWORD **)(a4 + 20));
      if ( v8 > 64 )
      {
        v19 = 89;
LABEL_13:
        sub_D0048(4, 104, 101, (int)"crypto/rsa/rsa_ossl.c", v19);
        return -1;
      }
    }
    v9 = sub_130B08(v8);
    v10 = v9;
    if ( v9 )
    {
      sub_130BC0(v9);
      v24 = (int *)sub_130CCC(v10);
      v11 = (_DWORD *)sub_130CCC(v10);
      v12 = sub_B85BC(*(_DWORD **)(a4 + 16));
      v13 = v12 + 14;
      v14 = v12 + 7;
      if ( v14 < 0 )
        v14 = v13;
      v15 = v14 >> 3;
      v16 = CRYPTO_malloc((void *)(v14 >> 3));
      v17 = v16 == 0;
      if ( v16 )
        v17 = v11 == 0;
      v18 = v16;
      if ( v17 )
      {
        v21 = -1;
        sub_D0048(4, 104, 65, (int)"crypto/rsa/rsa_ossl.c", 102);
      }
      else
      {
        switch ( a5 )
        {
          case 1:
            v22 = sub_F9E6C();
            goto LABEL_18;
          case 2:
            v22 = sub_FB7D0();
            goto LABEL_18;
          case 3:
            v22 = sub_1663C0((int)v16, v15, a2, a1);
            goto LABEL_18;
          case 4:
            v22 = sub_1669D8(v16, v15);
LABEL_18:
            if ( v22 <= 0 || !sub_B8AEC(v18, v15, v24) )
              goto LABEL_28;
            if ( sub_B82F8(v24, *(int **)(a4 + 16)) < 0 )
            {
              if ( ((*(_DWORD *)(a4 + 64) & 2) == 0
                 || sub_B96D8((int **)(a4 + 68), *(_DWORD *)(a4 + 92), *(int ***)(a4 + 16), v10))
                && (*(int (__fastcall **)(_DWORD *, int *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)(a4 + 8) + 24))(
                     v11,
                     v24,
                     *(_DWORD *)(a4 + 20),
                     *(_DWORD *)(a4 + 16),
                     v10,
                     *(_DWORD *)(a4 + 68)) )
              {
                v21 = sub_B8CD4(v11, a3, v15);
              }
              else
              {
LABEL_28:
                v21 = -1;
              }
            }
            else
            {
              v21 = -1;
              sub_D0048(4, 104, 132, (int)"crypto/rsa/rsa_ossl.c", 132);
            }
            break;
          default:
            v21 = -1;
            sub_D0048(4, 104, 118, (int)"crypto/rsa/rsa_ossl.c", 120);
            break;
        }
      }
    }
    else
    {
      v15 = 0;
      v18 = 0;
      v21 = -1;
    }
    sub_130C74(v10);
    sub_130B5C(v10);
    sub_E0758(v18, v15, (size_t)"crypto/rsa/rsa_ossl.c");
    return v21;
  }
}
