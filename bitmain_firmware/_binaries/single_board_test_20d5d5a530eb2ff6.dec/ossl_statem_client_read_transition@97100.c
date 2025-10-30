int __fastcall ossl_statem_client_read_transition(int *a1, int a2)
{
  int *v3; // r0
  int v4; // r2
  int v5; // r0
  _BOOL4 v6; // r3
  int result; // r0
  _BOOL4 v8; // r0
  char v9; // r3
  int v10; // r1
  int v11; // r4
  _BOOL4 v12; // r3
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r2
  _BOOL4 v17; // r2
  int v18; // r2
  int v19; // r5
  int v20; // r0
  _BOOL4 v21; // r6
  int v22; // r2

  v3 = (int *)a1[1];
  v4 = *(_DWORD *)(v3[25] + 48) & 8;
  if ( v4 )
  {
    switch ( a1[16] )
    {
      case 1:
LABEL_44:
        if ( a2 )
          goto LABEL_16;
        a1[16] = 41;
        return 1;
      case 3:
LABEL_29:
        if ( a1[35] )
          goto LABEL_30;
        v9 = v4;
        if ( v4 )
          v9 = 1;
        if ( a2 == 3 )
          v16 = v9 & 1;
        else
          v16 = 0;
        if ( v16 )
          goto LABEL_43;
        if ( *a1 > 768 && a1[355] )
        {
          v17 = *(_DWORD *)(a1[285] + 464) != 0;
          if ( a2 != 257 )
            v17 = 0;
          if ( v17 )
          {
            a1[35] = 1;
            a1[16] = 10;
            return 1;
          }
        }
        v18 = *(_DWORD *)(a1[31] + 528);
        v19 = *(_DWORD *)(v18 + 20);
        if ( (v19 & 0x54) == 0 )
        {
          if ( a2 != 11 )
            goto LABEL_18;
          a1[16] = 4;
          return 1;
        }
        v22 = *(_DWORD *)(v18 + 16);
        if ( (v22 & 0x1A6) != 0 )
        {
          if ( a2 != 12 )
            goto LABEL_18;
          goto LABEL_28;
        }
        v21 = a2 == 12;
        if ( (v22 & 0x1C8) == 0 )
          v21 = 0;
        if ( v21 )
          goto LABEL_28;
        if ( a2 != 13 )
        {
          if ( a2 != 14 )
            goto LABEL_18;
          goto LABEL_101;
        }
        if ( *a1 > 768 && (v19 & 4) != 0 || (v19 & 0x50) != 0 )
          goto LABEL_10;
        goto LABEL_51;
      case 4:
LABEL_23:
        v12 = a1[338] != 0;
        if ( a2 != 22 )
          v12 = 0;
        if ( !v12 )
          goto LABEL_26;
        a1[16] = 5;
        return 1;
      case 5:
LABEL_26:
        v13 = *(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 16);
        if ( (v13 & 0x1A6) != 0 )
        {
          if ( a2 != 12 )
            goto LABEL_16;
        }
        else
        {
          v8 = a2 == 12;
          if ( (v13 & 0x1C8) == 0 )
            v8 = 0;
          if ( !v8 )
          {
LABEL_14:
            if ( a2 == 13 )
            {
              v15 = *(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 20);
              if ( *a1 > 768 && (v15 & 4) != 0 || (v15 & 0x50) != 0 )
              {
LABEL_10:
                sub_95494(a1, 10, 417, 244, (int)"ssl/statem/statem_clnt.c", 395);
                return 0;
              }
              else
              {
LABEL_51:
                a1[16] = 7;
                return 1;
              }
            }
            else
            {
LABEL_15:
              if ( a2 != 14 )
                goto LABEL_16;
LABEL_101:
              a1[16] = 8;
              return 1;
            }
          }
        }
LABEL_28:
        a1[16] = 6;
        return 1;
      case 6:
        goto LABEL_14;
      case 7:
        goto LABEL_15;
      case 9:
        goto LABEL_8;
      case 10:
LABEL_33:
        if ( a2 != 20 )
          goto LABEL_16;
        a1[16] = 11;
        return 1;
      case 12:
LABEL_36:
        if ( a2 == 2 )
          goto LABEL_47;
        v9 = v4;
        if ( v4 )
          v9 = 1;
        if ( a2 == 3 )
          v14 = v9 & 1;
        else
          v14 = 0;
        if ( !v14 )
          goto LABEL_18;
LABEL_43:
        a1[16] = 2;
        return 1;
      case 18:
LABEL_30:
        if ( a1[343] )
        {
          if ( a2 != 4 )
            goto LABEL_16;
          a1[16] = 9;
          return 1;
        }
        else
        {
LABEL_8:
          if ( a2 != 257 )
            goto LABEL_10;
          a1[16] = 10;
          return 1;
        }
      case 46:
LABEL_46:
        if ( a2 != 2 )
          goto LABEL_16;
LABEL_47:
        a1[16] = 3;
        return 1;
      default:
        v9 = 1;
        goto LABEL_18;
    }
  }
  v5 = *v3;
  v6 = v5 >= 772;
  if ( v5 == 0x10000 )
    v6 = 0;
  if ( !v6 )
  {
    switch ( a1[16] )
    {
      case 1:
        goto LABEL_44;
      case 3:
        goto LABEL_29;
      case 4:
        goto LABEL_23;
      case 5:
        goto LABEL_26;
      case 6:
        goto LABEL_14;
      case 7:
        goto LABEL_15;
      case 9:
        goto LABEL_8;
      case 10:
        goto LABEL_33;
      case 12:
        goto LABEL_36;
      case 18:
        goto LABEL_30;
      case 46:
        goto LABEL_46;
      default:
        goto LABEL_10;
    }
  }
  switch ( a1[16] )
  {
    case 1:
      if ( a2 == 4 )
      {
        a1[16] = 9;
        return 1;
      }
      if ( a2 == 24 )
      {
        a1[16] = 45;
        return 1;
      }
      if ( a2 == 13 && a1[381] == 1 )
      {
        a1[381] = 4;
        v20 = sub_9DD14(a1);
        a2 = 13;
        if ( v20 )
        {
LABEL_77:
          a1[16] = 7;
          return 1;
        }
        v4 = *(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8;
      }
LABEL_16:
      v9 = v4;
      if ( v4 )
        v9 = 1;
LABEL_18:
      if ( a2 == 257 )
        v10 = v9 & 1;
      else
        v10 = 0;
      if ( !v10 )
        goto LABEL_10;
      a1[5] = 3;
      a1[29] = 0;
      v11 = sub_882E0((int)a1);
      sub_B66FC(v11, 15);
      sub_B6710(v11, 9);
      result = 0;
      break;
    case 3:
      if ( a2 != 8 )
        goto LABEL_16;
      a1[16] = 38;
      return 1;
    case 4:
      if ( a2 != 15 )
        goto LABEL_16;
      a1[16] = 39;
      return 1;
    case 7:
      goto LABEL_72;
    case 12:
      if ( a2 != 2 )
        goto LABEL_16;
      a1[16] = 3;
      return 1;
    case 38:
      if ( a1[35] )
        goto LABEL_68;
      if ( a2 == 13 )
        goto LABEL_77;
LABEL_72:
      if ( a2 != 11 )
        goto LABEL_16;
      a1[16] = 4;
      return 1;
    case 39:
LABEL_68:
      if ( a2 != 20 )
        goto LABEL_16;
      a1[16] = 11;
      return 1;
    default:
      goto LABEL_16;
  }
  return result;
}
