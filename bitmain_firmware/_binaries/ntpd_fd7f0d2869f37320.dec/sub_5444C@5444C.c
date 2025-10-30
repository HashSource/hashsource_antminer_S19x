_DWORD *__fastcall sub_5444C(_DWORD *result)
{
  _DWORD *v1; // r6
  _BYTE *v2; // r11
  int v3; // r4
  _BYTE *v4; // r5
  int v5; // r8
  char *v6; // r6
  bool v7; // zf
  unsigned int v8; // r3
  char *v9; // r7
  int v10; // r3
  __int16 v11; // r3
  int v12; // r3
  int *v13; // r10
  int v14; // r12
  int v15; // r3
  _DWORD *v16; // r3
  _DWORD *v17; // r10
  int v18; // r1
  int v19; // r3
  int v20; // r4
  int v21; // r3
  char *v22; // r2
  int v23; // [sp+18h] [bp-1Ch]
  int v24; // [sp+1Ch] [bp-18h]

  v1 = result;
  v23 = result[1];
  v2 = *(_BYTE **)(v23 + 84);
  v3 = *(_DWORD *)v2;
  if ( *(_DWORD *)(*(_DWORD *)v2 + 140) != 1 || !praecis_msg )
  {
    v4 = result + 22;
    v5 = (int)result + result[21] + 88;
    if ( result + 22 == (_DWORD *)v5 )
      return result;
    v6 = (char *)result + 89;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(v3 + 9);
      if ( v10 == 3 )
      {
        if ( *v4 == 16 )
        {
          *(_BYTE *)(v3 + 9) = 4;
          goto LABEL_14;
        }
        v11 = *(_WORD *)(v3 + 10);
        goto LABEL_13;
      }
      if ( v10 == 4 )
        break;
      v7 = v10 == 2;
      v8 = (unsigned __int8)*v4;
      if ( v7 )
      {
        if ( v8 > 0x10 || ((1 << v8) & 0x10009) == 0 )
        {
          *(_BYTE *)(v3 + 9) = 3;
          *(_BYTE *)(v3 + 12) = *v4;
          goto LABEL_14;
        }
LABEL_7:
        v9 = v6;
        *(_BYTE *)(v3 + 9) = 0;
        *(_WORD *)(v3 + 10) = 0;
LABEL_8:
        ++v6;
        ++v4;
        if ( (char *)v5 == v9 )
          return result;
      }
      else
      {
        if ( v8 != 16 )
          goto LABEL_7;
        v9 = v6;
        *(_BYTE *)(v3 + 9) = 2;
LABEL_30:
        *(_WORD *)(v3 + 10) = 0;
        if ( (v2[768] & 2) != 0 )
        {
          result = (_DWORD *)sub_6055C(v2 + 232);
          v12 = *(unsigned __int8 *)(v3 + 9);
          goto LABEL_17;
        }
LABEL_16:
        v12 = *(unsigned __int8 *)(v3 + 9);
LABEL_17:
        if ( v12 != 1 )
          goto LABEL_8;
        v13 = *(int **)(v23 + 84);
        v24 = *v13;
        result = (_DWORD *)sub_53CE4(v23);
        if ( !result || *(int *)(v24 + 4) <= 0 )
          goto LABEL_8;
        v14 = v13[52];
        *(_DWORD *)(v24 + 4) = 0;
        v15 = v13[47];
        v13[46] = 0;
        sub_6D00C(v13 + 14, 128, "%4d %03d %02d:%02d:%02d.%09ld", v15, v13[48], v13[49], v13[50], v13[51], v14);
        v13[46] = 24;
        if ( !sub_3A4E8(v13) )
        {
          result = (_DWORD *)sub_39C88(v23, 6);
          goto LABEL_8;
        }
        ++v6;
        ++v4;
        sub_42D0C(v23 + 16, (const char *)v13 + 56);
        v16 = v13 + 58;
        v17 = v13 + 56;
        v18 = v16[1];
        *v17 = *v16;
        v17[1] = v18;
        result = (_DWORD *)sub_3A534(v23);
        if ( (char *)v5 == v9 )
          return result;
      }
    }
    v19 = (unsigned __int8)*v4;
    if ( v19 == 16 )
    {
      v11 = *(_WORD *)(v3 + 10);
      *(_BYTE *)(v3 + 9) = 3;
LABEL_13:
      *(_WORD *)(v3 + 10) = v11 + 1;
      *(_BYTE *)(v3 + v11 + 13) = *v4;
      goto LABEL_14;
    }
    if ( v19 == 3 )
    {
      *(_BYTE *)(v3 + 9) = 1;
LABEL_14:
      v9 = v6;
      if ( *(__int16 *)(v3 + 10) > 128 )
      {
        *(_BYTE *)(v3 + 9) = 0;
        goto LABEL_8;
      }
      goto LABEL_16;
    }
    *(_BYTE *)(v3 + 9) = 2;
    v9 = v6;
    *(_BYTE *)(v3 + 12) = *v4;
    goto LABEL_30;
  }
  v20 = dword_BE614;
  result = memcpy(&byte_BE618[dword_BE614], result + 22, result[21]);
  v21 = v20 + v1[21];
  dword_BE614 = v21;
  v22 = (char *)&dword_BE610 + v21 - 2;
  if ( v22[8] == 13 && *((_BYTE *)&dword_BE610 + v21 + 7) == 10 )
  {
    v22[8] = 0;
    sub_42D0C(v23 + 16, byte_BE618);
    dword_BE614 = 0;
    praecis_msg = 0;
    result = (_DWORD *)sub_541E4((int)v2);
    if ( (int)result < 0 )
      return (_DWORD *)sub_39C88(v23, 3);
  }
  return result;
}
