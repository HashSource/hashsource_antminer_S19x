int __fastcall ossl_statem_server_read_transition(_DWORD *a1, int a2)
{
  int *v3; // r0
  int v4; // r2
  int v5; // r0
  _BOOL4 v6; // r4
  int v7; // r0
  _BOOL4 v9; // r0
  _BOOL4 v10; // r1
  int v11; // r5

  v3 = (int *)a1[1];
  v4 = *(_DWORD *)(v3[25] + 48) & 8;
  if ( v4 )
  {
    switch ( a1[16] )
    {
      case 0:
      case 1:
      case 0x15:
LABEL_25:
        if ( a2 != 1 )
          goto LABEL_17;
        a1[16] = 20;
        return 1;
      case 0x1A:
LABEL_13:
        if ( a2 == 16 )
        {
          if ( !*(_DWORD *)(a1[31] + 580) )
            goto LABEL_29;
          if ( *a1 != 768 )
            break;
          if ( (a1[299] & 3) != 3 )
            goto LABEL_29;
          sub_95494(a1, 40, 418, 199, (int)"ssl/statem/statem_srvr.c", 200);
          return 0;
        }
        else
        {
          v9 = *(_DWORD *)(a1[31] + 580) != 0;
          if ( a2 != 11 )
            v9 = 0;
          if ( !v9 )
            goto LABEL_17;
          a1[16] = 27;
          return 1;
        }
      case 0x1B:
LABEL_28:
        if ( a2 != 16 )
          goto LABEL_17;
LABEL_29:
        a1[16] = 28;
        return 1;
      case 0x1C:
LABEL_8:
        if ( !*(_DWORD *)(a1[285] + 412) || a1[22] )
          goto LABEL_10;
        if ( a2 != 15 )
          goto LABEL_17;
        a1[16] = 29;
        return 1;
      case 0x1D:
      case 0x24:
LABEL_10:
        if ( a2 != 257 )
          break;
        a1[16] = 31;
        return 1;
      case 0x1E:
        goto LABEL_22;
      case 0x1F:
LABEL_21:
        if ( *(_DWORD *)(a1[31] + 828) )
        {
          if ( a2 == 67 )
          {
            a1[16] = 30;
            return 1;
          }
        }
        else
        {
LABEL_22:
          if ( a2 == 20 )
          {
            a1[16] = 32;
            return 1;
          }
        }
LABEL_17:
        v10 = a2 == 257;
        if ( !v4 )
          v10 = 0;
        if ( v10 )
        {
          a1[29] = 0;
          a1[5] = 3;
          v11 = sub_882E0((int)a1);
          sub_B66FC(v11, 15);
          sub_B6710(v11, 9);
          return 0;
        }
        break;
      default:
        goto LABEL_17;
    }
  }
  else
  {
    v5 = *v3;
    v6 = v5 != 0x10000;
    if ( v5 < 772 )
      v6 = 0;
    v7 = a1[16];
    if ( !v6 )
    {
      switch ( v7 )
      {
        case 0:
        case 1:
        case 21:
          goto LABEL_25;
        case 26:
          goto LABEL_13;
        case 27:
          goto LABEL_28;
        case 28:
          goto LABEL_8;
        case 29:
        case 36:
          goto LABEL_10;
        case 30:
          goto LABEL_22;
        case 31:
          goto LABEL_21;
        default:
          goto LABEL_12;
      }
    }
    switch ( v7 )
    {
      case 1:
        if ( a1[26] == 11 )
          break;
        if ( a2 != 11 )
        {
          if ( a2 != 24 )
            break;
          a1[16] = 44;
          return 1;
        }
        if ( a1[381] != 4 )
          break;
        goto LABEL_42;
      case 27:
        if ( !*(_DWORD *)(a1[285] + 412) )
          goto LABEL_36;
        if ( a2 != 15 )
          break;
        a1[16] = 29;
        return 1;
      case 29:
        goto LABEL_36;
      case 36:
      case 49:
        goto LABEL_40;
      case 46:
        if ( a1[275] == 1 )
        {
          if ( a2 == 1 )
          {
            a1[16] = 20;
            return 1;
          }
        }
        else if ( a1[363] == 2 )
        {
          if ( a2 == 5 )
          {
            a1[16] = 49;
            return 1;
          }
        }
        else
        {
LABEL_40:
          if ( !*(_DWORD *)(a1[31] + 580) )
          {
LABEL_36:
            if ( a2 != 20 )
              break;
            a1[16] = 32;
            return 1;
          }
          if ( a2 == 11 )
          {
LABEL_42:
            a1[16] = 27;
            return 1;
          }
        }
        break;
      default:
        goto LABEL_17;
    }
  }
LABEL_12:
  sub_95494(a1, 10, 418, 244, (int)"ssl/statem/statem_srvr.c", 313);
  return 0;
}
