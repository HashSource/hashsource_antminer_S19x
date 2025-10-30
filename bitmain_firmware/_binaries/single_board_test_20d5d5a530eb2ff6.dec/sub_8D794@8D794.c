_DWORD *__fastcall sub_8D794(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  void *v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v24; // r0
  int v25; // r0

  v4 = (_DWORD *)CRYPTO_malloc(516, "ssl/ssl_sess.c", 110);
  v5 = v4;
  if ( !v4 )
    goto LABEL_27;
  v6 = memcpy(v4, a1, 0x204u);
  v5[100] = 0;
  v5[101] = 0;
  v5[115] = 0;
  v5[116] = 0;
  v5[121] = 0;
  v5[124] = 0;
  v5[104] = 0;
  v5[103] = 0;
  v5[125] = 0;
  v5[112] = 0;
  v5[113] = 0;
  v5[114] = 0;
  __dmb(0xBu);
  v5[106] = 1;
  __dmb(0xBu);
  v7 = sub_10C510(v6);
  v5[128] = v7;
  if ( !v7 || !sub_DBE44(2, v5, v5 + 112) )
    goto LABEL_27;
  v8 = a1[103];
  if ( v8 )
  {
    if ( !sub_10FD18(v8) )
      goto LABEL_27;
    v5[103] = a1[103];
  }
  v9 = a1[104];
  if ( v9 )
  {
    v10 = sub_10EBC4(v9);
    v5[104] = v10;
    if ( !v10 )
      goto LABEL_27;
  }
  v11 = a1[100];
  if ( v11 )
  {
    v12 = sub_E9E3C(v11, "ssl/ssl_sess.c", 161);
    v5[100] = v12;
    if ( !v12 )
      goto LABEL_27;
  }
  v13 = a1[101];
  if ( v13 )
  {
    v14 = sub_E9E3C(v13, "ssl/ssl_sess.c", 167);
    v5[101] = v14;
    if ( !v14 )
      goto LABEL_27;
  }
  if ( !sub_DC054(2, v5 + 112, a1 + 112) )
    goto LABEL_27;
  v15 = a1[115];
  if ( v15 )
  {
    v16 = sub_E9E3C(v15, "ssl/ssl_sess.c", 180);
    v5[115] = v16;
    if ( !v16 )
      goto LABEL_27;
  }
  if ( a2 && (v24 = a1[116]) != 0 )
  {
    v25 = sub_E9E68(v24, a1[117], "ssl/ssl_sess.c", 188);
    v5[116] = v25;
    if ( !v25 )
      goto LABEL_27;
  }
  else
  {
    v5[118] = 0;
    v5[117] = 0;
  }
  v17 = a1[121];
  if ( !v17 || (v18 = sub_E9E68(v17, a1[122], "ssl/ssl_sess.c", 198), (v5[121] = v18) != 0) )
  {
    v19 = a1[124];
    if ( !v19 || (v20 = sub_E9E3C(v19, "ssl/ssl_sess.c", 205), (v5[124] = v20) != 0) )
    {
      v21 = a1[125];
      if ( !v21 )
        return v5;
      v22 = sub_E9E68(v21, a1[126], "ssl/ssl_sess.c", 214);
      v5[125] = v22;
      if ( v22 )
        return v5;
    }
  }
LABEL_27:
  sub_D0048(20, 348, 65, "ssl/ssl_sess.c", 221);
  sub_8D6A4((int)v5);
  return 0;
}
