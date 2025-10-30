int __fastcall sub_15ED6C(int *a1, const char *a2, size_t a3, _DWORD *a4, int a5, int a6, int a7)
{
  unsigned int v11; // r6
  int *v12; // r4
  int v13; // r0
  int *v14; // r3
  int v15; // r1
  int v16; // r5
  char *v17; // r0
  int v19; // r2
  int *v20; // r3
  int v21; // r0
  int v22; // [sp+10h] [bp-54h]
  int v23; // [sp+14h] [bp-50h]
  unsigned int v24; // [sp+1Ch] [bp-48h] BYREF
  _DWORD v25[17]; // [sp+20h] [bp-44h] BYREF

  if ( !sub_D8920((int)a1) )
  {
    v12 = 0;
    v11 = 0;
    v16 = 0;
    sub_D0048(6, 164, 131, (int)"crypto/evp/p5_crpt2.c", 199);
    goto LABEL_12;
  }
  v11 = sub_D8AD4((int)a1);
  if ( v11 > 0x40 )
    sub_BC328("assertion failed: keylen <= sizeof(key)", "crypto/evp/p5_crpt2.c", 203);
  v12 = (int *)sub_AD8B0((int)&PBKDF2PARAM_it, a4);
  if ( !v12 )
  {
    sub_D0048(6, 164, 114, (int)"crypto/evp/p5_crpt2.c", 210);
    goto LABEL_16;
  }
  v11 = sub_D8AD4((int)a1);
  v13 = v12[2];
  if ( v13 && v11 != sub_126F04(v13) )
  {
    sub_D0048(6, 164, 123, (int)"crypto/evp/p5_crpt2.c", 219);
LABEL_16:
    v16 = 0;
    goto LABEL_12;
  }
  v14 = (int *)v12[3];
  v15 = 163;
  if ( v14 )
    v15 = (int)sub_EAC84(*v14);
  v16 = sub_15E1BC(1, v15, 0, &v24, 0);
  if ( !v16 )
  {
    v19 = 229;
LABEL_14:
    sub_D0048(6, 164, 125, (int)"crypto/evp/p5_crpt2.c", v19);
    goto LABEL_12;
  }
  v17 = sub_EAAB4(v24);
  v16 = sub_D99DC((int)v17);
  if ( !v16 )
  {
    v19 = 235;
    goto LABEL_14;
  }
  if ( *(_DWORD *)*v12 == 4 )
  {
    v20 = *(int **)(*v12 + 4);
    v23 = v20[2];
    v22 = *v20;
    v21 = sub_126F04(v12[1]);
    v16 = sub_15E8C8(a2, a3, v23, v22, v21, (_DWORD *)v16, v11, v25);
    if ( v16 )
      v16 = sub_D8440(a1, 0, 0, (int)v25, 0, a7);
  }
  else
  {
    v16 = 0;
    sub_D0048(6, 164, 126, (int)"crypto/evp/p5_crpt2.c", 240);
  }
LABEL_12:
  sub_E07F8(v25, v11);
  sub_17339C(v12);
  return v16;
}
