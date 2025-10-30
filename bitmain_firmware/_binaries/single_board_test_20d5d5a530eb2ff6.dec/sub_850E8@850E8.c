int __fastcall sub_850E8(int a1, int a2, char a3)
{
  int v6; // r7
  int *v7; // r6
  int v8; // r4
  int v9; // r8
  int v10; // r4
  int v11; // r0
  int v12; // r11
  int v14; // r0
  int v15; // r7
  __int64 v16; // r0
  int v17; // r2
  int v18; // r1
  int v19; // r2
  int v20; // r5
  int v21; // r0
  int v22; // r0
  bool v23; // cc
  int v24; // r1
  int v25; // r4
  int v26; // r1
  int v27; // r2
  int v28; // r0
  int v29; // r1
  int v30; // r0
  int v31; // r0
  int v32; // r0
  __int64 v33; // r0
  int v34; // r2
  int v35; // r0
  int v36; // r0
  int v37; // [sp+8h] [bp-Ch]

  if ( a1 )
    v6 = *(_DWORD *)(a1 + 1028);
  else
    v6 = *(_DWORD *)(a2 + 192);
  v7 = *(int **)v6;
  v8 = **(_DWORD **)v6;
  if ( !v8 )
  {
    v12 = 0;
    v37 = a3 & 4;
    v9 = 0;
    sub_D0048(20, 332, 179, "ssl/ssl_cert.c", 768);
    goto LABEL_11;
  }
  v37 = a3 & 4;
  if ( (a3 & 4) != 0 )
  {
    v25 = 0;
    v9 = sub_10F040();
    if ( !v9 )
      goto LABEL_29;
    while ( 1 )
    {
      v23 = v25 < sub_10C010(v7[2], v26, v27);
      v29 = v25++;
      if ( !v23 )
        break;
      v28 = sub_10C01C(v7[2], v29);
      if ( !sub_10F74C(v9, v28) )
        goto LABEL_29;
    }
    v10 = 0;
    if ( !sub_10F74C(v9, *v7) )
    {
LABEL_29:
      v8 = 0;
      v12 = 0;
      sub_10F0FC(v9);
      goto LABEL_12;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 232);
    if ( !v9 )
    {
      if ( a1 )
        v9 = *(_DWORD *)(*(_DWORD *)(a1 + 1232) + 16);
      else
        v9 = *(_DWORD *)(a2 + 16);
    }
    v10 = a3 & 1;
    if ( (a3 & 1) != 0 )
      v10 = v7[2];
  }
  v11 = sub_112CD8();
  v12 = v11;
  if ( !v11 )
  {
    v8 = 0;
    sub_D0048(20, 332, 65, "ssl/ssl_cert.c", 798);
    goto LABEL_11;
  }
  v8 = sub_112DA0(v11, v9, *v7, v10);
  if ( !v8 )
  {
    sub_D0048(20, 332, 11, "ssl/ssl_cert.c", 802);
    goto LABEL_11;
  }
  sub_113008(v12, *(_DWORD *)(v6 + 16) & 0x30000);
  v14 = sub_112694(v12);
  if ( v14 <= 0 )
  {
    v8 = a3 & 8;
    if ( (a3 & 8) != 0 )
    {
      if ( (a3 & 0x10) != 0 )
        sub_D00F0(v14);
      v8 = 2;
      goto LABEL_16;
    }
    sub_D0048(20, 332, 134, "ssl/ssl_cert.c", 819);
    v35 = sub_112BA0(v12);
    v36 = sub_10FE78(v35);
    sub_D1240(2, "Verify error:", v36);
LABEL_11:
    if ( !v37 )
      goto LABEL_12;
LABEL_23:
    sub_10F0FC(v9);
    goto LABEL_12;
  }
  v8 = 0;
LABEL_16:
  v15 = sub_112BBC(v12);
  v16 = sub_10BD54();
  X509_free(v16, HIDWORD(v16), v17);
  if ( (a3 & 2) != 0 && sub_10C010(v15, v18, v19) > 0 )
  {
    v30 = sub_10C010(v15, v18, v19);
    v31 = sub_10C01C(v15, v30 - 1);
    v32 = sub_120D7C(v31);
    v19 = v32 << 18;
    if ( (v32 & 0x2000) != 0 )
    {
      v33 = sub_10BD80(v15);
      X509_free(v33, HIDWORD(v33), v34);
    }
  }
  v20 = 0;
  while ( 1 )
  {
    v23 = v20 < sub_10C010(v15, v18, v19);
    v24 = v20++;
    if ( !v23 )
      break;
    v21 = sub_10C01C(v15, v24);
    v22 = sub_A4D60(a1, a2, v21, 0, 0);
    v8 = v22;
    if ( v22 != 1 )
    {
      v8 = 0;
      sub_D0048(20, 332, v22, "ssl/ssl_cert.c", 847);
      sub_10BFDC(v15, X509_free);
      goto LABEL_11;
    }
  }
  sub_10BFDC(v7[2], X509_free);
  v7[2] = v15;
  if ( !v8 )
    v8 = 1;
  if ( v37 )
    goto LABEL_23;
LABEL_12:
  sub_112D7C(v12);
  return v8;
}
