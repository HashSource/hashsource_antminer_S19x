int __fastcall sub_C7170(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r7
  _DWORD *v5; // r5
  int v6; // r4
  _DWORD *v7; // r12
  int v8; // r6
  int v9; // r5
  bool v10; // zf
  _DWORD *v12; // t1
  _DWORD *v13; // r5
  _DWORD *v14; // t1

  v4 = *a1;
  if ( !*(_DWORD *)(*a1 + 120) )
  {
    sub_D0048(16, 136, 66, "crypto/ec/ec_lib.c", 985);
    return 0;
  }
  if ( a2 )
  {
    v5 = (_DWORD *)*a3;
    if ( v4 != *(_DWORD *)*a3 )
    {
LABEL_8:
      sub_D0048(16, 136, 101, "crypto/ec/ec_lib.c", 990);
      return 0;
    }
    v6 = a1[4];
    v7 = a3;
    v8 = 0;
    if ( v6 )
    {
      do
      {
        v9 = v5[1];
        v10 = v9 == 0;
        if ( v9 )
          v10 = v9 == v6;
        if ( !v10 )
          break;
        if ( a2 == ++v8 )
          return (*(int (__fastcall **)(_DWORD *, int, _DWORD *, int))(*a1 + 120))(a1, a2, a3, a4);
        v12 = (_DWORD *)v7[1];
        ++v7;
        v5 = v12;
      }
      while ( v4 == *v12 );
      goto LABEL_8;
    }
    v13 = a3;
    while ( a2 != ++v6 )
    {
      v14 = (_DWORD *)v13[1];
      ++v13;
      if ( v4 != *v14 )
        goto LABEL_8;
    }
  }
  return (*(int (__fastcall **)(_DWORD *, int, _DWORD *, int))(*a1 + 120))(a1, a2, a3, a4);
}
