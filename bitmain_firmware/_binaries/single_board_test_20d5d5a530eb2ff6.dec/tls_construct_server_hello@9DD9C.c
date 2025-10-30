int __fastcall tls_construct_server_hello(int *a1, int a2)
{
  int *v2; // r3
  int v5; // r3
  _BOOL4 v6; // r2
  int v7; // r5
  int v8; // r3
  int result; // r0
  __int64 v10; // r2
  int v11; // r1
  unsigned int v12; // r2
  int *v13; // r1
  int *v14; // r3
  int v15; // r5
  int v16; // r2
  int *v17; // r3
  int v18; // r3
  _BOOL4 v19; // r2
  _BYTE v20[8]; // [sp+Ch] [bp-8h] BYREF

  v2 = (int *)a1[1];
  if ( (*(_DWORD *)(v2[25] + 48) & 8) != 0 )
    goto LABEL_9;
  v5 = *v2;
  v6 = v5 != 0x10000;
  if ( v5 < 772 )
    v6 = 0;
  if ( !v6 )
  {
LABEL_9:
    v7 = a1[275];
    if ( v7 == 1 )
    {
      v10 = 771;
    }
    else
    {
      v7 = 0;
      v10 = *a1;
    }
    if ( !sub_A8450(a2, 2, v10, HIDWORD(v10), 2) )
      goto LABEL_6;
  }
  else
  {
    v7 = 1;
    if ( !sub_A8450(a2, 2, 771, 0, 2) )
    {
LABEL_6:
      v8 = 2384;
LABEL_7:
      sub_95494(a1, 80, 491, 68, (int)"ssl/statem/statem_srvr.c", v8);
      return 0;
    }
  }
  if ( !sub_A851C(a2) )
    goto LABEL_6;
  v11 = a1[285];
  if ( !*(_DWORD *)(v11 + 408) && ((*(_DWORD *)(a1[308] + 36) & 2) != 0 || a1[35]) )
  {
    if ( !v7 )
    {
      v12 = *(_DWORD *)(v11 + 328);
      v13 = (int *)(v11 + 332);
      if ( v12 <= 0x20 )
        goto LABEL_22;
LABEL_18:
      v8 = 2421;
      goto LABEL_7;
    }
LABEL_27:
    v12 = a1[298];
    v13 = a1 + 290;
    if ( v12 <= 0x20 )
    {
      v15 = 0;
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  *(_DWORD *)(v11 + 328) = 0;
  if ( v7 )
    goto LABEL_27;
  v12 = 0;
  v13 = (int *)(v11 + 332);
LABEL_22:
  v14 = *(int **)(a1[31] + 576);
  v15 = (int)v14;
  if ( v14 )
    v15 = *v14;
LABEL_24:
  if ( !sub_A8544(a2, v13, v12, 1)
    || !(*(int (__fastcall **)(_DWORD, int, _BYTE *))(a1[1] + 80))(*(_DWORD *)(a1[31] + 528), a2, v20)
    || !sub_A8450(a2, 1, v15, v15 >> 31, 1) )
  {
    v8 = 2439;
    goto LABEL_7;
  }
  if ( a1[275] == 1 )
  {
    v16 = 2048;
  }
  else
  {
    v17 = (int *)a1[1];
    if ( (*(_DWORD *)(v17[25] + 48) & 8) != 0 )
    {
      v16 = 256;
    }
    else
    {
      v18 = *v17;
      v19 = v18 != 0x10000;
      if ( v18 < 772 )
        v19 = 0;
      if ( v19 )
        v16 = 512;
      else
        v16 = 256;
    }
  }
  result = sub_8F72C(a1, a2, v16, 0, 0);
  if ( result )
  {
    if ( a1[275] == 1 )
    {
      sub_8D6A4(a1[285]);
      a1[285] = 0;
      a1[35] = 0;
      return sub_9D664((int)a1, 0, 0, 0, 0);
    }
    else
    {
      return (a1[299] & 1) != 0 || sub_A9244(a1, 0) != 0;
    }
  }
  return result;
}
