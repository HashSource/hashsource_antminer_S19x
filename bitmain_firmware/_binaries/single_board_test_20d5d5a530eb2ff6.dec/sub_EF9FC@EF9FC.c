int __fastcall sub_EF9FC(_DWORD *a1, _DWORD *a2)
{
  char *v3; // r0
  int v4; // r1
  _DWORD *v5; // r2
  int v6; // r9
  char ***v7; // r5
  int v8; // r8
  int v9; // r7
  _DWORD *v10; // r4
  int v11; // r11
  int *v12; // r0
  bool v13; // cc
  int v14; // r1
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  int v18; // r10
  unsigned int v19; // r0
  int v20; // r1
  int v21; // r2
  char **v22; // r1
  int v23; // r7
  void *v24; // r0
  void *v25; // r10
  int v26; // r5
  int *v27; // r0
  int *v28; // r0
  int *v29; // r4
  int v31; // r3
  int v32; // r4
  int v33; // r3
  _DWORD *v34; // r3
  int v35; // r3
  int v36; // r4
  _DWORD *v37; // r3
  _DWORD *v38; // r3
  int v39; // r0
  void *v40; // r0
  _DWORD *v41; // r0
  int v42; // r2
  int *v43; // [sp+Ch] [bp-80h]
  int v44; // [sp+Ch] [bp-80h]
  int n; // [sp+18h] [bp-74h]
  int v47; // [sp+2Ch] [bp-60h] BYREF
  int v48; // [sp+30h] [bp-5Ch] BYREF
  void *v49; // [sp+34h] [bp-58h] BYREF
  _BYTE src[16]; // [sp+38h] [bp-54h] BYREF
  _BYTE v51[68]; // [sp+48h] [bp-44h] BYREF

  v47 = 0;
  if ( !a1 )
  {
    sub_D0048(33, 105, 143, (int)"crypto/pkcs7/pk7_doit.c", 209);
    return 0;
  }
  if ( !a1[5] )
  {
    sub_D0048(33, 105, 122, (int)"crypto/pkcs7/pk7_doit.c", 223);
    return 0;
  }
  v3 = sub_EAC84(a1[4]);
  a1[2] = 0;
  switch ( (unsigned int)v3 )
  {
    case 0x15u:
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v43 = 0;
      goto LABEL_5;
    case 0x16u:
      v31 = a1[5];
      v32 = *(_DWORD *)(v31 + 20);
      v9 = *(_DWORD *)(v31 + 4);
      if ( sub_EAC84(*(_DWORD *)(v32 + 16)) == (char *)21 )
      {
        v7 = 0;
        v6 = *(_DWORD *)(v32 + 20);
        v8 = 0;
        v10 = 0;
        v43 = 0;
      }
      else
      {
        if ( (unsigned int)(sub_EAC84(*(_DWORD *)(v32 + 16)) - 21) <= 5 )
        {
LABEL_36:
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v10 = 0;
          v43 = 0;
          goto LABEL_5;
        }
        v37 = *(_DWORD **)(v32 + 20);
        if ( v37 )
        {
          v5 = (_DWORD *)*v37;
          if ( *v37 != 4 )
            goto LABEL_36;
          v7 = 0;
          v6 = v37[1];
          v8 = 0;
          v10 = 0;
          v43 = 0;
        }
        else
        {
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v10 = 0;
          v43 = 0;
        }
      }
      goto LABEL_5;
    case 0x17u:
      v5 = (_DWORD *)a1[5];
      v33 = v5[2];
      v8 = v5[1];
      v10 = *(_DWORD **)(v33 + 12);
      v7 = *(char ****)(v33 + 4);
      if ( v10 )
      {
        v6 = 0;
        v9 = 0;
        v43 = 0;
        goto LABEL_5;
      }
      v42 = 250;
      goto LABEL_80;
    case 0x18u:
      v34 = (_DWORD *)a1[5];
      v5 = (_DWORD *)v34[5];
      v8 = v34[6];
      v9 = v34[1];
      v10 = (_DWORD *)v5[3];
      v7 = (char ***)v5[1];
      if ( v10 )
      {
        v6 = 0;
        v43 = 0;
        goto LABEL_5;
      }
      v42 = 241;
LABEL_80:
      v44 = 0;
      sub_D0048(33, 105, 116, (int)"crypto/pkcs7/pk7_doit.c", v42);
      goto LABEL_33;
    case 0x19u:
      v35 = a1[5];
      v36 = *(_DWORD *)(v35 + 8);
      v43 = *(int **)(v35 + 4);
      if ( sub_EAC84(*(_DWORD *)(v36 + 16)) == (char *)21 )
      {
        v7 = 0;
        v6 = *(_DWORD *)(v36 + 20);
        v8 = 0;
        v9 = 0;
        v10 = 0;
      }
      else
      {
        if ( (unsigned int)(sub_EAC84(*(_DWORD *)(v36 + 16)) - 21) <= 5 )
        {
LABEL_43:
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v9 = 0;
          v10 = 0;
          goto LABEL_5;
        }
        v38 = *(_DWORD **)(v36 + 20);
        if ( v38 )
        {
          v5 = (_DWORD *)*v38;
          if ( *v38 != 4 )
            goto LABEL_43;
          v7 = 0;
          v6 = v38[1];
          v8 = 0;
          v9 = 0;
          v10 = 0;
        }
        else
        {
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v9 = 0;
          v10 = 0;
        }
      }
LABEL_5:
      v11 = 0;
      while ( 1 )
      {
        v13 = v11 < sub_10C010(v9, v4, v5);
        v14 = v11;
        v15 = v9;
        ++v11;
        if ( !v13 )
          break;
        v12 = (int *)sub_10C01C(v9, v14);
        if ( !sub_EF96C(&v47, v12) )
          goto LABEL_48;
      }
      if ( v43 )
      {
        v15 = sub_EF96C(&v47, v43);
        if ( !v15 )
          goto LABEL_48;
      }
      if ( !v10 )
        goto LABEL_51;
      v16 = sub_15C058(v15, v14);
      v17 = sub_B655C(v16);
      v44 = (int)v17;
      if ( !v17 )
      {
        sub_D0048(33, 105, 32, (int)"crypto/pkcs7/pk7_doit.c", 279);
        goto LABEL_33;
      }
      sub_B6ECC((int)v17, 129, 0, (int)&v48);
      n = sub_D8AD0((int)v10);
      v18 = sub_D8940((int)v10);
      v19 = sub_D8ADC((int)v10);
      *v7 = sub_EAA20(v19);
      if ( v18 > 0 && sub_F497C(src, v18) <= 0 )
        goto LABEL_33;
      if ( sub_D8440((int *)v48, v10, 0, 0, 0, 1) <= 0
        || sub_D87DC((_DWORD *)v48, (int)v51) <= 0
        || sub_D8440((int *)v48, 0, 0, (int)v51, src, 1) <= 0 )
      {
        goto LABEL_33;
      }
      if ( v18 > 0 )
      {
        v22 = v7[1];
        if ( !v22 )
        {
          v22 = (char **)sub_B2408();
          v7[1] = v22;
          if ( !v22 )
            goto LABEL_33;
        }
        if ( sub_D8BA8((int *)v48, v22) < 0 )
          goto LABEL_33;
      }
      v23 = 0;
      while ( v23 < sub_10C010(v8, v20, v21) )
      {
        v26 = sub_10C01C(v8, v23);
        v27 = (int *)sub_10E89C(*(_DWORD *)(v26 + 16));
        if ( !v27 )
          goto LABEL_33;
        v28 = sub_DB4F8(v27, 0);
        v29 = v28;
        if ( !v28 )
          goto LABEL_33;
        if ( sub_DAA54(v28) <= 0 )
        {
LABEL_31:
          v25 = 0;
LABEL_32:
          sub_DB4BC((int)v29);
          CRYPTO_free(v25);
          goto LABEL_33;
        }
        if ( sub_DB77C((int)v29, -1, 256) <= 0 )
        {
          v25 = 0;
          sub_D0048(33, 132, 152, (int)"crypto/pkcs7/pk7_doit.c", 110);
          goto LABEL_32;
        }
        if ( sub_DAAA0(v29, 0, (unsigned int *)&v49, (int)v51, n) <= 0 )
          goto LABEL_31;
        ++v23;
        v24 = CRYPTO_malloc(v49);
        v25 = v24;
        if ( !v24 )
        {
          sub_D0048(33, 132, 65, (int)"crypto/pkcs7/pk7_doit.c", 120);
          goto LABEL_32;
        }
        if ( sub_DAAA0(v29, (int)v24, (unsigned int *)&v49, (int)v51, n) <= 0 )
          goto LABEL_32;
        sub_AE174(*(_DWORD **)(v26 + 12), (int)v25, (int)v49);
        sub_DB4BC((int)v29);
        CRYPTO_free(0);
      }
      sub_E07F8(v51, n);
      if ( v47 )
        sub_B70C0(v47, v44);
      else
        v47 = v44;
LABEL_51:
      if ( a2 )
        goto LABEL_52;
      if ( sub_EAC84(a1[4]) != (char *)22 || !sub_F0F48(a1, 2, 0) )
      {
        if ( v6 && *(int *)v6 > 0 )
        {
          a2 = sub_B7E48(*(const char **)(v6 + 8), *(_DWORD *)v6);
          if ( a2 )
            goto LABEL_52;
        }
        else
        {
          v40 = sub_B7E30();
          v41 = sub_B655C((int)v40);
          a2 = v41;
          if ( v41 )
          {
            sub_B6ECC((int)v41, 130, 0, 0);
            goto LABEL_52;
          }
        }
LABEL_48:
        v44 = 0;
LABEL_33:
        sub_B717C(v47);
        sub_B717C(v44);
        return 0;
      }
      v39 = sub_12F3FC();
      a2 = sub_B655C(v39);
      if ( !a2 )
        goto LABEL_48;
LABEL_52:
      if ( !v47 )
        return (int)a2;
      sub_B70C0(v47, (int)a2);
      return v47;
    default:
      sub_D0048(33, 105, 112, (int)"crypto/pkcs7/pk7_doit.c", 261);
      v44 = 0;
      goto LABEL_33;
  }
}
