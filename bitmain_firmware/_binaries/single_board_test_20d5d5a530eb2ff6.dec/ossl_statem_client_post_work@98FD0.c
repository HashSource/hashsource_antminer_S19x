int __fastcall ossl_statem_client_post_work(_DWORD *a1)
{
  int v1; // r3
  int *v3; // r3
  int v4; // r2
  int v5; // r3
  _BOOL4 v6; // r1
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r3
  int *v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r3
  _BOOL4 v15; // r2

  v1 = a1[16];
  a1[29] = 0;
  switch ( v1 )
  {
    case 12:
      if ( a1[26] == 2 && a1[980] )
      {
        if ( (a1[315] & 0x100000) == 0 && !sub_A59F0(a1, 82) )
          return 0;
      }
      else if ( !sub_95E50((int)a1) )
      {
        return 3;
      }
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
        return 2;
      a1[320] = 1;
      return 2;
    case 14:
      if ( sub_98F4C(a1) )
        return 2;
      return 0;
    case 16:
      v3 = (int *)a1[1];
      v4 = v3[25];
      if ( (*(_DWORD *)(v4 + 48) & 8) == 0 )
      {
        v5 = *v3;
        v6 = v5 >= 772;
        if ( v5 == 0x10000 )
          v6 = 0;
        if ( v6 )
          return 2;
      }
      if ( a1[275] == 1 )
        return 2;
      if ( a1[26] == 2 && a1[980] )
      {
        if ( sub_A59F0(a1, 82) )
          return 2;
        return 0;
      }
      v8 = a1[31];
      v9 = a1[285];
      v10 = *(_DWORD **)(v8 + 576);
      *(_DWORD *)(v9 + 440) = *(_DWORD *)(v8 + 528);
      if ( v10 )
        v10 = (_DWORD *)*v10;
      *(_DWORD *)(v9 + 436) = v10;
      if ( !(*(int (__fastcall **)(_DWORD *))(v4 + 8))(a1)
        || !(*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 18) )
      {
        return 0;
      }
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
        return 2;
      sub_7D31C(a1, 2);
      return 2;
    case 18:
      if ( !sub_95E50((int)a1) )
        return 4;
      v11 = (int *)a1[1];
      v12 = *(_DWORD *)(v11[25] + 48);
      v13 = v12 << 28;
      if ( (v12 & 8) == 0 )
      {
        v14 = *v11;
        v15 = v14 >= 772;
        if ( v14 == 0x10000 )
          v15 = 0;
        if ( v15
          && (!sub_9DA74(a1, v13)
           || a1[381] != 4 && !(*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 274)) )
        {
          return 0;
        }
      }
      return 2;
    case 43:
      if ( !sub_95E50((int)a1) )
        return 3;
      if ( sub_A60C8(a1, 1) )
        return 2;
      return 0;
    case 48:
      sub_D7A6C(a1[251]);
      a1[251] = 0;
      return 2;
    default:
      return 2;
  }
}
