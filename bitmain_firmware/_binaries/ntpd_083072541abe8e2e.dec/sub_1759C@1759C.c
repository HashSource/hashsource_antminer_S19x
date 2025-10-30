char *__fastcall sub_1759C(const struct sockaddr *a1, int a2, int a3)
{
  _BYTE *v3; // r11
  int sa_family; // r0
  int v8; // r0
  int v9; // r5
  socklen_t v10; // r2
  int v11; // r9
  char *v12; // r0
  char *v13; // lr
  int v14; // r12
  int v15; // r3
  int v16; // r2
  int v17; // r1
  bool v18; // zf
  unsigned int v19; // r10
  unsigned int v20; // t1
  char v21; // r3
  unsigned int v22; // t1
  bool v23; // cc
  char *v24; // r1
  char v25; // t1
  char v26; // t1
  char v27; // r3
  _BYTE *v28; // r10
  _BYTE *v29; // r3
  char *v30; // r2
  char *v31; // t1
  unsigned int v32; // t1
  bool v33; // cc
  unsigned int v35; // r2
  unsigned int v36; // r3
  unsigned int v37; // r3
  socklen_t len; // [sp+8h] [bp-64h] BYREF
  int v39; // [sp+Ch] [bp-60h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-5Ch] BYREF
  _BYTE v41[28]; // [sp+2Ch] [bp-40h] BYREF
  __int64 v42; // [sp+48h] [bp-24h] BYREF
  __int64 v43; // [sp+50h] [bp-1Ch]
  int v44; // [sp+58h] [bp-14h]
  int v45; // [sp+5Ch] [bp-10h]
  int v46; // [sp+60h] [bp-Ch]

  sa_family = a1->sa_family;
  if ( !sa_family )
    return 0;
  v8 = socket(sa_family, 2, 0);
  v9 = v8;
  if ( v8 == -1 )
    return 0;
  if ( a3 && (v39 = 1, setsockopt(v8, 1, 6, &v39, 4u) == -1)
    || (a1->sa_family == 2 ? (v10 = 16) : (v10 = 28), connect(v9, a1, v10) == -1) )
  {
    close(v9);
    return 0;
  }
  len = 28;
  v11 = getsockname(v9, &addr, &len);
  close(v9);
  if ( v11 == -1 )
    return 0;
  v12 = (char *)sub_1753C(&addr, a2);
  v13 = v12;
  if ( !v12 || *((_DWORD *)v12 + 45) )
  {
    v13 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v14 = ep_list;
    if ( !ep_list )
      return 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v14 + 180) )
        goto LABEL_40;
      v15 = *(unsigned __int16 *)(v14 + 140);
      if ( v15 != addr.sa_family )
        goto LABEL_40;
      v16 = *(_DWORD *)(v14 + 144) & 0x84;
      if ( v16 )
        goto LABEL_40;
      v17 = *(unsigned __int16 *)(v14 + 24);
      if ( v17 != v15 )
        sub_6ECC0("ntp_io.c", 4158, 0, "((a1)->sa.sa_family) == ((a2)->sa.sa_family)");
      v18 = v17 == 2;
      *(_WORD *)v41 = *(_WORD *)(v14 + 24);
      *(_DWORD *)&v41[2] = 0;
      if ( v17 != 2 )
        v12 = &addr.sa_data[5];
      *(_DWORD *)&v41[6] = 0;
      if ( v17 != 2 )
        v17 = v14 + 31;
      *(_DWORD *)&v41[10] = 0;
      if ( !v18 )
        v3 = &v41[7];
      memset(&v41[14], 0, 14);
      if ( v18 )
      {
        v35 = bswap32(*(unsigned int *)&addr.sa_data[2]);
        v36 = bswap32(*(_DWORD *)(v14 + 28));
        if ( v35 <= v36 )
          v37 = v36 - v35;
        else
          v37 = v35 - v36;
        *(_DWORD *)&v41[4] = bswap32(v37);
      }
      else
      {
        while ( 1 )
        {
          v20 = (unsigned __int8)*++v12;
          v19 = v20;
          v22 = *(unsigned __int8 *)++v17;
          v21 = v22;
          v23 = v19 > v22;
          if ( v19 != v22 )
            break;
          ++v16;
          *++v3 = 0;
          if ( v16 == 16 )
            goto LABEL_32;
        }
        v12 = (char *)(v14 + v16 + 33);
        v24 = &addr.sa_data[v16 + 6];
        v3 = (_BYTE *)v23;
        while ( 1 )
        {
          v27 = v3 ? v19 - v21 : v21 - v19;
          v28 = &v41[v16++];
          v28[8] = v27;
          if ( v16 > 15 )
            break;
          v25 = *v12++;
          v21 = v25;
          v26 = *++v24;
          LOBYTE(v19) = v26;
        }
      }
LABEL_32:
      if ( !v13 )
        goto LABEL_50;
      if ( (unsigned __int16)v42 != *(unsigned __int16 *)v41 )
        sub_6ECC0("ntp_io.c", 4209, 0, "((d1)->sa.sa_family) == ((d2)->sa.sa_family)");
      if ( (unsigned __int16)v42 != 2 )
      {
        v29 = &v41[7];
        v30 = (char *)&v42 + 7;
        while ( 1 )
        {
          v31 = (char *)(unsigned __int8)*++v29;
          v12 = v31;
          v32 = (unsigned __int8)*++v30;
          v33 = (unsigned int)v12 > v32;
          if ( (unsigned int)v12 < v32 )
            goto LABEL_50;
          if ( v33 || v29 == &v41[23] )
            goto LABEL_40;
        }
      }
      if ( bswap32(*(unsigned int *)&v41[4]) >= bswap32(HIDWORD(v42)) )
      {
LABEL_40:
        v14 = *(_DWORD *)v14;
        if ( !v14 )
          goto LABEL_41;
      }
      else
      {
LABEL_50:
        v3 = &v41[16];
        v13 = (char *)v14;
        v14 = *(_DWORD *)v14;
        v42 = *(_QWORD *)v41;
        v43 = *(_QWORD *)&v41[8];
        v12 = *(char **)&v41[16];
        v44 = *(_DWORD *)&v41[16];
        v45 = *(_DWORD *)&v41[20];
        v46 = *(_DWORD *)&v41[24];
        if ( !v14 )
        {
LABEL_41:
          if ( v13 && !*((_DWORD *)v13 + 45) )
            return v13;
          return 0;
        }
      }
    }
  }
  return v13;
}
