__int16 *__fastcall sub_59238(int a1)
{
  int v1; // r8
  int *v2; // r5
  __int16 **v3; // r4
  const char *v4; // r6
  __int16 *result; // r0
  __int16 *v6; // r1
  __int16 *v7; // r3
  unsigned int v8; // r3
  bool v9; // zf
  unsigned int v10; // r3
  __int16 *v11; // r0
  __int16 *v12; // r1
  __int16 *v13; // r12
  int v14; // r2
  __int16 *v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r1
  _BYTE v19[5]; // [sp+23h] [bp-11h] BYREF
  int v20; // [sp+28h] [bp-Ch] BYREF
  int v21; // [sp+2Ch] [bp-8h] BYREF
  int v22; // [sp+30h] [bp-4h] BYREF
  __int16 *v23; // [sp+34h] [bp+0h] BYREF
  __int16 *v24; // [sp+38h] [bp+4h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = (__int16 **)*v2;
  result = (__int16 *)sub_39EE4(a1, (bool *)v2 + 56, 128, &v23);
  v7 = result;
  if ( !result )
  {
    v8 = (unsigned int)v3[2];
    v9 = v8 == 0;
    v10 = __clz(v8);
    if ( v9 )
    {
      result = v23;
      v6 = v24;
    }
    v3[2] = (__int16 *)(v10 >> 5);
    if ( v9 )
    {
      *v3 = result;
      v3[1] = v6;
    }
    return result;
  }
  v11 = *v3;
  v12 = v3[1];
  v2[46] = (int)v7;
  v2[58] = (int)v11;
  v2[59] = (int)v12;
  v13 = v11;
  v14 = v2[59];
  result = v23;
  v15 = v24;
  v3[2] = (_WORD *)(&dword_0 + 1);
  *v3 = result;
  v3[1] = v15;
  if ( !((unsigned int)v13 | v14) )
    return result;
  memset(v19, 32, 4);
  v20 = 0;
  if ( v7 != (__int16 *)&off_18 )
  {
    if ( v7 == (__int16 *)((char *)&dword_1C + 1) )
    {
      if ( sscanf(
             v4,
             "0003%c %4d%2d%2d %2d%2d%2d+0000%c%c",
             v19,
             v2 + 47,
             &v22,
             &v21,
             v2 + 49,
             v2 + 50,
             v2 + 51,
             &v19[3],
             &v19[2]) == 8 )
      {
        v16 = sub_6EC68(v2[47], v22, v21);
        v2[52] = 0;
        v2[48] = v16;
        goto LABEL_15;
      }
    }
    else if ( v7 == (_WORD *)&dword_14 + 1
           && sscanf(
                v4,
                "%c %3d %2d:%2d:%2d%c%cTZ=%2d",
                v19,
                v2 + 48,
                v2 + 49,
                v2 + 50,
                v2 + 51,
                &v19[4],
                &v19[3],
                &v20) == 8 )
    {
      v2[52] = 0;
      goto LABEL_15;
    }
LABEL_11:
    if ( !*((_BYTE *)v3 + 13) )
      return sub_394A0((__int16 *)v1, 2);
    --*((_BYTE *)v3 + 13);
    return (__int16 *)sub_41F44(v1 + 16, v4);
  }
  if ( sscanf(
         v4,
         "%c%c %2d %3d %2d:%2d:%2d.%3ld %c",
         v19,
         &v19[1],
         v2 + 47,
         v2 + 48,
         v2 + 49,
         v2 + 50,
         v2 + 51,
         v2 + 52,
         &v19[2]) != 9 )
    goto LABEL_11;
  v2[52] *= (_DWORD)&unk_F4240;
LABEL_15:
  switch ( v19[1] )
  {
    case ' ':
      v17 = v2[58];
      v18 = v2[59];
      *((_QWORD *)v2 + 31) = 0x3F50624DD2F1A9FCLL;
      v2[56] = v17;
      v2[57] = v18;
      break;
    case 'A':
      *((_QWORD *)v2 + 31) = 0x3F847AE147AE147BLL;
      break;
    case 'B':
      *((_QWORD *)v2 + 31) = 0x3FB999999999999ALL;
      break;
    case 'C':
      *((_QWORD *)v2 + 31) = 0x3FE0000000000000LL;
      break;
    case 'D':
      *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
      break;
    default:
      *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
      sub_394A0((__int16 *)v1, 2);
      break;
  }
  if ( v19[0] == 32 )
    *((_BYTE *)v2 + 40) = v19[2] == 76;
  else
    *((_BYTE *)v2 + 40) = 3;
  result = (__int16 *)sub_39BC8(v2);
  if ( !result )
    return sub_394A0((__int16 *)v1, 6);
  return result;
}
