ssize_t __fastcall sub_4E854(ssize_t result)
{
  ssize_t v1; // r4
  _WORD **v2; // r3
  int v3; // r6
  ssize_t *v4; // r4
  __int64 v5; // r0
  ssize_t v6; // r1
  ssize_t *v7; // r4
  __int64 v8; // r0
  ssize_t v9; // r1
  __int16 v10; // r3
  __int16 v11; // r2
  _DWORD *v12; // r4
  __int64 v13; // r0
  int v14; // r1
  __int16 v15; // r1
  __int16 v16; // r12
  __int16 v17; // lr
  unsigned __int16 v18; // r12
  unsigned int v19; // r7
  unsigned int v20; // r1
  unsigned int v21; // r3
  int v22; // r12
  int i; // r1
  __int16 v24; // r2
  int v25; // r4
  unsigned int v26; // r4
  int v27; // r1
  int v28; // r1

  if ( *(_DWORD *)(result + 84) == 7 )
  {
    v1 = result;
    v2 = *(_WORD ***)(*(_DWORD *)(result + 4) + 84);
    v3 = (int)*v2;
    switch ( (*v2)[26] )
    {
      case 0:
        return result;
      case 1:
        v10 = *(unsigned __int8 *)(result + 88) - 48;
        if ( (unsigned __int8)v10 > 9u )
          goto LABEL_12;
        v11 = *(unsigned __int8 *)(result + 89) - 48;
        if ( (unsigned __int8)v11 > 9u )
          goto LABEL_12;
        v15 = *(unsigned __int8 *)(result + 90) - 48;
        result = (unsigned __int8)v15;
        if ( (unsigned __int8)v15 > 9u )
          goto LABEL_12;
        v16 = *(unsigned __int8 *)(v1 + 91) - 48;
        result = (unsigned __int8)v16;
        if ( (unsigned __int8)v16 > 9u )
          goto LABEL_12;
        v17 = *(unsigned __int8 *)(v1 + 92) - 48;
        result = (unsigned __int8)v17;
        if ( (unsigned __int8)v17 > 9u )
          goto LABEL_12;
        result = *(unsigned __int8 *)(v1 + 93) - 48;
        if ( (unsigned __int8)result > 9u )
          goto LABEL_12;
        v18 = v16 + 10 * v15;
        v19 = v18;
        v20 = (unsigned __int16)(result + 10 * v17);
        v21 = (unsigned __int16)(v11 + 10 * v10);
        result = (__int16)v20;
        *(_WORD *)(v3 + 42) = v18;
        *(_WORD *)(v3 + 38) = v21;
        *(_WORD *)(v3 + 44) = v20;
        if ( v18 > 0xCu || (v22 = v18 - 1, byte_987A8[v19 - 1] < v20) )
        {
LABEL_12:
          *(_WORD *)(v3 + 52) = 0;
        }
        else
        {
          *(_WORD *)(v3 + 40) = v20;
          for ( i = 0; v22 > i; ++i )
          {
            v24 = byte_987A8[i];
            *(_WORD *)(v3 + 40) += v24;
          }
          v25 = 1900;
          if ( v21 <= 0x5A )
            v25 = 2000;
          v26 = v21 + v25;
          if ( (v26 & 3) != 0 || (sub_8BB9C(v26, 100), !v27) && (sub_8BB9C(v26, 400), v28) )
          {
            if ( v19 > 2 )
              --*(_WORD *)(v3 + 40);
          }
          result = write(*(_DWORD *)(v3 + 24), &off_987B4, 3u);
          if ( result < 0 )
            result = sub_64E00(3, "leitch_send: unit %d send failed %m", *(unsigned __int8 *)(v3 + 36));
          *(_WORD *)(v3 + 52) = 2;
        }
        break;
      case 2:
        sub_4E744((unsigned __int8 *)result, *v2);
        result = sub_633D8(
                   *(__int16 *)(v3 + 40),
                   *(__int16 *)(v3 + 46),
                   *(__int16 *)(v3 + 50),
                   *(__int16 *)(v3 + 48),
                   1,
                   *(_DWORD *)(v1 + 72),
                   v3 + 104,
                   v3 + 56);
        if ( !result )
          goto LABEL_4;
        v7 = (ssize_t *)(v1 + 72);
        v8 = (__int64)&loc_7A120 + __PAIR64__(1000 * (unsigned int)*(unsigned __int16 *)(v3 + 54), 0);
        *(_DWORD *)(v3 + 60) = sub_8BFD0(v8, HIDWORD(v8), &unk_F4240, 0);
        result = *v7;
        v9 = v7[1];
        *(_DWORD *)(v3 + 80) = *v7;
        *(_DWORD *)(v3 + 84) = v9;
        *(_WORD *)(v3 + 52) = 3;
        break;
      case 3:
        sub_4E744((unsigned __int8 *)result, *v2);
        result = sub_633D8(
                   *(__int16 *)(v3 + 40),
                   *(__int16 *)(v3 + 46),
                   *(__int16 *)(v3 + 50),
                   *(__int16 *)(v3 + 48),
                   1,
                   *(_DWORD *)(v1 + 72),
                   v3 + 104,
                   v3 + 64);
        if ( !result )
          goto LABEL_4;
        v4 = (ssize_t *)(v1 + 72);
        v5 = (__int64)&loc_7A120 + __PAIR64__(1000 * (unsigned int)*(unsigned __int16 *)(v3 + 54), 0);
        *(_DWORD *)(v3 + 68) = sub_8BFD0(v5, HIDWORD(v5), &unk_F4240, 0);
        result = *v4;
        v6 = v4[1];
        *(_DWORD *)(v3 + 88) = *v4;
        *(_DWORD *)(v3 + 92) = v6;
        *(_WORD *)(v3 + 52) = 4;
        break;
      case 4:
        sub_4E744((unsigned __int8 *)result, *v2);
        result = sub_633D8(
                   *(__int16 *)(v3 + 40),
                   *(__int16 *)(v3 + 46),
                   *(__int16 *)(v3 + 50),
                   *(__int16 *)(v3 + 48),
                   0,
                   *(_DWORD *)(v1 + 72),
                   v3 + 104,
                   v3 + 72);
        if ( result )
        {
          v12 = (_DWORD *)(v1 + 72);
          v13 = (__int64)&loc_7A120 + __PAIR64__(1000 * (unsigned int)*(unsigned __int16 *)(v3 + 54), 0);
          *(_DWORD *)(v3 + 76) = sub_8BFD0(v13, HIDWORD(v13), &unk_F4240, 0);
          v14 = v12[1];
          *(_DWORD *)(v3 + 96) = *v12;
          *(_DWORD *)(v3 + 100) = v14;
          result = sub_39D44(*(_DWORD *)v3);
          *(_WORD *)(v3 + 52) = 0;
        }
        else
        {
LABEL_4:
          *(_WORD *)(v3 + 52) = result;
        }
        break;
      default:
        result = sub_64E00(
                   3,
                   "leitech_receive: invalid state %d unit %d",
                   (__int16)(*v2)[26],
                   *(unsigned __int8 *)(v3 + 36));
        break;
    }
  }
  return result;
}
