int __fastcall sub_C4BE8(int a1)
{
  int v1; // r3
  int v2; // r2
  char *v3; // r2
  _DWORD *v4; // r5
  int (*v5)(void); // r4
  int v6; // r7
  int v7; // r6
  _DWORD *v8; // r10
  _BYTE *v9; // r8
  _DWORD *v10; // r9
  _DWORD *v11; // r0
  int v12; // r8
  int v13; // r0
  int v14; // r0
  int v15; // r4
  _DWORD *v16; // r6
  int v17; // r11
  int v18; // r0
  int v20; // r0
  _DWORD *v21; // r3
  int v22; // r5
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // [sp+0h] [bp-48h]
  _BYTE *v27; // [sp+8h] [bp-40h]
  int **v28; // [sp+8h] [bp-40h]
  int v29; // [sp+Ch] [bp-3Ch]
  _BYTE *v30; // [sp+Ch] [bp-3Ch]
  _BYTE *v31; // [sp+10h] [bp-38h]
  int v33; // [sp+18h] [bp-30h]
  _BYTE *v34; // [sp+1Ch] [bp-2Ch]

  if ( a1 <= 0 )
    return 0;
  v1 = 0;
  while ( 1 )
  {
    v2 = 16 * v1++;
    if ( a1 == *(_DWORD *)((char *)&unk_20562C + v2) )
      break;
    if ( v1 == 82 )
      goto LABEL_23;
  }
  v3 = (char *)&unk_20562C + v2;
  v4 = (_DWORD *)*((_DWORD *)v3 + 1);
  v5 = (int (*)(void))*((_DWORD *)v3 + 2);
  if ( !v4 )
  {
    v18 = *((_DWORD *)v3 + 2);
    if ( v5 )
      v18 = ((int (__fastcall *)(int))v5)(v18);
    v15 = sub_C6130(v18);
    goto LABEL_17;
  }
  v6 = sub_130B08();
  if ( !v6 )
  {
    v16 = 0;
    sub_D0048(16, 175, 65, "crypto/ec/ec_curve.c", 3029);
    v12 = 0;
    v29 = 0;
    v28 = 0;
    v10 = 0;
    v8 = 0;
    v17 = 0;
    v15 = 0;
    goto LABEL_21;
  }
  v7 = v4[2];
  v33 = v4[1];
  v31 = (char *)v4 + v33 + 16;
  v8 = sub_B8AEC(v31, v7, 0);
  if ( !v8 || (v9 = &v31[v7], (v10 = sub_B8AEC(&v31[v7], v7, 0)) == 0) )
  {
    v10 = 0;
    goto LABEL_20;
  }
  v27 = &v9[v7];
  v11 = sub_B8AEC(&v9[v7], v7, 0);
  v12 = (int)v11;
  if ( !v11 )
  {
LABEL_20:
    v16 = 0;
    v12 = 0;
    v17 = 0;
    v15 = 0;
    sub_D0048(16, 175, 3, "crypto/ec/ec_curve.c", 3042);
    v29 = 0;
    v28 = 0;
    goto LABEL_21;
  }
  if ( !v5 )
  {
    if ( *v4 == 406 )
    {
      v15 = sub_C537C(v8, v10, v11, v6);
      if ( v15 )
        goto LABEL_27;
      v26 = 3055;
    }
    else
    {
      v15 = sub_C53C8(v8, v10, v11, v6);
      if ( v15 )
        goto LABEL_27;
      v26 = 3064;
    }
    v16 = 0;
    sub_D0048(16, 175, 16, "crypto/ec/ec_curve.c", v26);
    v17 = 0;
    v29 = 0;
    v28 = 0;
    goto LABEL_21;
  }
  v13 = v5();
  v14 = sub_C6130(v13);
  v15 = v14;
  if ( !v14 || !(*(int (__fastcall **)(int, _DWORD *, _DWORD *, int, int))(*(_DWORD *)v14 + 24))(v14, v8, v10, v12, v6) )
  {
    v16 = 0;
    v17 = 0;
    sub_D0048(16, 175, 16, "crypto/ec/ec_curve.c", 3050);
    v29 = 0;
    v28 = 0;
    goto LABEL_21;
  }
LABEL_27:
  sub_C6280(v15, a1);
  v17 = sub_C63F4(v15);
  if ( v17 )
  {
    v30 = &v27[v7];
    v28 = (int **)sub_B8AEC(&v27[v7], v7, 0);
    if ( v28 && (v34 = &v30[v7], v21 = sub_B8AEC(&v30[v7], v7, 0), (v29 = (int)v21) != 0) )
    {
      if ( sub_C6E54(v15, v17, v28, v21, v6) )
      {
        v16 = sub_B8AEC(&v34[v7], v7, 0);
        if ( v16 && sub_B8930(v28, v4[3]) )
        {
          if ( sub_C67B4(v15, v17, v16, v28) )
          {
            if ( v33 && !sub_C6298(v15, v4 + 4) )
            {
              sub_D0048(16, 175, 16, "crypto/ec/ec_curve.c", 3097);
            }
            else
            {
              if ( sub_C628C(v15) != 1 )
                goto LABEL_22;
              v22 = sub_EAA20(a1);
              if ( v22 )
              {
                v23 = sub_EB278();
                if ( !v23 )
                  sub_C6288(v15, 0);
                ASN1_OBJECT_free(v22, v23, v24, v25);
                goto LABEL_22;
              }
              sub_D0048(16, 175, 8, "crypto/ec/ec_curve.c", 3118);
            }
          }
          else
          {
            sub_D0048(16, 175, 16, "crypto/ec/ec_curve.c", 3092);
          }
        }
        else
        {
          sub_D0048(16, 175, 3, "crypto/ec/ec_curve.c", 3088);
        }
      }
      else
      {
        v16 = 0;
        sub_D0048(16, 175, 16, "crypto/ec/ec_curve.c", 3083);
      }
    }
    else
    {
      v16 = 0;
      sub_D0048(16, 175, 3, "crypto/ec/ec_curve.c", 3079);
      v29 = 0;
    }
  }
  else
  {
    v16 = 0;
    sub_D0048(16, 175, 16, "crypto/ec/ec_curve.c", 3073);
    v29 = 0;
    v28 = 0;
  }
LABEL_21:
  v20 = v15;
  v15 = 0;
  sub_C64B8(v20);
LABEL_22:
  sub_C6490(v17);
  sub_130B5C(v6);
  sub_B895C((int)v8);
  sub_B895C((int)v10);
  sub_B895C(v12);
  sub_B895C((int)v16);
  sub_B895C((int)v28);
  sub_B895C(v29);
LABEL_17:
  if ( v15 )
    return v15;
LABEL_23:
  sub_D0048(16, 174, 129, "crypto/ec/ec_curve.c", 3159);
  return 0;
}
