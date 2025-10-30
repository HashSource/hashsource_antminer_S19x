int __fastcall sub_A6AD4(_DWORD *a1)
{
  int v2; // r7
  int (__fastcall *v3)(_DWORD *, _DWORD); // r3
  int v4; // r0
  const char *v5; // r6
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int v9; // r9
  int v10; // r0
  int v11; // r5
  int v12; // r0
  size_t v13; // r5
  int v14; // r0
  const void *v15; // r10
  int v16; // r4
  size_t v17; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0

  if ( !sub_10AC38(a1[395], a1[392]) || (v2 = sub_10A718(a1[396], a1[395], a1[392])) == 0 )
  {
    v2 = 0;
    goto LABEL_14;
  }
  v3 = (int (__fastcall *)(_DWORD *, _DWORD))a1[390];
  if ( !v3 )
  {
LABEL_14:
    sub_95494(a1, 80, 595, 68, (int)"ssl/tls_srp.c", 294);
LABEL_15:
    v16 = -1;
    sub_B87C8(0);
    sub_B87C8(0);
    goto LABEL_12;
  }
  v4 = v3(a1, a1[387]);
  v5 = (const char *)v4;
  if ( !v4 )
  {
    sub_95494(a1, 80, 595, 234, (int)"ssl/tls_srp.c", 302);
    goto LABEL_15;
  }
  v6 = sub_10A95C(a1[394], a1[391], v4);
  v7 = v6;
  if ( v6 && (v8 = sub_10AAF8(a1[392], a1[395], a1[393], v6, a1[397], v2), (v9 = v8) != 0) )
  {
    v10 = sub_B85BC(v8);
    v11 = v10 + 14;
    v12 = v10 + 7;
    if ( v12 >= 0 )
      v11 = v12;
    v13 = v11 >> 3;
    v14 = CRYPTO_malloc(v13, "ssl/tls_srp.c", 315);
    v15 = (const void *)v14;
    if ( v14 )
    {
      sub_B8648(v9, v14);
      v16 = sub_82DD8(a1, v15, v13, 1);
    }
    else
    {
      v20 = a1;
      v16 = -1;
      sub_95494(v20, 80, 595, 65, (int)"ssl/tls_srp.c", 317);
    }
  }
  else
  {
    v19 = a1;
    v16 = -1;
    sub_95494(v19, 80, 595, 68, (int)"ssl/tls_srp.c", 310);
    v9 = 0;
  }
  sub_B87C8(v9);
  sub_B87C8(v7);
  v17 = strlen(v5);
  sub_E0758((int)v5, v17, (size_t)"ssl/tls_srp.c");
LABEL_12:
  sub_B87C8(v2);
  return v16;
}
