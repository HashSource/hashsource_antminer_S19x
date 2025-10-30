int __fastcall sub_111734(int a1)
{
  int v1; // r3
  unsigned int v4; // r7
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int (__fastcall *v11)(int); // r3
  int v12; // r0
  int v13; // r3
  int (__fastcall *v14)(int, int *, int); // r3
  int v15; // r11
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int (__fastcall *v19)(_DWORD, int); // r3
  int v20; // r5
  _DWORD *v21; // r11
  _DWORD *v22; // [sp+8h] [bp-3Ch]
  int v23; // [sp+18h] [bp-2Ch]
  unsigned int v24; // [sp+20h] [bp-24h]
  int v25; // [sp+28h] [bp-1Ch] BYREF
  int v26; // [sp+2Ch] [bp-18h] BYREF
  int v27; // [sp+30h] [bp-14h] BYREF
  int v28; // [sp+34h] [bp-10h] BYREF
  int v29; // [sp+38h] [bp-Ch] BYREF
  int v30; // [sp+3Ch] [bp-8h] BYREF

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12);
  if ( (v1 & 4) == 0 )
    return 1;
  if ( (v1 & 8) != 0 )
  {
    v23 = sub_10C010(*(_DWORD *)(a1 + 80)) - 1;
    if ( v23 < 0 )
      return 1;
    goto LABEL_6;
  }
  if ( !*(_DWORD *)(a1 + 120) )
  {
    v23 = 0;
LABEL_6:
    v4 = 0;
LABEL_7:
    while ( 1 )
    {
      *(_DWORD *)(a1 + 92) = v4;
      v5 = *(_DWORD **)(a1 + 80);
      v25 = 0;
      v6 = sub_10C01C(v5, v4);
      v7 = *(_DWORD *)(v6 + 128);
      v8 = v6;
      *(_DWORD *)(a1 + 100) = v6;
      *(_DWORD *)(a1 + 104) = 0;
      v9 = v7 & 0x400;
      *(_DWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 116) = 0;
      if ( !v9 )
        break;
LABEL_25:
      if ( (int)++v4 > v23 )
        return 1;
    }
    v24 = v4;
    while ( 1 )
    {
      v14 = *(int (__fastcall **)(int, int *, int))(a1 + 44);
      if ( v14 )
      {
        v10 = 0;
        if ( !v14(a1, &v25, v8) )
          goto LABEL_24;
        goto LABEL_10;
      }
      v26 = 0;
      v27 = 0;
      v29 = 0;
      v30 = 0;
      v15 = sub_10E65C(v8);
      v22 = *(_DWORD **)(a1 + 12);
      v28 = *(_DWORD *)(a1 + 116);
      if ( sub_11119C((int *)a1, &v29, &v30, &v26, &v27, &v28, v22) )
        goto LABEL_21;
      v21 = (_DWORD *)(*(int (__fastcall **)(int, int))(a1 + 64))(a1, v15);
      if ( v21 )
        break;
      v16 = v29;
      if ( !v29 )
        break;
LABEL_22:
      v17 = v27;
      v25 = v16;
      v18 = v28;
      *(_DWORD *)(a1 + 104) = v26;
      *(_DWORD *)(a1 + 112) = v17;
      *(_DWORD *)(a1 + 116) = v18;
      v10 = v30;
LABEL_10:
      v11 = *(int (__fastcall **)(int))(a1 + 48);
      *(_DWORD *)(a1 + 108) = v25;
      if ( !v11(a1) )
        goto LABEL_27;
      if ( !v10 )
        goto LABEL_15;
      if ( !(*(int (__fastcall **)(int, int))(a1 + 48))(a1, v10)
        || (v12 = (*(int (__fastcall **)(int, int, int))(a1 + 52))(a1, v10, v8)) == 0 )
      {
LABEL_27:
        X509_CRL_free(v25);
        X509_CRL_free(v10);
        *(_DWORD *)(a1 + 108) = 0;
        return 0;
      }
      if ( v12 != 2 )
      {
LABEL_15:
        if ( !(*(int (__fastcall **)(int, int, int))(a1 + 52))(a1, v25, v8) )
          goto LABEL_27;
      }
      X509_CRL_free(v25);
      X509_CRL_free(v10);
      v13 = *(_DWORD *)(a1 + 116);
      v25 = 0;
      if ( v9 == v13 )
      {
LABEL_24:
        v19 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
        *(_DWORD *)(a1 + 96) = 3;
        v4 = v24;
        v20 = v19(0, a1);
        X509_CRL_free(v25);
        X509_CRL_free(0);
        *(_DWORD *)(a1 + 108) = 0;
        if ( v20 )
          goto LABEL_25;
        return 0;
      }
      if ( v13 == 32895 )
      {
        X509_CRL_free(0);
        X509_CRL_free(0);
        v4 = v24 + 1;
        *(_DWORD *)(a1 + 108) = 0;
        if ( (int)(v24 + 1) <= v23 )
          goto LABEL_7;
        return 1;
      }
      v9 = v13;
    }
    sub_11119C((int *)a1, &v29, &v30, &v26, &v27, &v28, v21);
    sub_10BFDC((int)v21, (void (__fastcall *)(int))X509_CRL_free);
LABEL_21:
    v16 = v29;
    if ( !v29 )
      goto LABEL_24;
    goto LABEL_22;
  }
  return 1;
}
