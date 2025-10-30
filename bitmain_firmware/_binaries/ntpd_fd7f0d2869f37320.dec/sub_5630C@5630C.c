_BYTE *__fastcall sub_5630C(int a1)
{
  int v1; // r8
  int *v2; // r4
  const char *v3; // r5
  int v4; // r6
  _BYTE *result; // r0
  _DWORD *v6; // r6
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r2
  int v11; // r2
  bool v12; // zf
  int v13; // r3
  int v14; // r3
  int v15; // r3
  char v16; // r3
  int v17; // r3
  _BYTE v18[4]; // [sp+20h] [bp-8h] BYREF
  int v19; // [sp+24h] [bp-4h] BYREF
  _BYTE *v20; // [sp+28h] [bp+0h] BYREF
  int v21; // [sp+2Ch] [bp+4h]
  char v22; // [sp+30h] [bp+8h] BYREF
  char v23; // [sp+31h] [bp+9h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v19 = 0x7FFFFFFF;
  v3 = (const char *)(v2 + 14);
  v4 = *v2;
  result = sub_3A6D4(a1, (bool *)v2 + 56, 128, &v20);
  if ( !result )
  {
    if ( *(_BYTE *)v4 )
    {
      *(_BYTE *)v4 = 0;
    }
    else
    {
      *(_BYTE *)v4 = 1;
      v6 = (_DWORD *)(v4 + 4);
      result = v20;
      v7 = v21;
      *v6 = v20;
      v6[1] = v7;
    }
    return result;
  }
  v2[46] = (int)result;
  v8 = *(_DWORD *)(v4 + 8);
  v2[58] = *(_DWORD *)(v4 + 4);
  v2[59] = v8;
  v9 = v21;
  *(_DWORD *)(v4 + 4) = v20;
  *(_DWORD *)(v4 + 8) = v9;
  *(_BYTE *)v4 = 1;
  v10 = v2[46];
  memset(v18, 32, sizeof(v18));
  if ( v10 == 24 )
    goto LABEL_9;
  if ( v10 != 32 )
    return (_BYTE *)sub_39C88(v1, 2);
  if ( sscanf(v3, "%c%*31c", &v18[3]) != 1 )
  {
LABEL_9:
    if ( sscanf(
           v3,
           "%c%1d%c%4d%3d%*c%2d:%2d:%2d.%2ld%c",
           v18,
           &v19,
           &v18[2],
           v2 + 47,
           v2 + 48,
           v2 + 49,
           v2 + 50,
           v2 + 51,
           v2 + 52,
           &v18[1]) != 10 )
      return (_BYTE *)sub_39C88(v1, 2);
    v11 = v18[1];
    v12 = v18[1] == 73;
    v2[52] *= 10000000;
    if ( v12 )
    {
      v18[1] = 43;
    }
    else if ( v11 == 68 )
    {
      v18[1] = 45;
    }
    v13 = v18[0];
    if ( v18[0] != 63 )
    {
      v13 = 58;
      v18[0] = 58;
    }
    goto LABEL_17;
  }
  v14 = v18[3];
  if ( v18[3] == 82 )
  {
    if ( sscanf(
           v3,
           "%*2c %*2c%2c%*c%4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
           &v22,
           v2 + 47,
           v2 + 48,
           v2 + 49,
           v18,
           v2 + 50,
           v2 + 51,
           &v18[1]) == 8 )
    {
      if ( v22 == 48 )
        v17 = 0;
      else
        v17 = 99;
      v19 = v17;
      if ( v18[1] == 73 )
      {
        v14 = v18[3];
        v18[1] = 43;
      }
      else
      {
        v14 = v18[3];
        if ( v18[1] == 68 )
          v18[1] = 45;
      }
    }
    else
    {
      v14 = v18[3];
    }
  }
  if ( v14 != 83
    || sscanf(
         v3,
         "%*4c %2c %4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
         &v22,
         v2 + 47,
         v2 + 48,
         v2 + 49,
         v18,
         v2 + 50,
         v2 + 51,
         &v18[1]) != 8 )
  {
    v13 = v18[0];
    goto LABEL_17;
  }
  if ( v22 != 76 )
  {
    if ( v22 != 48 )
    {
      v13 = v18[0];
      v19 = 99;
LABEL_40:
      *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
      goto LABEL_25;
    }
    v13 = v18[0];
    v19 = v23 & 0xF;
LABEL_17:
    if ( v2[46] == 32 )
    {
      switch ( v19 )
      {
        case 0:
          goto LABEL_24;
        case 1:
LABEL_30:
          *((_QWORD *)v2 + 31) = 0x3F947AE147AE147BLL;
          break;
        case 2:
LABEL_31:
          *((_QWORD *)v2 + 31) = 0x3FA47AE147AE147BLL;
          break;
        case 3:
LABEL_29:
          *((_QWORD *)v2 + 31) = 0x3FB47AE147AE147BLL;
          break;
        default:
          goto LABEL_40;
      }
    }
    else
    {
      switch ( v19 )
      {
        case 1:
          *((_QWORD *)v2 + 31) = 0x3FC47AE147AE147BLL;
          break;
        case 2:
          goto LABEL_29;
        case 3:
          goto LABEL_31;
        case 4:
          goto LABEL_30;
        case 5:
          goto LABEL_24;
        default:
          goto LABEL_40;
      }
    }
    goto LABEL_25;
  }
  v15 = v2[46];
  v19 = 0;
  v12 = v15 == 32;
  v13 = v18[0];
  if ( !v12 )
    goto LABEL_40;
LABEL_24:
  *((_QWORD *)v2 + 31) = 0x3F60624DD2F1A9FCLL;
LABEL_25:
  if ( v13 == 58 )
  {
    if ( v18[1] == 43 )
    {
      *((_BYTE *)v2 + 40) = 1;
    }
    else
    {
      if ( v18[1] == 45 )
        v16 = 2;
      else
        v16 = 0;
      *((_BYTE *)v2 + 40) = v16;
    }
  }
  else
  {
    *((_BYTE *)v2 + 40) = 3;
  }
  result = (_BYTE *)sub_3A4E8(v2);
  if ( !result )
    return (_BYTE *)sub_39C88(v1, 6);
  return result;
}
