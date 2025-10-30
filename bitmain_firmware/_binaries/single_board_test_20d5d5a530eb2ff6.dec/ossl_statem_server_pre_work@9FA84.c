int __fastcall ossl_statem_server_pre_work(_DWORD *a1, int a2)
{
  int *v3; // r3
  int v4; // r2
  int v5; // r3
  _BOOL4 v6; // r1
  int result; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int *v11; // r3
  int v12; // r3
  _BOOL4 v13; // r2
  int v14; // r1
  int v15; // r3

  switch ( a1[16] )
  {
    case 1:
      goto LABEL_10;
    case 0x13:
      v9 = a1[1];
      a1[10] = 0;
      if ( (*(_DWORD *)(*(_DWORD *)(v9 + 100) + 48) & 8) == 0 )
        return 2;
      sub_A6F14();
      return 2;
    case 0x15:
      v10 = a1[1];
      a1[10] = 0;
      if ( (*(_DWORD *)(*(_DWORD *)(v10 + 100) + 48) & 8) == 0 )
        return 2;
      sub_A6F14();
      a1[23] = 0;
      return 2;
    case 0x16:
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
        return 2;
      a1[23] = 1;
      return 2;
    case 0x21:
      v11 = (int *)a1[1];
      if ( (*(_DWORD *)(v11[25] + 48) & 8) != 0 )
        goto LABEL_30;
      v12 = *v11;
      v13 = v12 != 0x10000;
      if ( v12 < 772 )
        v13 = 0;
      if ( v13 )
      {
        v8 = a1[988];
        if ( !v8 )
          return sub_9C244(a1, a2, v8, v8);
      }
      return 2;
    case 0x23:
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
      v14 = a1[285];
      v15 = *(_DWORD *)(v14 + 440);
      if ( v15 )
      {
        if ( v15 != *(_DWORD *)(a1[31] + 528) )
        {
          sub_95494(a1, 80, 640, 68, (int)"ssl/statem/statem_srvr.c", 752);
          return 0;
        }
      }
      else
      {
        *(_DWORD *)(v14 + 440) = *(_DWORD *)(a1[31] + 528);
      }
      result = (*(int (__fastcall **)(_DWORD *))(v4 + 8))(a1);
      if ( result )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
        {
LABEL_30:
          a1[23] = 0;
          return 2;
        }
        else
        {
          return 2;
        }
      }
      return result;
    case 0x2E:
      if ( a1[26] != 9 && (*(_DWORD *)a1[31] & 0x800) == 0 )
        return 2;
LABEL_10:
      v8 = 1;
      return sub_9C244(a1, a2, v8, v8);
    default:
      return 2;
  }
}
