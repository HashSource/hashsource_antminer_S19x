ssize_t __fastcall sub_4F958(int a1)
{
  ssize_t result; // r0
  int v3; // r5
  ssize_t *v4; // r4
  __int64 v5; // d17
  ssize_t v6; // r1
  ssize_t *v7; // r4
  __int64 v8; // d17
  ssize_t v9; // r1
  __int16 v10; // r3
  __int16 v11; // r2
  unsigned int v12; // r3
  __int16 v13; // r1
  __int16 v14; // r2
  int v15; // r0
  int v16; // r4
  __int16 v17; // r1
  int i; // r1
  __int16 v19; // r2
  int v20; // r7
  unsigned int v21; // r7
  int v22; // r1
  int v23; // r1
  _DWORD *v24; // r4
  __int64 v25; // d17
  int v26; // r1

  result = *(_DWORD *)(a1 + 4);
  v3 = **(_DWORD **)(result + 84);
  if ( *(_DWORD *)(a1 + 84) == 7 )
  {
    switch ( *(_WORD *)(v3 + 52) )
    {
      case 0:
        return result;
      case 1:
        v10 = *(unsigned __int8 *)(a1 + 88) - 48;
        if ( (unsigned __int8)v10 > 9u )
          goto LABEL_32;
        v11 = *(unsigned __int8 *)(a1 + 89) - 48;
        if ( (unsigned __int8)v11 > 9u )
          goto LABEL_32;
        if ( (unsigned int)*(unsigned __int8 *)(a1 + 90) - 48 > 9 )
          goto LABEL_32;
        if ( (unsigned int)*(unsigned __int8 *)(a1 + 91) - 48 > 9 )
          goto LABEL_32;
        if ( (unsigned int)*(unsigned __int8 *)(a1 + 92) - 48 > 9 )
          goto LABEL_32;
        if ( (unsigned int)*(unsigned __int8 *)(a1 + 93) - 48 > 9 )
          goto LABEL_32;
        v12 = (unsigned __int16)(v11 + 10 * v10);
        *(_WORD *)(v3 + 38) = v12;
        v13 = *(unsigned __int8 *)(a1 + 91) - 48 + 10 * (*(unsigned __int8 *)(a1 + 90) - 48);
        *(_WORD *)(v3 + 42) = v13;
        v14 = *(unsigned __int8 *)(a1 + 92);
        v15 = *(unsigned __int8 *)(a1 + 93);
        v16 = v13;
        result = v15 - 48;
        v17 = result + 10 * (v14 - 48);
        *(_WORD *)(v3 + 44) = v17;
        if ( v16 > 12 || (result = byte_99D6C[v16 - 1], v17 > result) )
        {
LABEL_32:
          *(_WORD *)(v3 + 52) = 0;
        }
        else
        {
          *(_WORD *)(v3 + 40) = v17;
          for ( i = 0; v16 - 1 > i; ++i )
          {
            v19 = byte_99D6C[i];
            *(_WORD *)(v3 + 40) += v19;
          }
          v20 = 1900;
          if ( v12 <= 0x5A )
            v20 = 2000;
          v21 = v12 + v20;
          if ( (v21 & 3) != 0 || (sub_8D0EC(v21, 100), !v22) && (sub_8D0EC(v21, 400), v23) )
          {
            if ( v16 > 2 )
              --*(_WORD *)(v3 + 40);
          }
          result = write(*(_DWORD *)(v3 + 24), "T\r", 3u);
          if ( result < 0 )
            result = sub_65D40(3, "leitch_send: unit %d send failed %m", *(unsigned __int8 *)(v3 + 36));
          *(_WORD *)(v3 + 52) = 2;
        }
        break;
      case 2:
        sub_4F82C((unsigned __int8 *)a1, **(_WORD ***)(result + 84));
        result = sub_64318(
                   *(__int16 *)(v3 + 40),
                   *(__int16 *)(v3 + 46),
                   *(__int16 *)(v3 + 50),
                   *(__int16 *)(v3 + 48),
                   1,
                   *(_DWORD *)(a1 + 72),
                   v3 + 104,
                   v3 + 56);
        if ( !result )
          goto LABEL_4;
        v7 = (ssize_t *)(a1 + 72);
        v8 = vshld_n_s64(
               vshrd_n_s64(vdup_n_s32(1000 * (unsigned int)*(unsigned __int16 *)(v3 + 54)).n64_i64[0], 0x20u),
               0x20u);
        *(_DWORD *)(v3 + 60) = sub_8D518(
                                 (char *)sub_7A120 + v8,
                                 (v8 + (unsigned __int64)(unsigned int)sub_7A120) >> 32,
                                 &unk_F4240,
                                 0);
        result = *v7;
        v9 = v7[1];
        *(_DWORD *)(v3 + 80) = *v7;
        *(_DWORD *)(v3 + 84) = v9;
        *(_WORD *)(v3 + 52) = 3;
        break;
      case 3:
        sub_4F82C((unsigned __int8 *)a1, **(_WORD ***)(result + 84));
        result = sub_64318(
                   *(__int16 *)(v3 + 40),
                   *(__int16 *)(v3 + 46),
                   *(__int16 *)(v3 + 50),
                   *(__int16 *)(v3 + 48),
                   1,
                   *(_DWORD *)(a1 + 72),
                   v3 + 104,
                   v3 + 64);
        if ( !result )
          goto LABEL_4;
        v4 = (ssize_t *)(a1 + 72);
        v5 = vshld_n_s64(
               vshrd_n_s64(vdup_n_s32(1000 * (unsigned int)*(unsigned __int16 *)(v3 + 54)).n64_i64[0], 0x20u),
               0x20u);
        *(_DWORD *)(v3 + 68) = sub_8D518(
                                 (char *)sub_7A120 + v5,
                                 (v5 + (unsigned __int64)(unsigned int)sub_7A120) >> 32,
                                 &unk_F4240,
                                 0);
        result = *v4;
        v6 = v4[1];
        *(_DWORD *)(v3 + 88) = *v4;
        *(_DWORD *)(v3 + 92) = v6;
        *(_WORD *)(v3 + 52) = 4;
        break;
      case 4:
        sub_4F82C((unsigned __int8 *)a1, **(_WORD ***)(result + 84));
        result = sub_64318(
                   *(__int16 *)(v3 + 40),
                   *(__int16 *)(v3 + 46),
                   *(__int16 *)(v3 + 50),
                   *(__int16 *)(v3 + 48),
                   0,
                   *(_DWORD *)(a1 + 72),
                   v3 + 104,
                   v3 + 72);
        if ( result )
        {
          v24 = (_DWORD *)(a1 + 72);
          v25 = vshld_n_s64(
                  vshrd_n_s64(vdup_n_s32(1000 * (unsigned int)*(unsigned __int16 *)(v3 + 54)).n64_i64[0], 0x20u),
                  0x20u);
          *(_DWORD *)(v3 + 76) = sub_8D518(
                                   (char *)sub_7A120 + v25,
                                   (v25 + (unsigned __int64)(unsigned int)sub_7A120) >> 32,
                                   &unk_F4240,
                                   0);
          v26 = v24[1];
          *(_DWORD *)(v3 + 96) = *v24;
          *(_DWORD *)(v3 + 100) = v26;
          result = sub_3A534(*(_DWORD *)v3);
          *(_WORD *)(v3 + 52) = 0;
        }
        else
        {
LABEL_4:
          *(_WORD *)(v3 + 52) = result;
        }
        break;
      default:
        result = sub_65D40(
                   3,
                   "leitech_receive: invalid state %d unit %d",
                   *(__int16 *)(v3 + 52),
                   *(unsigned __int8 *)(v3 + 36));
        break;
    }
  }
  return result;
}
