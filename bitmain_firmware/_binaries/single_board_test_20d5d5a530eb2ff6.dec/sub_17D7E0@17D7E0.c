bool __fastcall sub_17D7E0(int a1, const char *a2, size_t a3, int a4, _DWORD *a5)
{
  int v9; // r3
  int v10; // r10
  int *v11; // r2
  int v12; // r0
  int v13; // r0
  char *v14; // r0
  char *v15; // r0
  int v16; // r0
  _DWORD *v17; // r4
  int v18; // r6
  unsigned int v19; // r0
  bool v21; // cc
  int v22; // r0
  _DWORD *v23; // r8
  int v24; // r0
  _BOOL4 v25; // r4
  int v26; // [sp+1Ch] [bp-B8h]
  int v27; // [sp+20h] [bp-B4h]
  _DWORD *v28; // [sp+28h] [bp-ACh] BYREF
  int v29; // [sp+2Ch] [bp-A8h] BYREF
  _DWORD v30[16]; // [sp+30h] [bp-A4h] BYREF
  _DWORD v31[25]; // [sp+70h] [bp-64h] BYREF

  if ( sub_EAC84(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 16)) == (char *)21 )
  {
    v9 = *(_DWORD *)(a1 + 4);
    v10 = 1;
    v11 = *(int **)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v26 = v11[2];
    v27 = *v11;
    if ( v12 )
    {
      v13 = sub_126F04(v12);
      v9 = *(_DWORD *)(a1 + 4);
      v10 = v13;
    }
    sub_12EF40(*(_DWORD **)v9, &v28, 0);
    sub_B294C(&v29, 0, 0, v28);
    v14 = sub_EAC84(v29);
    v15 = sub_EAAB4((unsigned int)v14);
    v16 = sub_D99DC((int)v15);
    v17 = (_DWORD *)v16;
    if ( v16 )
    {
      v18 = sub_D8C78(v16);
      v19 = sub_D8C70((int)v17);
      if ( v18 < 0 )
        return 0;
      v21 = v19 > 0x329;
      if ( v19 != 809 )
        v21 = v19 - 982 > 1;
      if ( v21 || j_j_secure_getenv("LEGACY_GOST_PKCS12") )
      {
        if ( !sub_162418((int)a2, a3, v26, v27, 3u, v10, v18, (char *)v30, v17) )
        {
          v23 = 0;
          v25 = 0;
          sub_D0048(35, 107, 107, (int)"crypto/pkcs12/p12_mutl.c", 125);
          goto LABEL_15;
        }
      }
      else
      {
        if ( !sub_15E8C8(a2, a3, v26, v27, v10, v17, 96, v31) )
        {
          v23 = 0;
          v25 = 0;
          sub_D0048(35, 107, 107, (int)"crypto/pkcs12/p12_mutl.c", 119);
LABEL_15:
          sub_E07F8(v30, 0x40u);
          sub_DCA8C((int)v23);
          return v25;
        }
        v18 = 32;
        v30[0] = v31[16];
        v30[1] = v31[17];
        v30[2] = v31[18];
        v30[3] = v31[19];
        v30[4] = v31[20];
        v30[5] = v31[21];
        v30[6] = v31[22];
        v30[7] = v31[23];
        sub_E07F8(v31, 0x60u);
      }
      v22 = sub_DCB64();
      v23 = (_DWORD *)v22;
      if ( v22 )
      {
        v24 = sub_DC8C4(v22, v30, v18, v17, 0);
        if ( v24
          && (v24 = sub_DCA18(
                      v23,
                      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 8),
                      **(_DWORD **)(*(_DWORD *)(a1 + 8) + 20))) != 0 )
        {
          v25 = sub_DCA28((int)v23, a4, a5);
        }
        else
        {
          v25 = v24;
        }
      }
      else
      {
        v25 = 0;
      }
      goto LABEL_15;
    }
    sub_D0048(35, 107, 118, (int)"crypto/pkcs12/p12_mutl.c", 105);
    return 0;
  }
  else
  {
    sub_D0048(35, 107, 121, (int)"crypto/pkcs12/p12_mutl.c", 92);
    return 0;
  }
}
