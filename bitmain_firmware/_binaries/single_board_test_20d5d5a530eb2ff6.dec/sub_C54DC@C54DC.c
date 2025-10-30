_DWORD *__fastcall sub_C54DC(_DWORD *a1, int *a2)
{
  bool v2; // zf
  void (*v5)(void); // r3
  int v6; // r3
  void (__fastcall *v7)(_DWORD *); // r3
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int (__fastcall *v14)(_DWORD *, int *); // r3
  int v15; // r6
  int v16; // r5
  int v17; // r3
  int v18; // r3
  int v19; // r0
  int (__fastcall *v20)(_DWORD *, int *); // r3

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( !v2 )
  {
    if ( *a2 != *a1 )
    {
      v5 = *(void (**)(void))(*a1 + 12);
      if ( v5 )
        v5();
      v6 = a1[3];
      if ( v6 )
      {
        v7 = *(void (__fastcall **)(_DWORD *))(*(_DWORD *)v6 + 192);
        if ( v7 )
          v7(a1);
      }
      if ( !sub_CDDF8(a1[1]) )
        return 0;
      a1[1] = 0;
    }
    v8 = a2[3];
    if ( v8 )
    {
      v9 = sub_C620C(v8, a2);
      sub_C64B8(a1[3]);
      v10 = sub_C6130(v9);
      a1[3] = v10;
      if ( !v10 )
        return 0;
      if ( !sub_C6610(v10, a2[3]) )
        return 0;
      if ( a2[4] )
      {
        sub_C6490(a1[4]);
        v11 = sub_C63F4(a2[3]);
        a1[4] = v11;
        if ( !v11 || !sub_C6594(v11, a2[4]) )
          return 0;
      }
      v12 = a2[5];
      if ( v12 )
      {
        v13 = a1[5];
        if ( !v13 )
        {
          v13 = sub_B822C();
          a1[5] = v13;
          if ( !v13 )
            return 0;
          v12 = a2[5];
        }
        if ( !sub_B89E4(v13, v12) )
          return 0;
        v14 = *(int (__fastcall **)(_DWORD *, int *))(*(_DWORD *)a2[3] + 188);
        if ( v14 )
        {
          if ( !v14(a1, a2) )
            return 0;
        }
      }
    }
    v15 = a2[7];
    v16 = a2[2];
    v17 = a2[9];
    a1[6] = a2[6];
    a1[7] = v15;
    a1[2] = v16;
    a1[9] = v17;
    if ( sub_DC054(8, a1 + 10, a2 + 10) )
    {
      v18 = *a2;
      if ( *a2 == *a1 )
      {
LABEL_29:
        v20 = *(int (__fastcall **)(_DWORD *, int *))(v18 + 16);
        if ( !v20 || v20(a1, a2) )
          return a1;
        return 0;
      }
      v19 = a2[1];
      if ( !v19 )
      {
LABEL_28:
        *a1 = v18;
        v18 = *a2;
        a1[1] = v19;
        goto LABEL_29;
      }
      if ( sub_CDD6C(v19) )
      {
        v19 = a2[1];
        v18 = *a2;
        goto LABEL_28;
      }
    }
    return 0;
  }
  sub_D0048(16, 178, 67, "crypto/ec/ec_key.c", 77);
  return 0;
}
