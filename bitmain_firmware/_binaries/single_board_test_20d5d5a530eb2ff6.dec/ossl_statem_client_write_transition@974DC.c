int __fastcall ossl_statem_client_write_transition(_DWORD *a1)
{
  int *v1; // r2
  int v3; // r3
  int v4; // r2
  _BOOL4 v5; // r1
  int result; // r0
  int *v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r3

  v1 = (int *)a1[1];
  v3 = *(_DWORD *)(v1[25] + 48) & 8;
  if ( v3 )
    goto LABEL_5;
  v4 = *v1;
  v5 = v4 != 0x10000;
  if ( v4 < 772 )
    v5 = 0;
  if ( v5 )
  {
    switch ( a1[16] )
    {
      case 1:
        if ( a1[380] == -1 )
          return 2;
        a1[16] = 43;
        return 1;
      case 7:
        if ( a1[381] == 4 )
        {
LABEL_37:
          a1[16] = 13;
          result = 1;
        }
        else if ( (a1[10] & 1) != 0 )
        {
LABEL_20:
          a1[16] = 1;
          result = 1;
        }
        else
        {
          sub_95494(a1, 80, 598, 68, (int)"ssl/statem/statem_clnt.c", 434);
          result = 0;
        }
        break;
      case 9:
      case 0x12:
      case 0x2B:
      case 0x2D:
        goto LABEL_20;
      case 0xB:
        if ( (a1[26] & 0xFFFFFFFB) == 3 )
        {
          a1[16] = 47;
          result = 1;
        }
        else if ( (a1[315] & 0x100000) == 0 || a1[275] )
        {
LABEL_40:
          result = 1;
          if ( *(_DWORD *)(a1[31] + 536) )
            v11 = 13;
          else
            v11 = 18;
          a1[16] = v11;
        }
        else
        {
LABEL_15:
          a1[16] = 16;
          result = 1;
        }
        break;
      case 0xD:
        v12 = a1[31];
        result = 1;
        if ( *(_DWORD *)(v12 + 536) == 1 )
          v13 = 15;
        else
          v13 = 18;
        a1[16] = v13;
        return result;
      case 0xF:
        goto LABEL_16;
      case 0x10:
      case 0x30:
        goto LABEL_40;
      case 0x2F:
        if ( a1[363] != 2 )
          goto LABEL_40;
        a1[16] = 48;
        result = 1;
        break;
      default:
        sub_95494(a1, 80, 598, 68, (int)"ssl/statem/statem_clnt.c", 418);
        return 0;
    }
  }
  else
  {
LABEL_5:
    switch ( a1[16] )
    {
      case 0:
      case 2:
        goto LABEL_9;
      case 1:
        if ( !a1[379] )
          return 2;
        goto LABEL_9;
      case 3:
        if ( (a1[315] & 0x100000) != 0 && a1[26] != 7 )
          goto LABEL_15;
        goto LABEL_9;
      case 8:
        if ( *(_DWORD *)(a1[31] + 536) )
          goto LABEL_37;
        goto LABEL_18;
      case 0xB:
        if ( !a1[35] )
          goto LABEL_20;
        goto LABEL_15;
      case 0xC:
        if ( a1[26] != 2 )
          return 2;
        if ( (a1[315] & 0x100000) == 0 )
          goto LABEL_58;
        goto LABEL_15;
      case 0xD:
LABEL_18:
        a1[16] = 14;
        return 1;
      case 0xE:
        v7 = (int *)a1[31];
        v8 = v7[134];
        v9 = *v7;
        if ( v8 == 1 )
          v10 = 15;
        else
          v10 = 16;
        a1[16] = v10;
        if ( (v9 & 0x10) != 0 )
          goto LABEL_15;
        return 1;
      case 0xF:
        goto LABEL_15;
      case 0x10:
        if ( a1[275] == 1 )
          goto LABEL_9;
        if ( a1[26] == 2 )
        {
LABEL_58:
          a1[16] = 46;
          return 1;
        }
        if ( !v3 && *(_DWORD *)(a1[31] + 828) )
        {
          a1[16] = 17;
          return 1;
        }
        break;
      case 0x11:
        break;
      case 0x12:
        if ( a1[35] )
          goto LABEL_20;
        return 2;
      case 0x29:
        if ( !sub_82B40((int)a1, 1) )
          goto LABEL_20;
        result = sub_9D174(a1);
        if ( result )
        {
LABEL_9:
          result = 1;
          a1[16] = 12;
        }
        return result;
      case 0x2E:
        return 2;
      default:
        sub_95494(a1, 80, 599, 68, (int)"ssl/statem/statem_clnt.c", 514);
        return 0;
    }
LABEL_16:
    a1[16] = 18;
    return 1;
  }
  return result;
}
