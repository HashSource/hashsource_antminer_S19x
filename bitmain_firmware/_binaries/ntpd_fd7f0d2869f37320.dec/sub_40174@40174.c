unsigned int __fastcall sub_40174(int a1, int a2)
{
  unsigned int result; // r0
  unsigned int v4; // r2
  int v5; // r7
  int v6; // r7
  unsigned int v7; // r3
  char v8; // lr
  unsigned int v9; // r9
  int v10; // r11
  int v11; // r10
  __int16 *v12; // r8
  int v13; // r10
  int v14; // t1
  const char *v15; // r0
  int v16; // r3
  bool v17; // zf
  char v18; // r3
  char v19; // r2
  int v20; // r8
  int v21; // r0
  unsigned int v22; // r10
  int v23; // r10
  int v24; // lr
  unsigned int v25; // r0
  unsigned int v26; // r12
  unsigned int v27; // r9
  unsigned __int64 v28; // r0
  double v29; // r0
  double v30; // d0
  int v31; // r2
  int v32; // [sp+8h] [bp-24h]
  unsigned __int64 v33; // [sp+8h] [bp-24h]
  __int16 *v34; // [sp+10h] [bp-1Ch]
  unsigned int v35; // [sp+14h] [bp-18h]
  int v36; // [sp+18h] [bp-14h]

  result = *(unsigned __int8 *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 84);
  v5 = *(_DWORD *)(a1 + 60);
  if ( (result & 0x80) != 0 )
  {
    v6 = 1;
  }
  else
  {
    if ( (result & 0x40) != 0 )
    {
      v6 = 2;
      goto LABEL_4;
    }
    v7 = (result >> 3) & 7;
    if ( v7 > 4 )
    {
      v6 = 3;
    }
    else if ( v7 )
    {
      v8 = *(_BYTE *)(a1 + 89);
      if ( (v8 & 0x7F) != 0 )
      {
        v6 = 5;
      }
      else
      {
        result = (unsigned __int16)(HIBYTE(*(_WORD *)(a1 + 92)) | (*(_WORD *)(a1 + 92) << 8));
        if ( result >> 12 )
        {
          v6 = 6;
        }
        else
        {
          v9 = (unsigned __int16)(HIBYTE(*(_WORD *)(a1 + 94)) | (*(_WORD *)(a1 + 94) << 8));
          if ( !(v9 >> 12) )
          {
            if ( (int)v4 <= 7 )
            {
              v6 = 8;
              goto LABEL_4;
            }
            v10 = *(unsigned __int8 *)(a1 + 90);
            dword_BD934 = v7;
            if ( v10 )
            {
              if ( (unsigned int)(v10 - 2) > 1 )
                return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v10, *(_BYTE *)(a1 + 91), 1);
              v34 = &word_B54F0;
            }
            else
            {
              v34 = &word_97E20;
            }
            v11 = *v34;
            v32 = *(unsigned __int8 *)(a1 + 91);
            if ( v11 == -1 )
              return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v10, v32, 2);
            if ( v11 != *(unsigned __int8 *)(a1 + 91) )
            {
              v12 = v34;
              while ( 1 )
              {
                v14 = v12[6];
                v12 += 6;
                v13 = v14;
                if ( v14 == -1 )
                  return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v10, v32, 2);
                if ( v32 == v13 )
                {
                  v34 = v12;
                  break;
                }
              }
            }
            if ( (unsigned __int16)v34[2] != v9 && v34[3] != (__int16)v9 )
            {
              v16 = *(unsigned __int16 *)(a1 + 90);
              v17 = v16 == 2563;
              if ( v16 == 2563 )
                v17 = (__int16)v9 == 16;
              if ( !v17 )
                goto LABEL_38;
            }
            if ( v34[2] && result * v9 > v4 - 8 )
              goto LABEL_38;
            if ( v10 == 2 )
            {
              dword_BDB40 = 0;
            }
            else
            {
              if ( v10 != 3 )
                goto LABEL_38;
              dword_BDB40 = 1;
            }
            v20 = a1 + 88;
            if ( !v34[1] || !sys_authenticate )
              return (*((int (__fastcall **)(int, int, int))v34 + 2))(a1 + 4, v5, a1 + 88);
            v21 = result * v9;
            if ( v4 >= v21 + 36 )
            {
              v22 = (v21 + 19) & 0xFFFFFFFC;
              if ( v4 > v22 + 24 )
                v23 = 20;
              else
                v23 = v4 - v22;
              if ( (v8 & 0x80) == 0 )
                return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v10, v32, 7);
              if ( !info_auth_keyid )
                return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v10, v32, 7);
              v35 = v4 - v23;
              v36 = v4 - v23 - 8;
              if ( info_auth_keyid != bswap32(*(_DWORD *)(v20 + v4 - v23)) )
                return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v10, v32, 7);
              if ( v4 <= 0xD8 )
              {
                if ( !a2 )
                {
                  ++sys_restricted;
                  return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, *(_BYTE *)(a1 + 90), *(_BYTE *)(a1 + 91), 7);
                }
                if ( !sub_62F54() )
                  return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, *(_BYTE *)(a1 + 90), *(_BYTE *)(a1 + 91), 7);
                v24 = *(_DWORD *)(a1 + 76);
                v25 = bswap32(*(_DWORD *)(v20 + v36 + 4));
                v26 = bswap32(*(_DWORD *)(v20 + v36)) - *(_DWORD *)(a1 + 72);
                if ( v25 - v24 > v25 )
                  --v26;
                v27 = v26 >> 31;
                v33 = vshrd_n_u64(vdup_n_s32(v26 >> 31).n64_u64[0], 0x20u);
                v28 = v33 + (-(__int64)v33 ^ (__PAIR64__(v26, 0) + v25 - v24));
                v29 = COERCE_DOUBLE(sub_8D40C(v28, HIDWORD(v28)));
                v30 = v29;
                LODWORD(v29) = -32;
                ldexp(v29, v31);
                if ( v27 )
                  v30 = -v30;
                if ( fabs(v30) > 10.0 || !sub_63770(info_auth_keyid, a1 + 88, v35, v23) )
                  return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, *(_BYTE *)(a1 + 90), *(_BYTE *)(a1 + 91), 7);
                return (*((int (__fastcall **)(int, int, int))v34 + 2))(a1 + 4, v5, a1 + 88);
              }
              sub_65D40(3, "process_private: bad pkt length %zu", v4);
              v18 = *(_BYTE *)(a1 + 91);
              v19 = *(_BYTE *)(a1 + 90);
              return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v19, v18, 3);
            }
LABEL_38:
            v18 = v32;
            v19 = v10;
            return sub_3B5D8((struct sockaddr *)(a1 + 4), v5, v19, v18, 3);
          }
          v6 = 7;
        }
      }
    }
    else
    {
      v6 = 4;
    }
  }
LABEL_4:
  if ( (ntp_syslogmask & 2) != 0 && current_time >= (unsigned int)dword_BDB44 )
  {
    v15 = (const char *)sub_6D2C0(a1 + 4);
    result = sub_65D40(3, "process_private: drop test %d failed, pkt from %s", v6, v15);
    dword_BDB44 = current_time + 60;
  }
  return result;
}
