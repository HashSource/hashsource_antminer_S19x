__int16 *__fastcall sub_54F04(int a1)
{
  int v1; // r8
  unsigned __int8 **v2; // r4
  const char *v3; // r5
  unsigned __int8 *v4; // r6
  __int16 *result; // r0
  __int16 *v6; // r3
  int v7; // r2
  __int16 **v8; // r6
  __int16 *v9; // r1
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r1
  __int16 *v12; // r1
  int v13; // r3
  unsigned __int8 *v14; // r2
  int v15; // r3
  int v16; // r2
  bool v17; // zf
  char v18; // r3
  int v19; // r3
  _BYTE v20[4]; // [sp+20h] [bp-8h] BYREF
  int v21; // [sp+24h] [bp-4h] BYREF
  __int16 *v22; // [sp+28h] [bp+0h] BYREF
  __int16 *v23; // [sp+2Ch] [bp+4h]
  char v24; // [sp+30h] [bp+8h] BYREF
  char v25; // [sp+31h] [bp+9h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(unsigned __int8 ***)(v1 + 84);
  v21 = 0x7FFFFFFF;
  v3 = (const char *)(v2 + 14);
  v4 = *v2;
  result = (__int16 *)sub_39EE4(a1, (bool *)v2 + 56, 128, &v22);
  v6 = result;
  if ( !result )
  {
    v7 = *v4;
    if ( *v4 )
      *v4 = 0;
    else
      LOBYTE(v6) = 1;
    if ( !v7 )
    {
      *v4 = (unsigned __int8)v6;
      v8 = (__int16 **)(v4 + 4);
      result = v22;
      v9 = v23;
      *v8 = v22;
      v8[1] = v9;
    }
    return result;
  }
  v10 = (unsigned __int8 *)*((_DWORD *)v4 + 1);
  v11 = (unsigned __int8 *)*((_DWORD *)v4 + 2);
  v2[46] = (unsigned __int8 *)v6;
  v2[58] = v10;
  v2[59] = v11;
  v12 = v23;
  *((_DWORD *)v4 + 1) = v22;
  *((_DWORD *)v4 + 2) = v12;
  *v4 = 1;
  memset(v20, 32, sizeof(v20));
  if ( v6 == (__int16 *)&off_18 )
    goto LABEL_14;
  if ( v6 != (__int16 *)&dword_20 )
    return sub_394A0((__int16 *)v1, 2);
  if ( sscanf(v3, "%c%*31c", &v20[3]) != 1 )
  {
LABEL_14:
    if ( sscanf(
           v3,
           "%c%1d%c%4d%3d%*c%2d:%2d:%2d.%2ld%c",
           v20,
           &v21,
           &v20[2],
           v2 + 47,
           v2 + 48,
           v2 + 49,
           v2 + 50,
           v2 + 51,
           v2 + 52,
           &v20[1]) == 10 )
    {
      v16 = v20[1];
      v17 = v20[1] == 73;
      v2[52] = (unsigned __int8 *)(10000000 * (_DWORD)v2[52]);
      if ( v17 )
      {
        v20[1] = 43;
      }
      else if ( v16 == 68 )
      {
        v20[1] = 45;
      }
      v15 = v20[0];
      if ( v20[0] == 63 )
      {
        v14 = v2[46];
      }
      else
      {
        v15 = 58;
        v14 = v2[46];
        v20[0] = 58;
      }
      goto LABEL_23;
    }
    return sub_394A0((__int16 *)v1, 2);
  }
  v13 = v20[3];
  if ( v20[3] == 82 )
  {
    if ( sscanf(
           v3,
           "%*2c %*2c%2c%*c%4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
           &v24,
           v2 + 47,
           v2 + 48,
           v2 + 49,
           v20,
           v2 + 50,
           v2 + 51,
           &v20[1]) == 8 )
    {
      if ( v24 == 48 )
        v19 = 0;
      else
        v19 = 99;
      v21 = v19;
      if ( v20[1] == 73 )
      {
        v13 = v20[3];
        v20[1] = 43;
      }
      else
      {
        v13 = v20[3];
        if ( v20[1] == 68 )
          v20[1] = 45;
      }
    }
    else
    {
      v13 = v20[3];
    }
  }
  if ( v13 != 83
    || sscanf(
         v3,
         "%*4c %2c %4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
         &v24,
         v2 + 47,
         v2 + 48,
         v2 + 49,
         v20,
         v2 + 50,
         v2 + 51,
         &v20[1]) != 8 )
  {
    v14 = v2[46];
    v15 = v20[0];
    goto LABEL_23;
  }
  v14 = v2[46];
  if ( v24 != 76 )
  {
    if ( v24 != 48 )
    {
      v21 = 99;
      v15 = v20[0];
      goto LABEL_42;
    }
    v15 = v20[0];
    v21 = v25 & 0xF;
LABEL_23:
    if ( v14 == (unsigned __int8 *)&dword_20 )
    {
      switch ( v21 )
      {
        case 0:
          goto LABEL_27;
        case 1:
LABEL_32:
          *((_QWORD *)v2 + 31) = 0x3F947AE147AE147BLL;
          break;
        case 2:
LABEL_34:
          *((_QWORD *)v2 + 31) = 0x3FA47AE147AE147BLL;
          break;
        case 3:
LABEL_33:
          *((_QWORD *)v2 + 31) = 0x3FB47AE147AE147BLL;
          break;
        default:
          goto LABEL_42;
      }
    }
    else
    {
      switch ( v21 )
      {
        case 1:
          *((_QWORD *)v2 + 31) = 0x3FC47AE147AE147BLL;
          break;
        case 2:
          goto LABEL_33;
        case 3:
          goto LABEL_34;
        case 4:
          goto LABEL_32;
        case 5:
          goto LABEL_27;
        default:
          goto LABEL_42;
      }
    }
    goto LABEL_28;
  }
  v21 = 0;
  v15 = v20[0];
  if ( v14 != (unsigned __int8 *)&dword_20 )
  {
LABEL_42:
    *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
    goto LABEL_28;
  }
LABEL_27:
  *((_QWORD *)v2 + 31) = 0x3F60624DD2F1A9FCLL;
LABEL_28:
  if ( v15 == 58 )
  {
    if ( v20[1] == 43 )
    {
      *((_BYTE *)v2 + 40) = 1;
    }
    else
    {
      if ( v20[1] == 45 )
        v18 = 2;
      else
        v18 = 0;
      *((_BYTE *)v2 + 40) = v18;
    }
  }
  else
  {
    *((_BYTE *)v2 + 40) = 3;
  }
  result = (__int16 *)sub_39CF8(v2);
  if ( !result )
    return sub_394A0((__int16 *)v1, 6);
  return result;
}
