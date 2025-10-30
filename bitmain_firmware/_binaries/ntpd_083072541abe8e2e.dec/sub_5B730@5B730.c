_BYTE *__fastcall sub_5B730(int a1)
{
  int v1; // r7
  int *v2; // r9
  int v3; // r4
  _BYTE *result; // r0
  int v5; // r10
  int v6; // r1
  int v7; // r1
  int v8; // r3
  const char *v9; // r1
  int v10; // r3
  bool v11; // cc
  int v12; // r0
  const char *v13; // r1
  char v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r4
  int v18; // r4
  char v19; // [sp+13h] [bp-91h] BYREF
  _DWORD v20[2]; // [sp+14h] [bp-90h] BYREF
  bool v21[2]; // [sp+1Ch] [bp-88h] BYREF
  char s[126]; // [sp+1Eh] [bp-86h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v3 = *v2;
  result = sub_39EE4(a1, v21, 128, v20);
  v5 = (int)result;
  if ( !result )
    return result;
  v6 = *(_DWORD *)(v3 + 4);
  v2[58] = *(_DWORD *)v3;
  v2[59] = v6;
  result = (_BYTE *)v20[0];
  v7 = v20[1];
  *(_DWORD *)v3 = v20[0];
  *(_DWORD *)(v3 + 4) = v7;
  if ( v5 <= 2 )
    return result;
  v8 = *(_DWORD *)(v3 + 8);
  if ( !v8 )
  {
    if ( !strncmp((const char *)v21, "TQ", 2u) )
    {
      *(_BYTE *)(v3 + 12) = s[0];
      return (_BYTE *)write(v2[7], "SR", 2u);
    }
    if ( !strncmp((const char *)v21, "SR", 2u) )
    {
      sub_6D4DC(v3 + 13);
      if ( (v2[192] & 8) != 0 )
        return (_BYTE *)write(v2[7], &off_9A190, 2u);
      v12 = v2[7];
      if ( (*(_DWORD *)(v1 + 76) & 1) != 0 )
        v13 = "O5";
      else
        v13 = "B5";
      return (_BYTE *)write(v12, v13, 2u);
    }
    if ( !strncmp((const char *)v21, (const char *)&off_9A190, 2u) )
    {
      sub_6D4DC(v3 + 53);
      return (_BYTE *)write(v2[7], &off_9A194, 2u);
    }
    if ( !strncmp((const char *)v21, (const char *)&off_9A194, 2u) )
    {
      v17 = v3 + 53;
      sub_6D58C(v17, " ");
      sub_6D58C(v17, s);
      return (_BYTE *)write(v2[7], &off_9A198, 2u);
    }
    if ( !strncmp((const char *)v21, (const char *)&off_9A198, 2u) )
    {
      v18 = v3 + 53;
      sub_6D58C(v18, " ");
      sub_6D58C(v18, s);
      return (_BYTE *)write(v2[7], &off_9A19C, 2u);
    }
    result = (_BYTE *)strncmp((const char *)v21, (const char *)&off_9A19C, 2u);
    if ( result )
    {
      *(_DWORD *)(v3 + 8) = 1;
      return result;
    }
    sub_6D58C(v3 + 53, " ");
    sub_6D58C(v3 + 53, s);
    sub_41F44(v1 + 16, (const char *)(v3 + 53));
    if ( (*(_DWORD *)(v1 + 76) & 1) != 0 )
      v9 = "O5";
    else
      v9 = "B5";
    result = (_BYTE *)write(v2[7], v9, 2u);
    v8 = *(_DWORD *)(v3 + 8);
  }
  v10 = v8 + 1;
  v11 = v5 <= 23;
  if ( v5 > 23 )
    v11 = v10 <= 1;
  *(_DWORD *)(v3 + 8) = v10;
  if ( !v11 )
  {
    sub_6D4DC(v2 + 14);
    *((_BYTE *)v2 + 78) = *(_BYTE *)(v3 + 12);
    sub_6D58C((int)(v2 + 14), (char *)(v3 + 13));
    v19 = 32;
    v2[46] = strlen((const char *)v2 + 56);
    if ( sscanf((const char *)v2 + 56, "%c%2d %3d %2d:%2d:%2d", &v19, v2 + 47, v2 + 48, v2 + 49, v2 + 50, v2 + 51) == 6 )
    {
      switch ( *(_BYTE *)(v3 + 12) )
      {
        case '0':
          v15 = v2[58];
          v16 = v2[59];
          *((_QWORD *)v2 + 31) = 0x3E7AD7F29ABCAF48LL;
          v2[56] = v15;
          v2[57] = v16;
          goto LABEL_31;
        case '4':
          *((_QWORD *)v2 + 31) = 0x3EB0C6F7A0B5ED8DLL;
          goto LABEL_31;
        case '5':
          *((_QWORD *)v2 + 31) = 0x3EE4F8B588E368F1LL;
          goto LABEL_31;
        case '6':
          *((_QWORD *)v2 + 31) = 0x3F1A36E2EB1C432DLL;
          goto LABEL_31;
        case '7':
          *((_QWORD *)v2 + 31) = 0x3F50624DD2F1A9FCLL;
          goto LABEL_31;
        case '8':
          *((_QWORD *)v2 + 31) = 0x3F847AE147AE147BLL;
          goto LABEL_31;
        case '9':
          *((_QWORD *)v2 + 31) = 0x3FB999999999999ALL;
          goto LABEL_31;
        case 'A':
          *((_QWORD *)v2 + 31) = 0x3FF0000000000000LL;
          goto LABEL_31;
        case 'B':
          *((_QWORD *)v2 + 31) = 0x4024000000000000LL;
LABEL_31:
          if ( v19 == 32 )
            v14 = 0;
          else
            v14 = 3;
          *((_BYTE *)v2 + 40) = v14;
          if ( sub_39CF8(v2) )
          {
            if ( *(double *)(v1 + 632) > 1.5 )
              sub_39D44(v1);
          }
          else
          {
            sub_394A0((__int16 *)v1, 6);
          }
          v12 = v2[7];
          if ( (*(_DWORD *)(v1 + 76) & 1) != 0 )
            v13 = "O0";
          else
            v13 = "B0";
          break;
        case 'F':
          *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
          sub_394A0((__int16 *)v1, 3);
          v12 = v2[7];
          if ( (*(_DWORD *)(v1 + 76) & 1) != 0 )
            v13 = "O0";
          else
            v13 = "B0";
          break;
        default:
          *((_QWORD *)v2 + 31) = 0x4030000000000000LL;
          sub_394A0((__int16 *)v1, 2);
          v12 = v2[7];
          if ( (*(_DWORD *)(v1 + 76) & 1) != 0 )
            v13 = "O0";
          else
            v13 = "B0";
          break;
      }
    }
    else
    {
      sub_394A0((__int16 *)v1, 2);
      v12 = v2[7];
      if ( (*(_DWORD *)(v1 + 76) & 1) != 0 )
        v13 = "O0";
      else
        v13 = "B0";
    }
    return (_BYTE *)write(v12, v13, 2u);
  }
  return result;
}
