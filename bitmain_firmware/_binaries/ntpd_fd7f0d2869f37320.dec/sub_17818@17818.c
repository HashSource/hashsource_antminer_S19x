int __fastcall sub_17818(const struct sockaddr *a1, int a2, int a3)
{
  int sa_family; // r0
  int v7; // r0
  int v8; // r5
  socklen_t v9; // r2
  int v10; // r9
  int result; // r0
  int v12; // lr
  int v13; // r12
  int v14; // r3
  int v15; // r2
  int v16; // r1
  _BYTE *v17; // r9
  char *v18; // r7
  int v19; // r10
  int *v20; // r3
  unsigned int v21; // r1
  unsigned int v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r3
  unsigned int v25; // r3
  _DWORD *v26; // r3
  char *v27; // r2
  unsigned int v28; // r0
  unsigned int v29; // t1
  unsigned int v30; // t1
  bool v31; // cc
  socklen_t len; // [sp+8h] [bp-60h] BYREF
  int v33; // [sp+Ch] [bp-5Ch] BYREF
  struct sockaddr addr; // [sp+10h] [bp-58h] BYREF
  int v35; // [sp+2Ch] [bp-3Ch]
  unsigned int v36; // [sp+30h] [bp-38h] BYREF
  int v37; // [sp+34h] [bp-34h] BYREF
  int v38; // [sp+38h] [bp-30h]
  int v39; // [sp+3Ch] [bp-2Ch]
  int v40; // [sp+40h] [bp-28h] BYREF
  int v41; // [sp+44h] [bp-24h] BYREF
  int v42; // [sp+48h] [bp-20h]
  unsigned int v43; // [sp+4Ch] [bp-1Ch] BYREF
  int v44; // [sp+50h] [bp-18h]
  int v45; // [sp+54h] [bp-14h]
  int v46; // [sp+58h] [bp-10h]
  int v47; // [sp+5Ch] [bp-Ch]
  int v48; // [sp+60h] [bp-8h]

  sa_family = a1->sa_family;
  if ( !sa_family )
    return 0;
  v7 = socket(sa_family, 2, 0);
  v8 = v7;
  if ( v7 == -1 )
    return 0;
  if ( a3 && (v33 = 1, setsockopt(v7, 1, 6, &v33, 4u) == -1)
    || (a1->sa_family != 2 ? (v9 = 28) : (v9 = 16), connect(v8, a1, v9) == -1) )
  {
    close(v8);
    return 0;
  }
  len = 28;
  v10 = getsockname(v8, &addr, &len);
  close(v8);
  if ( v10 == -1 )
    return 0;
  result = sub_177B8(&addr, a2);
  if ( !result || *(_DWORD *)(result + 180) )
  {
    v12 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v13 = ep_list;
    if ( !ep_list )
      return 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v13 + 180) )
        goto LABEL_13;
      v14 = *(unsigned __int16 *)(v13 + 140);
      if ( v14 != addr.sa_family )
        goto LABEL_13;
      v15 = *(_DWORD *)(v13 + 144) & 0x84;
      if ( v15 )
        goto LABEL_13;
      v16 = *(unsigned __int16 *)(v13 + 24);
      if ( v16 != v14 )
        sub_6FC54("ntp_io.c", 4158, 0, "((a1)->sa.sa_family) == ((a2)->sa.sa_family)");
      v36 = 0;
      v35 = (unsigned __int16)v16;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      if ( v16 != 2 )
      {
        v17 = (_BYTE *)(v13 + 32);
        v18 = &addr.sa_data[6];
        v19 = 0;
        v20 = &v37;
        while ( !v19 )
        {
          v21 = (unsigned __int8)*v18;
          v22 = (unsigned __int8)*v17;
          if ( v21 != v22 )
          {
            v15 = v21 > v22;
            if ( v21 <= v22 )
              goto LABEL_27;
LABEL_23:
            v15 = 1;
            v19 = 1;
            *(_BYTE *)v20 = v21 - v22;
            goto LABEL_24;
          }
          *(_BYTE *)v20 = 0;
LABEL_24:
          v20 = (int *)((char *)v20 + 1);
          ++v17;
          ++v18;
          if ( v20 == &v41 )
            goto LABEL_40;
        }
        LOBYTE(v22) = *v17;
        LOBYTE(v21) = *v18;
        if ( !v15 )
        {
LABEL_27:
          v19 = 1;
          *(_BYTE *)v20 = v22 - v21;
          goto LABEL_24;
        }
        goto LABEL_23;
      }
      v23 = bswap32(*(unsigned int *)&addr.sa_data[2]);
      v24 = bswap32(*(_DWORD *)(v13 + 28));
      if ( v23 <= v24 )
        v25 = v24 - v23;
      else
        v25 = v23 - v24;
      v36 = bswap32(v25);
LABEL_40:
      if ( v12 )
      {
        if ( (unsigned __int16)v42 != (unsigned __int16)v35 )
          sub_6FC54("ntp_io.c", 4209, 0, "((d1)->sa.sa_family) == ((d2)->sa.sa_family)");
        if ( (unsigned __int16)v42 == 2 )
        {
          if ( bswap32(v36) >= bswap32(v43) )
            goto LABEL_13;
        }
        else
        {
          v26 = (unsigned int *)((char *)&v36 + 3);
          v27 = (char *)&v43 + 3;
          while ( 1 )
          {
            v29 = *((unsigned __int8 *)v26 + 1);
            v26 = (_DWORD *)((char *)v26 + 1);
            v28 = v29;
            v30 = (unsigned __int8)*++v27;
            v31 = v28 > v30;
            if ( v28 < v30 )
              break;
            if ( v31 || v26 == (int *)((char *)&v40 + 3) )
              goto LABEL_13;
          }
        }
      }
      v12 = v13;
      v42 = v35;
      v43 = v36;
      v44 = v37;
      v45 = v38;
      v46 = v39;
      v47 = v40;
      v48 = v41;
LABEL_13:
      v13 = *(_DWORD *)v13;
      if ( !v13 )
      {
        if ( v12 )
        {
          if ( *(_DWORD *)(v12 + 180) )
            return 0;
          else
            return v12;
        }
        return 0;
      }
    }
  }
  return result;
}
