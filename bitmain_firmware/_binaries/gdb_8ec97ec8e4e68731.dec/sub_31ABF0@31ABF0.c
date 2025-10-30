int __fastcall sub_31ABF0(_DWORD *a1)
{
  unsigned __int8 *v1; // r12
  int v3; // r3
  int v4; // r3
  int v5; // r0
  int v6; // r3
  unsigned __int8 *v7; // r12
  _DWORD *v8; // r5
  _DWORD *v9; // r0
  int v11; // r2
  int v12; // r1
  _BYTE *v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r2
  int v16; // lr
  int v17; // r3
  int v18; // r1
  int v19; // r6
  int v20; // r3
  int v21; // r0
  unsigned __int8 *v22; // lr
  int v23; // r6
  unsigned __int8 *v24; // r2
  int v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r9
  int v29; // r8
  int v30; // r0

  v1 = (unsigned __int8 *)a1[3];
  v3 = *v1;
  if ( (unsigned int)(v3 - 48) <= 9 )
  {
    v8 = sub_314170((int)a1);
    if ( *(_BYTE *)a1[3] != 66 )
      return (int)v8;
    return sub_314268(a1, (int)v8);
  }
  if ( (unsigned int)(v3 - 97) <= 0x19 )
  {
    if ( v3 == 111 && v1[1] == 110 )
      a1[3] = v1 + 2;
    v9 = sub_31A958(a1);
    v8 = v9;
    if ( v9 )
    {
      if ( *v9 == 49 )
      {
        v11 = v9[2];
        v12 = *(_DWORD *)(v11 + 8);
        v13 = *(_BYTE **)v11;
        a1[11] += 7 + v12;
        if ( *v13 == 108 && v13[1] == 105 && !v13[2] )
        {
          v14 = sub_314170((int)a1);
          v8 = (_DWORD *)sub_313728(a1, 54, __SPAIR64__((unsigned int)v14, (unsigned int)v8));
        }
      }
    }
    goto LABEL_17;
  }
  if ( (unsigned int)(v3 - 67) <= 1 )
  {
    v15 = (_DWORD *)a1[10];
    if ( v15 && (!*v15 || *v15 == 24) )
    {
      a1[11] += v15[3];
      v3 = *v1;
    }
    if ( v3 == 67 )
    {
      if ( v1[1] != 73 )
      {
        switch ( v1[1] )
        {
          case '1':
            v19 = 1;
            a1[3] = v1 + 2;
            goto LABEL_48;
          case '2':
            v19 = 2;
            a1[3] = v1 + 2;
            goto LABEL_48;
          case '3':
            v19 = 3;
            a1[3] = v1 + 2;
            goto LABEL_48;
          case '4':
            v19 = 4;
            a1[3] = v1 + 2;
            goto LABEL_48;
          case '5':
            v19 = 5;
            a1[3] = v1 + 2;
            goto LABEL_48;
          default:
            return 0;
        }
      }
      a1[3] = v1 + 1;
      switch ( v1[2] )
      {
        case '1':
          v19 = 1;
          a1[3] = v1 + 3;
          goto LABEL_75;
        case '2':
          v19 = 2;
          a1[3] = v1 + 3;
          goto LABEL_75;
        case '3':
          v19 = 3;
          a1[3] = v1 + 3;
          goto LABEL_75;
        case '4':
          v19 = 4;
          a1[3] = v1 + 3;
          goto LABEL_75;
        case '5':
          v19 = 5;
          a1[3] = v1 + 3;
LABEL_75:
          sub_319DD0((int)a1);
          v15 = (_DWORD *)a1[10];
LABEL_48:
          v20 = a1[5];
          if ( v20 >= a1[6] )
            goto LABEL_67;
          v21 = a1[4];
          v22 = (unsigned __int8 *)a1[3];
          v8 = (_DWORD *)(v21 + 16 * v20);
          v8[1] = 0;
          if ( !v15 )
            v8 = 0;
          a1[5] = v20 + 1;
          if ( v15 )
          {
            v8[1] = 0;
            *(_DWORD *)(v21 + 16 * v20) = 7;
            v8[2] = v19;
            v8[3] = v15;
          }
          v3 = *v22;
          break;
        default:
          v3 = v1[1];
          v8 = 0;
          break;
      }
    }
    else
    {
      if ( v3 != 68 )
        goto LABEL_29;
      switch ( v1[1] )
      {
        case '0':
          v16 = 1;
          break;
        case '1':
          v16 = 2;
          break;
        case '2':
          v16 = 3;
          break;
        case '4':
          v16 = 4;
          break;
        case '5':
          v16 = 5;
          break;
        default:
          return 0;
      }
      v17 = a1[5];
      v18 = a1[6];
      a1[3] = v1 + 2;
      if ( v17 < v18 )
      {
        v30 = a1[4];
        v8 = (_DWORD *)(v30 + 16 * v17);
        v8[1] = 0;
        if ( !v15 )
          v8 = 0;
        a1[5] = v17 + 1;
        if ( v15 )
        {
          v8[1] = 0;
          *(_DWORD *)(v30 + 16 * v17) = 8;
          v8[2] = v16;
          v8[3] = v15;
        }
        v3 = v1[2];
      }
      else
      {
        v3 = v1[2];
        v8 = 0;
      }
    }
LABEL_18:
    if ( v3 != 66 )
      return (int)v8;
    return sub_314268(a1, (int)v8);
  }
  if ( v3 == 76 )
  {
    a1[3] = v1 + 1;
    v8 = sub_314170((int)a1);
    if ( !v8 || !sub_313DEC((int)a1) )
      return 0;
LABEL_17:
    v3 = *(unsigned __int8 *)a1[3];
    goto LABEL_18;
  }
  if ( v3 == 85 )
  {
    v4 = v1[1];
    if ( v4 == 108 )
    {
      a1[3] = v1 + 1;
      v3 = v1[1];
      if ( v3 == 108 )
      {
        a1[3] = v1 + 2;
        v23 = sub_31AADC(a1);
        if ( !v23 )
        {
LABEL_67:
          v8 = 0;
          v3 = *(unsigned __int8 *)a1[3];
          goto LABEL_18;
        }
        v24 = (unsigned __int8 *)a1[3];
        v3 = *v24;
        if ( v3 == 69 )
        {
          a1[3] = v24 + 1;
          v25 = sub_313D1C((int)a1);
          if ( v25 >= 0 )
          {
            v26 = a1[5];
            v7 = (unsigned __int8 *)a1[3];
            if ( v26 >= a1[6] )
              goto LABEL_11;
            v27 = a1[8];
            v28 = a1[9];
            v8 = (_DWORD *)(a1[4] + 16 * v26);
            v8[1] = 0;
            a1[5] = v26 + 1;
            *v8 = 69;
            v8[2] = v23;
            v8[3] = v25;
            if ( v27 >= v28 )
            {
LABEL_66:
              v3 = *v7;
              v8 = 0;
              goto LABEL_18;
            }
LABEL_64:
            *(_DWORD *)(a1[7] + 4 * v27) = v8;
            a1[8] = v27 + 1;
            v3 = *v7;
            goto LABEL_18;
          }
          goto LABEL_67;
        }
      }
LABEL_29:
      v8 = 0;
      goto LABEL_18;
    }
    if ( v4 == 116 )
    {
      a1[3] = v1 + 1;
      v3 = v1[1];
      if ( v3 == 116 )
      {
        a1[3] = v1 + 2;
        v5 = sub_313D1C((int)a1);
        if ( v5 >= 0 )
        {
          v6 = a1[5];
          v7 = (unsigned __int8 *)a1[3];
          if ( v6 >= a1[6] )
          {
LABEL_11:
            v3 = *v7;
            v8 = 0;
            goto LABEL_18;
          }
          v27 = a1[8];
          v29 = a1[9];
          v8 = (_DWORD *)(a1[4] + 16 * v6);
          v8[1] = 0;
          a1[5] = v6 + 1;
          *v8 = 71;
          v8[2] = v5;
          if ( v27 >= v29 )
            goto LABEL_66;
          goto LABEL_64;
        }
        goto LABEL_67;
      }
      goto LABEL_29;
    }
  }
  return 0;
}
