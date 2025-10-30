int __fastcall ossl_statem_server_write_transition(_DWORD *a1)
{
  int *v1; // r3
  int v3; // r3
  _BOOL4 v4; // r2
  int v5; // r3
  int result; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3

  v1 = (int *)a1[1];
  if ( (*(_DWORD *)(v1[25] + 48) & 8) == 0 )
  {
    v3 = *v1;
    v4 = v3 != 0x10000;
    if ( v3 < 772 )
      v4 = 0;
    v5 = a1[16];
    if ( !v4 )
    {
      switch ( v5 )
      {
        case 0:
        case 21:
        case 26:
          goto LABEL_13;
        case 1:
          goto LABEL_32;
        case 19:
          goto LABEL_10;
        case 20:
          goto LABEL_37;
        case 22:
          goto LABEL_29;
        case 23:
          goto LABEL_14;
        case 24:
          goto LABEL_19;
        case 25:
          goto LABEL_21;
        case 32:
          goto LABEL_26;
        case 33:
          goto LABEL_24;
        case 34:
          goto LABEL_15;
        case 35:
          goto LABEL_25;
        case 36:
          goto LABEL_35;
        default:
          goto LABEL_41;
      }
    }
    switch ( v5 )
    {
      case 1:
        if ( a1[380] != -1 )
        {
          a1[16] = 42;
          return 1;
        }
        if ( a1[381] == 3 )
          goto LABEL_20;
        goto LABEL_13;
      case 20:
        goto LABEL_40;
      case 22:
        v9 = a1[275];
        if ( (a1[315] & 0x100000) == 0 )
          goto LABEL_57;
        if ( v9 != 2 )
          goto LABEL_24;
        goto LABEL_58;
      case 23:
        result = 1;
        a1[16] = 40;
        return result;
      case 25:
        if ( a1[381] != 3 )
          goto LABEL_31;
        a1[381] = 4;
        a1[16] = 1;
        return 1;
      case 32:
        if ( a1[381] == 4 )
        {
          a1[381] = 2;
        }
        else if ( !a1[343] )
        {
          goto LABEL_10;
        }
        if ( a1[987] > a1[988] )
          goto LABEL_28;
        goto LABEL_10;
      case 33:
        if ( a1[35] || a1[987] <= a1[988] )
          goto LABEL_10;
        goto LABEL_49;
      case 35:
        v9 = a1[275];
LABEL_57:
        if ( v9 == 1 )
          goto LABEL_50;
LABEL_58:
        a1[16] = 37;
        return 1;
      case 36:
LABEL_50:
        a1[16] = 46;
        return 1;
      case 37:
        if ( a1[35] )
          goto LABEL_25;
        if ( !sub_9F6C8(a1) )
          goto LABEL_31;
        goto LABEL_20;
      case 40:
        goto LABEL_25;
      case 42:
      case 44:
        goto LABEL_10;
      case 46:
        goto LABEL_13;
      default:
        sub_95494(a1, 80, 600, 68, (int)"ssl/statem/statem_srvr.c", 427);
        return 0;
    }
  }
  switch ( a1[16] )
  {
    case 0:
    case 0x15:
    case 0x1A:
      goto LABEL_13;
    case 1:
LABEL_32:
      if ( a1[17] == 19 )
      {
        a1[16] = 19;
        a1[17] = 0;
LABEL_49:
        result = 1;
      }
      else
      {
        result = sub_9D174((int)a1);
        if ( result )
LABEL_13:
          result = 2;
      }
      break;
    case 0x13:
      goto LABEL_10;
    case 0x14:
      if ( *(_DWORD *)(a1[32] + 260) || (sub_8B860((int)a1) & 0x2000) == 0 )
      {
LABEL_37:
        if ( !a1[379] && (v10 = a1[31], *(_DWORD *)(v10 + 384)) && *(_DWORD *)(v10 + 516) )
        {
LABEL_10:
          result = 1;
          a1[16] = 1;
        }
        else
        {
LABEL_40:
          a1[16] = 22;
          result = 1;
        }
      }
      else
      {
        a1[16] = 21;
        result = 1;
      }
      break;
    case 0x16:
LABEL_29:
      if ( a1[35] )
        goto LABEL_27;
      v7 = *(_DWORD *)(a1[31] + 528);
      if ( (*(_DWORD *)(v7 + 20) & 0x54) != 0 )
        goto LABEL_16;
LABEL_31:
      a1[16] = 23;
      return 1;
    case 0x17:
LABEL_14:
      if ( !a1[338] )
        goto LABEL_15;
      a1[16] = 34;
      return 1;
    case 0x18:
      goto LABEL_19;
    case 0x19:
      goto LABEL_21;
    case 0x20:
LABEL_26:
      if ( a1[35] )
        goto LABEL_10;
LABEL_27:
      if ( a1[343] )
      {
LABEL_28:
        a1[16] = 33;
        return 1;
      }
      else
      {
LABEL_24:
        a1[16] = 35;
        return 1;
      }
    case 0x21:
      goto LABEL_24;
    case 0x22:
LABEL_15:
      v7 = *(_DWORD *)(a1[31] + 528);
LABEL_16:
      v8 = *(_DWORD *)(v7 + 16);
      if ( (v8 & 6) != 0 || (v8 & 0x48) != 0 && *(_DWORD *)(a1[257] + 260) || (v8 & 0x1A0) != 0 )
      {
        a1[16] = 24;
        return 1;
      }
      else
      {
LABEL_19:
        if ( sub_9F6C8(a1) )
        {
LABEL_20:
          a1[16] = 25;
          return 1;
        }
        else
        {
LABEL_21:
          a1[16] = 26;
          return 1;
        }
      }
    case 0x23:
LABEL_25:
      a1[16] = 36;
      return 1;
    case 0x24:
LABEL_35:
      if ( !a1[35] )
        goto LABEL_10;
      goto LABEL_13;
    default:
LABEL_41:
      sub_95494(a1, 80, 604, 68, (int)"ssl/statem/statem_srvr.c", 558);
      return 0;
  }
  return result;
}
