bool __fastcall sub_17D9B0(int a1, const char *a2, size_t a3)
{
  int v6; // r3
  int v7; // r10
  int *v8; // r2
  int v9; // r0
  int v10; // r11
  int v11; // r0
  char *v12; // r0
  char *v13; // r0
  int v14; // r0
  _DWORD *v15; // r6
  int v16; // r7
  unsigned int v17; // r0
  bool v18; // cc
  int v19; // r0
  _DWORD *v20; // r9
  _BOOL4 v22; // r7
  int v23; // r0
  unsigned __int8 *v24; // r0
  int v25; // [sp+18h] [bp-BCh]
  int v26; // [sp+24h] [bp-B0h] BYREF
  _DWORD *v27; // [sp+28h] [bp-ACh] BYREF
  int v28; // [sp+2Ch] [bp-A8h] BYREF
  int v29[16]; // [sp+30h] [bp-A4h] BYREF
  _DWORD v30[25]; // [sp+70h] [bp-64h] BYREF

  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( sub_EAC84(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 16)) != (char *)21 )
    {
      sub_D0048(35, 107, 121, (int)"crypto/pkcs12/p12_mutl.c", 92);
      goto LABEL_16;
    }
    v6 = *(_DWORD *)(a1 + 4);
    v7 = 1;
    v8 = *(int **)(v6 + 4);
    v9 = *(_DWORD *)(v6 + 8);
    v10 = *v8;
    v25 = v8[2];
    if ( v9 )
    {
      v11 = sub_126F04(v9);
      v6 = *(_DWORD *)(a1 + 4);
      v7 = v11;
    }
    sub_12EF40(*(_DWORD **)v6, &v27, 0);
    sub_B294C(&v28, 0, 0, v27);
    v12 = sub_EAC84(v28);
    v13 = sub_EAAB4((unsigned int)v12);
    v14 = sub_D99DC((int)v13);
    v15 = (_DWORD *)v14;
    if ( !v14 )
    {
      sub_D0048(35, 107, 118, (int)"crypto/pkcs12/p12_mutl.c", 105);
      goto LABEL_16;
    }
    v16 = sub_D8C78(v14);
    v17 = sub_D8C70((int)v15);
    if ( v16 < 0 )
    {
LABEL_16:
      sub_D0048(35, 126, 109, (int)"crypto/pkcs12/p12_mutl.c", 162);
      return 0;
    }
    v18 = v17 > 0x329;
    if ( v17 != 809 )
      v18 = v17 - 982 > 1;
    if ( v18 || j_j_secure_getenv("LEGACY_GOST_PKCS12") )
    {
      if ( !sub_162418((int)a2, a3, v25, v10, 3u, v7, v16, (char *)v29, v15) )
      {
        v20 = 0;
        sub_D0048(35, 107, 107, (int)"crypto/pkcs12/p12_mutl.c", 125);
        goto LABEL_15;
      }
    }
    else
    {
      if ( !sub_15E8C8(a2, a3, v25, v10, v7, v15, 96, v30) )
      {
        v20 = 0;
        sub_D0048(35, 107, 107, (int)"crypto/pkcs12/p12_mutl.c", 119);
LABEL_15:
        sub_E07F8(v29, 0x40u);
        sub_DCA8C((int)v20);
        goto LABEL_16;
      }
      v16 = 32;
      v29[0] = v30[16];
      v29[1] = v30[17];
      v29[2] = v30[18];
      v29[3] = v30[19];
      v29[4] = v30[20];
      v29[5] = v30[21];
      v29[6] = v30[22];
      v29[7] = v30[23];
      sub_E07F8(v30, 0x60u);
    }
    v19 = sub_DCB64();
    v20 = (_DWORD *)v19;
    if ( !v19
      || !sub_DC8C4(v19, v29, v16, v15, 0)
      || !sub_DCA18(
            v20,
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 8),
            **(_DWORD **)(*(_DWORD *)(a1 + 8) + 20)) )
    {
      goto LABEL_15;
    }
    v22 = sub_DCA28((int)v20, (int)v30, &v26);
    sub_E07F8(v29, 0x40u);
    sub_DCA8C((int)v20);
    if ( !v22 )
      goto LABEL_16;
    sub_12EF40(**(_DWORD ***)(a1 + 4), 0, v29);
    v23 = sub_AE2A8(v29[0]);
    if ( v23 != v26 )
      return 0;
    v24 = (unsigned __int8 *)sub_AE2B4(v29[0]);
    return sub_BC33C((unsigned __int8 *)v30, v24, v26) == 0;
  }
  else
  {
    sub_D0048(35, 126, 108, (int)"crypto/pkcs12/p12_mutl.c", 157);
    return 0;
  }
}
