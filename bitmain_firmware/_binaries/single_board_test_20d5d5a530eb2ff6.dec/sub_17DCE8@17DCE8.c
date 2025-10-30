int __fastcall sub_17DCE8(int a1, const char *a2, size_t a3, const void *a4, size_t a5, int a6, int a7)
{
  int v7; // r5
  int v11; // r3
  int v12; // r10
  int *v13; // r2
  int v14; // r0
  int v15; // r11
  int v16; // r0
  char *v17; // r0
  char *v18; // r0
  int v19; // r0
  _DWORD *v20; // r8
  int v21; // r9
  unsigned int v22; // r0
  bool v23; // cc
  _DWORD *v24; // r6
  int v25; // r0
  void *v27; // r0
  _BOOL4 v28; // r9
  int v29; // [sp+18h] [bp-BCh]
  int v30; // [sp+18h] [bp-BCh]
  size_t n; // [sp+24h] [bp-B0h] BYREF
  _DWORD *v32; // [sp+28h] [bp-ACh] BYREF
  int v33; // [sp+2Ch] [bp-A8h] BYREF
  int v34[16]; // [sp+30h] [bp-A4h] BYREF
  _DWORD v35[25]; // [sp+70h] [bp-64h] BYREF

  v7 = a7;
  if ( !a7 )
  {
    v30 = (int)a4;
    v27 = sub_D93D8();
    a4 = (const void *)v30;
    v7 = (int)v27;
  }
  if ( sub_17DBE4(a1, a6, a4, a5, v7) )
  {
    if ( sub_EAC84(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 16)) != (char *)21 )
    {
      sub_D0048(35, 107, 121, (int)"crypto/pkcs12/p12_mutl.c", 92);
      goto LABEL_18;
    }
    v11 = *(_DWORD *)(a1 + 4);
    v12 = 1;
    v13 = *(int **)(v11 + 4);
    v14 = *(_DWORD *)(v11 + 8);
    v15 = *v13;
    v29 = v13[2];
    if ( v14 )
    {
      v16 = sub_126F04(v14);
      v11 = *(_DWORD *)(a1 + 4);
      v12 = v16;
    }
    sub_12EF40(*(_DWORD **)v11, &v32, 0);
    sub_B294C(&v33, 0, 0, v32);
    v17 = sub_EAC84(v33);
    v18 = sub_EAAB4((unsigned int)v17);
    v19 = sub_D99DC((int)v18);
    v20 = (_DWORD *)v19;
    if ( !v19 )
    {
      sub_D0048(35, 107, 118, (int)"crypto/pkcs12/p12_mutl.c", 105);
      goto LABEL_18;
    }
    v21 = sub_D8C78(v19);
    v22 = sub_D8C70((int)v20);
    if ( v21 < 0 )
    {
LABEL_18:
      sub_D0048(35, 123, 109, (int)"crypto/pkcs12/p12_mutl.c", 194);
      return 0;
    }
    v23 = v22 > 0x329;
    if ( v22 != 809 )
      v23 = v22 - 982 > 1;
    if ( v23 || j_j_secure_getenv("LEGACY_GOST_PKCS12") )
    {
      v24 = (_DWORD *)sub_162418((int)a2, a3, v29, v15, 3u, v12, v21, (char *)v34, v20);
      if ( !v24 )
      {
        sub_D0048(35, 107, 107, (int)"crypto/pkcs12/p12_mutl.c", 125);
        goto LABEL_16;
      }
    }
    else
    {
      if ( !sub_15E8C8(a2, a3, v29, v15, v12, v20, 96, v35) )
      {
        v24 = 0;
        sub_D0048(35, 107, 107, (int)"crypto/pkcs12/p12_mutl.c", 119);
LABEL_16:
        sub_E07F8(v34, 0x40u);
        sub_DCA8C((int)v24);
        goto LABEL_18;
      }
      v21 = 32;
      v34[0] = v35[16];
      v34[1] = v35[17];
      v34[2] = v35[18];
      v34[3] = v35[19];
      v34[4] = v35[20];
      v34[5] = v35[21];
      v34[6] = v35[22];
      v34[7] = v35[23];
      sub_E07F8(v35, 0x60u);
    }
    v25 = sub_DCB64();
    v24 = (_DWORD *)v25;
    if ( !v25
      || !sub_DC8C4(v25, v34, v21, v20, 0)
      || !sub_DCA18(
            v24,
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 8),
            **(_DWORD **)(*(_DWORD *)(a1 + 8) + 20)) )
    {
      goto LABEL_16;
    }
    v28 = sub_DCA28((int)v24, (int)v35, &n);
    sub_E07F8(v34, 0x40u);
    sub_DCA8C((int)v24);
    if ( !v28 )
      goto LABEL_18;
    sub_12EF50(**(_DWORD ***)(a1 + 4), 0, v34);
    if ( sub_1280A4(v34[0], (char *)v35, n) )
    {
      return 1;
    }
    else
    {
      sub_D0048(35, 123, 111, (int)"crypto/pkcs12/p12_mutl.c", 199);
      return 0;
    }
  }
  else
  {
    sub_D0048(35, 123, 110, (int)"crypto/pkcs12/p12_mutl.c", 186);
    return 0;
  }
}
