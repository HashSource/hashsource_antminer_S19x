int __fastcall ossl_statem_server_post_work(_DWORD *a1)
{
  int v1; // r3
  int *v4; // r0
  int *v5; // r3
  int *v6; // r6
  int v7; // r3
  _BOOL4 v8; // r2
  int *v9; // r1
  int v10; // r3
  int v11; // r2
  _BOOL4 v12; // r1
  int *v13; // r2
  int v14; // r1
  int v15; // r2
  _BOOL4 v16; // r0
  int *v17; // r2
  int v18; // r0
  _BOOL4 v19; // r5
  char v21[4]; // [sp+Ch] [bp-4h] BYREF

  v1 = a1[16];
  a1[29] = 0;
  switch ( v1 )
  {
    case 19:
      if ( !sub_95E50((int)a1) )
        return 3;
      if ( sub_A915C(a1) )
        return 2;
      return 0;
    case 21:
      if ( !sub_95E50((int)a1) )
        return 3;
      if ( *a1 != 256 && !sub_A915C(a1) )
        return 0;
      a1[320] = 1;
      return 2;
    case 22:
      v17 = (int *)a1[1];
      v10 = v17[25];
      v9 = v17;
      if ( (*(_DWORD *)(v10 + 48) & 8) != 0 )
        return 2;
      v18 = *v17;
      v19 = *v17 != 0x10000;
      if ( *v17 < 772 )
        v19 = 0;
      if ( v19 && a1[275] == 1 )
      {
        if ( (a1[315] & 0x100000) != 0 )
          return 2;
LABEL_5:
        if ( sub_95E50((int)a1) )
          return 2;
        return 3;
      }
      if ( v18 == 0x10000 || v18 < 772 )
        return 2;
      if ( (a1[315] & 0x100000) == 0 )
      {
        if ( a1[275] != 1 )
          goto LABEL_18;
LABEL_56:
        if ( sub_95E50((int)a1) )
          return 2;
        return 3;
      }
      if ( a1[275] != 2 )
        return 2;
      v9 = v17;
      v10 = v17[25];
LABEL_18:
      v11 = *v9;
      v12 = *v9 >= 772;
      if ( v11 == 0x10000 )
        v12 = 0;
      if ( !v12 )
      {
LABEL_52:
        if ( !(*(int (__fastcall **)(_DWORD *, int))(v10 + 16))(a1, 34) )
          return 0;
        if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
        {
          sub_7D31C(a1, 2);
          return 2;
        }
        return 2;
      }
      if ( !(*(int (__fastcall **)(_DWORD *))(v10 + 8))(a1)
        || !(*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 162)
        || a1[363] != 2 && !(*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 161) )
      {
        return 0;
      }
      a1[25] = 1;
      return 2;
    case 25:
      if ( a1[381] != 3 )
        return 2;
      goto LABEL_5;
    case 26:
      goto LABEL_5;
    case 33:
      v4 = _errno_location();
      v5 = (int *)a1[1];
      *v4 = 0;
      v6 = v4;
      if ( (*(_DWORD *)(v5[25] + 48) & 8) != 0 )
        return 2;
      v7 = *v5;
      v8 = v7 >= 772;
      if ( v7 == 0x10000 )
        v8 = 0;
      if ( !v8 || sub_95E50((int)a1) )
        return 2;
      if ( sub_8ACDC(a1, 0) != 5 || *v6 != 32 && *v6 != 104 )
        return 3;
      a1[5] = 1;
      return 2;
    case 35:
      if ( a1[275] == 1 )
        goto LABEL_56;
      v9 = (int *)a1[1];
      v10 = v9[25];
      if ( (*(_DWORD *)(v10 + 48) & 8) == 0 )
        goto LABEL_18;
      goto LABEL_52;
    case 36:
      if ( !sub_95E50((int)a1) )
        return 3;
      v13 = (int *)a1[1];
      v14 = v13[25];
      if ( (*(_DWORD *)(v14 + 48) & 8) == 0 )
      {
        v15 = *v13;
        v16 = v15 >= 772;
        if ( v15 == 0x10000 )
          v16 = 0;
        if ( v16
          && (!(*(int (__fastcall **)(_DWORD *, _DWORD *, _DWORD *, _DWORD, char *))(v14 + 12))(
                 a1,
                 a1 + 83,
                 a1 + 67,
                 0,
                 v21)
           || !(*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 290)) )
        {
          return 0;
        }
      }
      return 2;
    case 42:
      if ( !sub_95E50((int)a1) )
        return 3;
      if ( !sub_A60C8(a1, 1) )
        return 0;
      return 2;
    default:
      return 2;
  }
}
