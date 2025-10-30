_DWORD *__fastcall sub_10A95C(_DWORD *a1, const char *a2, const char *a3)
{
  bool v3; // zf
  int v4; // r4
  int *v8; // r6
  int v9; // r0
  int v10; // r0
  void *v11; // r9
  _DWORD *v12; // r0
  _DWORD *v13; // r4
  size_t v15; // r0
  size_t v16; // r0
  _DWORD *v17; // r0
  int v18; // r0
  int v19; // r2
  _BYTE v20[24]; // [sp+4h] [bp-18h] BYREF

  v3 = a3 == 0;
  if ( a3 )
    v3 = a2 == 0;
  v4 = v3;
  if ( !a1 )
    v4 |= 1u;
  if ( v4 )
    return 0;
  v8 = (int *)sub_D14F4();
  if ( !v8 )
    return 0;
  v9 = sub_B85BC(a1);
  if ( v9 + 7 >= 0 )
    v10 = v9 + 7;
  else
    v10 = v9 + 14;
  v11 = CRYPTO_malloc((void *)(v10 >> 3));
  if ( !v11 )
    goto LABEL_15;
  v12 = sub_D93D8();
  if ( !sub_D1520(v8, v12, 0) )
    goto LABEL_15;
  v15 = strlen(a2);
  if ( !sub_D16D8((int)v8, (int)a2, v15) )
    goto LABEL_15;
  if ( !sub_D16D8((int)v8, (int)&word_1B5258, 1) )
    goto LABEL_15;
  v16 = strlen(a3);
  if ( !sub_D16D8((int)v8, (int)a3, v16) )
    goto LABEL_15;
  if ( !sub_D16E4(v8, (int)v20, 0) )
    goto LABEL_15;
  v17 = sub_D93D8();
  if ( !sub_D1520(v8, v17, 0) || sub_B8648(a1, (int)v11) < 0 )
    goto LABEL_15;
  v18 = sub_B85BC(a1);
  v19 = v18 + 7;
  if ( v18 + 7 < 0 )
    v19 = v18 + 14;
  if ( sub_D16D8((int)v8, (int)v11, v19 >> 3) && sub_D16D8((int)v8, (int)v20, 20) && sub_D16E4(v8, (int)v20, 0) )
    v13 = sub_B8AEC(v20, 20, 0);
  else
LABEL_15:
    v13 = 0;
  CRYPTO_free(v11);
  sub_D1504(v8);
  return v13;
}
