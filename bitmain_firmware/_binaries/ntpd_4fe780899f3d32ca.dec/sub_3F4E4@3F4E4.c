int __fastcall sub_3F4E4(int result, int a2)
{
  unsigned int v2; // r2
  struct sockaddr *v3; // r6
  int v4; // r7
  const char *v5; // r0
  unsigned int v6; // r3
  char v7; // lr
  int v8; // r4
  int v9; // r8
  int v10; // r9
  unsigned int v11; // r2
  int v12; // r11
  int v13; // r10
  int v14; // r3
  int v15; // r12
  int v16; // r10
  __int16 *i; // r7
  bool v18; // zf
  int v19; // r10
  int v20; // r0
  unsigned int v21; // r9
  int v22; // r9
  unsigned int v23; // r7
  int v24; // r8
  char v25; // r3
  int v26; // r12
  unsigned int v27; // r1
  unsigned int v28; // lr
  signed int v29; // r12
  unsigned __int64 v30; // r0
  double v31; // r0
  double v32; // d0
  int v33; // r2
  int v34; // [sp+8h] [bp-1Ch]
  __int16 *v35; // [sp+Ch] [bp-18h]
  int v36; // [sp+10h] [bp-14h]
  int v37; // [sp+10h] [bp-14h]

  v2 = *(unsigned __int8 *)(result + 88);
  v3 = (struct sockaddr *)(result + 4);
  if ( v2 >> 7 )
  {
    v4 = 1;
    goto LABEL_5;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v4 = 2;
    goto LABEL_5;
  }
  v6 = (v2 >> 3) & 7;
  if ( v6 > 4 )
  {
    v4 = 3;
  }
  else if ( v6 )
  {
    v7 = *(_BYTE *)(result + 89);
    v8 = result;
    if ( (v7 & 0x7F) != 0 )
    {
      v4 = 5;
    }
    else
    {
      result = (unsigned __int16)__rev16(*(unsigned __int16 *)(result + 92));
      if ( (unsigned __int16)result >> 12 )
      {
        v4 = 6;
      }
      else
      {
        LOWORD(v9) = __rev16(*(unsigned __int16 *)(v8 + 94));
        v10 = (unsigned __int16)v9;
        if ( !((unsigned __int16)v9 >> 12) )
        {
          v11 = *(_DWORD *)(v8 + 84);
          if ( (int)v11 <= 7 )
          {
            v4 = 8;
            goto LABEL_5;
          }
          v12 = *(unsigned __int8 *)(v8 + 90);
          v13 = *(_DWORD *)(v8 + 60);
          dword_BC920 = v6;
          v34 = v13;
          v14 = *(unsigned __int8 *)(v8 + 91);
          if ( !v12 )
            goto LABEL_17;
          if ( (unsigned int)(v12 - 2) > 1 )
          {
            v15 = 1;
            return sub_3AD58(v3, v34, v12, v14, v15);
          }
          if ( *(_BYTE *)(v8 + 91) )
          {
            v16 = 1;
            for ( i = (__int16 *)&unk_B44F0; ; v16 = i[6] )
            {
              i += 6;
              if ( v16 == -1 )
                break;
              if ( v16 == v14 )
              {
                v35 = i;
                v9 = (__int16)v9;
                v36 = i[2];
                if ( (__int16)v9 == v36 || i[3] == (__int16)v9 )
                  goto LABEL_37;
                goto LABEL_32;
              }
            }
LABEL_17:
            v15 = 2;
            return sub_3AD58(v3, v34, v12, v14, v15);
          }
          v9 = (__int16)v9;
          if ( (_WORD)v9 )
          {
            v36 = *(unsigned __int8 *)(v8 + 91);
            v35 = (__int16 *)&unk_B44F0;
LABEL_32:
            v18 = v9 == 16;
            if ( v9 == 16 )
              v18 = *(unsigned __int16 *)(v8 + 90) == 2563;
            if ( !v18 )
              goto LABEL_35;
            v9 = 16;
LABEL_37:
            if ( v36 && (unsigned int)(unsigned __int16)result * v9 > v11 - 8 )
              goto LABEL_35;
          }
          else
          {
            v35 = (__int16 *)&unk_B44F0;
          }
          dword_BCB2C = v12 == 3;
          v19 = v8 + 88;
          if ( !v35[1] || !sys_authenticate )
            return (*((int (__fastcall **)(struct sockaddr *, int, int))v35 + 2))(v3, v34, v8 + 88);
          v20 = (unsigned __int16)result * v10;
          if ( v20 + 36 <= v11 )
          {
            v21 = (v20 + 19) & 0xFFFFFFFC;
            if ( v21 + 24 < v11 )
              v22 = 20;
            else
              v22 = v11 - v21;
            v23 = v11 - v22;
            v37 = v11 - v22 - 8;
            v24 = v19 + v37;
            if ( (v7 & 0x80) == 0 || !info_auth_keyid || info_auth_keyid != bswap32(*(_DWORD *)(v24 + 8)) )
            {
              v15 = 7;
              return sub_3AD58(v3, v34, v12, v14, v15);
            }
            if ( v11 > 0xD8 )
            {
              sub_64E00(3, "process_private: bad pkt length %zu", v11);
              v25 = *(_BYTE *)(v8 + 91);
              v26 = 3;
              return sub_3AD58(v3, v34, *(_BYTE *)(v8 + 90), v25, v26);
            }
            if ( !a2 )
            {
              ++sys_restricted;
              return sub_3AD58(v3, v34, *(_BYTE *)(v8 + 90), v14, 7);
            }
            if ( !sub_6204C() )
            {
              LOBYTE(v14) = *(_BYTE *)(v8 + 91);
              return sub_3AD58(v3, v34, *(_BYTE *)(v8 + 90), v14, 7);
            }
            v27 = *(_DWORD *)(v8 + 76);
            v28 = bswap32(*(_DWORD *)(v24 + 4));
            v29 = bswap32(*(_DWORD *)(v19 + v37)) - *(_DWORD *)(v8 + 72);
            if ( v28 < v27 )
              --v29;
            v30 = __PAIR64__(v29, 0) + v28 - v27;
            if ( v29 < 0 )
              v30 = -(__int64)v30;
            v31 = COERCE_DOUBLE(sub_8BEC4(v30, HIDWORD(v30)));
            v32 = v31;
            LODWORD(v31) = -32;
            ldexp(v31, v33);
            if ( v32 > 10.0 || !sub_62854(info_auth_keyid, v8 + 88, v23, v22) )
            {
              v25 = *(_BYTE *)(v8 + 91);
              v26 = 7;
              return sub_3AD58(v3, v34, *(_BYTE *)(v8 + 90), v25, v26);
            }
            return (*((int (__fastcall **)(struct sockaddr *, int, int))v35 + 2))(v3, v34, v8 + 88);
          }
LABEL_35:
          v15 = 3;
          return sub_3AD58(v3, v34, v12, v14, v15);
        }
        v4 = 7;
      }
    }
  }
  else
  {
    v4 = 4;
  }
LABEL_5:
  if ( (ntp_syslogmask & 2) != 0 && current_time >= (unsigned int)dword_BCB30 )
  {
    v5 = (const char *)sub_6C2E8(v3);
    result = sub_64E00(3, "process_private: drop test %d failed, pkt from %s", v4, v5);
    dword_BCB30 = current_time + 60;
  }
  return result;
}
