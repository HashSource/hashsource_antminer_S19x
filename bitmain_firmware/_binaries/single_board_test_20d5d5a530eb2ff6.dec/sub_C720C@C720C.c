int __fastcall sub_C720C(int *a1, int *a2, int a3, int a4, _DWORD *a5, int a6, int a7)
{
  int v8; // r7
  int v9; // r2
  int v11; // r8
  int v12; // r0
  bool v13; // zf
  bool v14; // zf
  int v15; // lr
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // lr
  _DWORD *v19; // t1
  int v20; // r8
  int (__fastcall *v21)(int *); // r7
  int v22; // r4
  _DWORD *v23; // r10
  _DWORD *v24; // t1
  int v25; // r0
  bool v26; // zf
  int v27; // r0

  v8 = *a2;
  if ( *a2 != *a1 )
    goto LABEL_2;
  v11 = a1[4];
  if ( v11 )
  {
    v12 = a2[1];
    v13 = v12 == 0;
    if ( v12 )
      v13 = v11 == v12;
    if ( !v13 )
    {
LABEL_2:
      v9 = 1012;
LABEL_3:
      sub_D0048(16, 290, 101, "crypto/ec/ec_lib.c", v9);
      return 0;
    }
  }
  v14 = a3 == 0;
  if ( !a3 )
    v14 = a4 == 0;
  v15 = v14;
  if ( v14 )
    return sub_C6A30((int)a1, a2);
  if ( a4 )
  {
    v16 = (_DWORD *)*a5;
    if ( v8 == *(_DWORD *)*a5 )
    {
      if ( !v11 )
      {
        v17 = 0;
        v18 = a5;
        while ( a4 != ++v17 )
        {
          v19 = (_DWORD *)v18[1];
          ++v18;
          if ( *v19 != v8 )
            goto LABEL_21;
        }
        goto LABEL_22;
      }
      v23 = a5;
      do
      {
        v25 = v16[1];
        v26 = v11 == v25;
        if ( v11 != v25 )
          v26 = v25 == 0;
        if ( !v26 )
          break;
        if ( a4 == ++v15 )
          goto LABEL_22;
        v24 = (_DWORD *)v23[1];
        ++v23;
        v16 = v24;
      }
      while ( v8 == *v24 );
    }
LABEL_21:
    v9 = 1021;
    goto LABEL_3;
  }
LABEL_22:
  v20 = 0;
  if ( !a7 )
  {
    v27 = sub_130B4C();
    if ( !v27 )
    {
      sub_D0048(16, 290, 68, "crypto/ec/ec_lib.c", 1027);
      return 0;
    }
    v8 = *a1;
    v20 = v27;
  }
  v21 = *(int (__fastcall **)(int *))(v8 + 124);
  if ( v21 )
    v22 = v21(a1);
  else
    v22 = sub_C7A8C(a1);
  sub_130B5C(v20);
  return v22;
}
