int __fastcall sub_43158(unsigned int *a1, int a2, const char *a3, const char *a4, int a5, unsigned __int8 a6)
{
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r8
  const char *v16; // r0
  const char *v17; // r0
  double *v18; // r3
  const char *v19; // r0
  const char *v20; // r0
  int v21; // r2
  char **v22; // r1
  int v23; // r3
  int v25; // [sp+Ch] [bp-14h] BYREF
  double v26; // [sp+10h] [bp-10h] BYREF
  double v27; // [sp+18h] [bp-8h] BYREF

  v25 = a2;
  v26 = (dbl_245228 - dbl_2463B0) / 1000.0 / (dbl_9ED68 - dbl_9ED80);
  v9 = sub_3F3D8(0, "STATS", 6, (const char *)&v25, 0);
  v10 = sub_3F3D8((int)v9, "ID", 1, a3, 0);
  v27 = (double)SLODWORD(flt_1B09F8) + dbl_9ED68;
  v11 = sub_3F3D8((int)v10, "Elapsed", 13, (const char *)&v27, 0);
  v12 = sub_3F3D8((int)v11, "Calls", 8, a4, 0);
  v13 = sub_3F3D8((int)v12, "Wait", 15, a4 + 4, 0);
  v14 = sub_3F3D8((int)v13, "Max", 15, a4 + 12, 0);
  v15 = sub_3F3D8((int)v14, "Min", 15, a4 + 20, 0);
  if ( !(_BYTE)dword_1B09FC )
    sprintf((char *)&dword_1B09FC, "%.2f", 0.0);
  v16 = sub_3F3D8((int)v15, "GHS 5s", 1, (const char *)&dword_1B09FC, 0);
  v17 = sub_3F3D8((int)v16, "GHS av", 17, (const char *)&v26, 0);
  v18 = &dbl_1B0A10;
  if ( dbl_1B0A10 < 0.01 )
    v18 = &v26;
  v19 = sub_3F3D8((int)v17, "GHS 30m", 17, (const char *)v18, 0);
  v20 = sub_3F3D8((int)v19, "Mode", 6, (const char *)&dword_9EE38, 0);
  v22 = (char **)v20;
  if ( a5 )
  {
    if ( v20 )
      v21 = *((_DWORD *)v20 + 4);
    else
      v22 = (char **)a5;
    if ( v20 )
    {
      v23 = *(_DWORD *)(a5 + 16);
      *(_DWORD *)(a5 + 16) = v21;
      *(_DWORD *)(*((_DWORD *)v20 + 4) + 20) = a5;
      *(_DWORD *)(v23 + 20) = v20;
      *((_DWORD *)v20 + 4) = v23;
    }
  }
  sub_3E88C(a1, v22, a6, 1);
  return v25 + 1;
}
