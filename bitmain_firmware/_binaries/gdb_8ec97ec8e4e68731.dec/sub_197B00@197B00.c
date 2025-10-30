_DWORD *__fastcall sub_197B00(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r2
  char *v8; // r0
  unsigned __int8 *v9; // r6
  const char *v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r2
  int v14; // r7
  int v15; // r3
  unsigned __int8 *v16; // r3
  int v17; // r1
  int v18; // t1
  int v19; // r0
  bool v20; // zf
  _BOOL4 v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r1
  int v25; // r2
  int v26; // [sp+0h] [bp-14h] BYREF
  int v27; // [sp+4h] [bp-10h]
  int v28; // [sp+8h] [bp-Ch]

  if ( a2[2] == 6 )
  {
    v8 = (char *)sub_9360C(a2[1]);
    v9 = (unsigned __int8 *)v8;
    a2[1] = v8;
    if ( v8 )
    {
      v10 = sub_195BDC(v8);
      if ( v10 )
      {
        a2[3] = v10;
        a2[2] = 0;
        v11 = a2[3];
        v12 = a2[4];
        *a1 = a2[2];
        a1[1] = v11;
        a1[2] = v12;
        return a1;
      }
      v9 = (unsigned __int8 *)a2[1];
    }
    switch ( *v9 )
    {
      case 0u:
        a2[2] = 5;
        v4 = a2 + 2;
        break;
      case 0x22u:
      case 0x27u:
        if ( !a2[5] || !sub_195CC4(v9) )
          goto LABEL_36;
        ++a2[1];
        a2[2] = 5;
        v4 = a2 + 2;
        break;
      case 0x2Bu:
      case 0x2Du:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
        v13 = 3;
        a2[2] = 3;
        a2[4] = 0;
        a2[3] = v9;
        v14 = *v9;
        v15 = v14 - 43;
        if ( ((v14 - 43) & 0xFD) != 0 )
          v13 = (int)v9;
        else
          v15 = 1;
        if ( ((v14 - 43) & 0xFD) == 0 )
        {
          v13 = (int)&v9[v15];
          a2[4] = v15;
          a2[1] = &v9[v15];
          v14 = v9[1];
        }
        if ( (unsigned int)(v14 - 48) <= 9 )
        {
          v16 = (unsigned __int8 *)(v13 + 1);
          v17 = a2[4] - v13;
          do
          {
            a2[1] = v16;
            a2[4] = &v16[v17];
            v18 = *v16++;
            v14 = v18;
          }
          while ( (unsigned int)(v18 - 48) <= 9 );
        }
        if ( !v14 )
          goto LABEL_2;
        v19 = isspace(v14);
        v20 = v14 == 58;
        if ( v14 != 58 )
          v20 = v14 == 44;
        v21 = !v20;
        if ( v19 )
          v21 = 0;
        if ( !v21 || strchr("\"'", v14) )
          goto LABEL_2;
        a2[1] = v9;
        sub_1976D0(&v26, a2);
        v22 = v27;
        v23 = v28;
        v4 = a2 + 2;
        a2[2] = v26;
        a2[3] = v22;
        a2[4] = v23;
        break;
      case 0x2Cu:
        a2[1] = v9 + 1;
        a2[3] = v9;
        v4 = a2 + 2;
        a2[2] = 4;
        a2[4] = 1;
        break;
      case 0x3Au:
        if ( v9[1] == 58 )
          goto LABEL_36;
        a2[1] = v9 + 1;
        v4 = a2 + 2;
        a2[2] = 1;
        break;
      default:
LABEL_36:
        sub_1976D0(&v26, a2);
        v24 = v27;
        v25 = v28;
        v4 = a2 + 2;
        a2[2] = v26;
        a2[3] = v24;
        a2[4] = v25;
        break;
    }
  }
  else
  {
LABEL_2:
    v4 = a2 + 2;
  }
  v5 = v4[1];
  v6 = v4[2];
  *a1 = *v4;
  a1[1] = v5;
  a1[2] = v6;
  return a1;
}
