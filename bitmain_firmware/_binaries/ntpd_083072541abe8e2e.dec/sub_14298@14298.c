int __fastcall sub_14298(int a1)
{
  int v1; // r8
  int result; // r0
  int *v4; // r2
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r8
  int v9; // r5
  int v10; // r10
  int v11; // r3
  int v12; // r2
  _BOOL4 v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r1
  int v17; // r3
  int *v18; // r1
  int v19; // r3
  int v20; // r4
  int v21; // r3
  int v22; // r3
  _DWORD *v23; // r11
  unsigned int v24; // r0
  _DWORD *v25; // r1
  int v26; // r3
  unsigned int v27; // r3
  _DWORD *v28; // r12
  int v29; // r3
  int v30; // t1
  int v31; // lr
  int v32; // t1
  int v33; // t1
  int v34; // r3
  int v35; // r2
  _BOOL4 v36; // [sp+10h] [bp-2Ch]
  int *v37; // [sp+14h] [bp-28h]
  int v38; // [sp+18h] [bp-24h]
  int v39; // [sp+20h] [bp-1Ch]
  int v40; // [sp+28h] [bp-14h]
  int v41; // [sp+2Ch] [bp-10h]

  v1 = a1 + 24;
  result = sub_6083C(a1 + 24);
  *(_DWORD *)(a1 + 152) = result;
  v4 = (int *)ep_list;
  if ( ep_list )
  {
    while ( *v4 )
      v4 = (int *)*v4;
  }
  else
  {
    v4 = &ep_list;
  }
  *(_DWORD *)a1 = 0;
  *v4 = a1;
  v5 = *(_DWORD *)(a1 + 180);
  ++ninterfaces;
  if ( v5 || (*(_DWORD *)(a1 + 144) & 0x14) != 0x10 )
    return result;
  v6 = *(unsigned __int16 *)(a1 + 140);
  if ( v6 == 2 )
  {
    v7 = mc4_list;
    if ( !mc4_list )
    {
      v37 = &mc4_list;
      goto LABEL_79;
    }
    v38 = 0;
    v37 = &mc4_list;
    v39 = 0;
    v36 = 0;
    goto LABEL_12;
  }
  v7 = mc6_list;
  if ( v6 == 10 )
  {
    v38 = (*(_DWORD *)(a1 + 144) >> 9) & 1;
    v34 = *(_DWORD *)(a1 + 32) & 0x80FF;
    v36 = v34 == 33022;
    v39 = (*(unsigned __int8 *)(a1 + 40) >> 1) & 1;
    if ( mc6_list )
    {
      v37 = &mc6_list;
      goto LABEL_12;
    }
    if ( v34 == 33022 )
    {
      v37 = &mc6_list;
      goto LABEL_45;
    }
LABEL_78:
    v37 = &mc6_list;
    goto LABEL_79;
  }
  if ( !mc6_list )
    goto LABEL_78;
  v39 = 0;
  v37 = &mc6_list;
  v38 = 0;
  v36 = 0;
LABEL_12:
  v41 = v1;
  v8 = !v36;
  do
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      if ( *(unsigned __int16 *)(v7 + 140) != v6 )
        goto LABEL_18;
      v10 = strcmp((const char *)(a1 + 108), (const char *)(v7 + 108));
      if ( v10 )
        goto LABEL_18;
      v11 = *(unsigned __int16 *)(a1 + 52);
      if ( v11 != *(unsigned __int16 *)(a1 + 24) )
        sub_6ECC0("ntp_io.c", 699, 0, "((a)->sa.sa_family) == ((a_mask)->sa.sa_family)");
      v12 = *(unsigned __int16 *)(v7 + 52);
      if ( v12 != *(unsigned __int16 *)(v7 + 24) )
        sub_6ECC0("ntp_io.c", 700, 0, "((b)->sa.sa_family) == ((b_mask)->sa.sa_family)");
      if ( v11 != v12 )
      {
LABEL_24:
        result = 0;
        goto LABEL_25;
      }
      if ( v11 == 2 )
      {
        if ( *(_DWORD *)(a1 + 56) != *(_DWORD *)(v7 + 56) )
          goto LABEL_24;
LABEL_73:
        v24 = a1 + 28;
        v25 = (_DWORD *)(v7 + 28);
        v23 = (_DWORD *)(a1 + 56);
        v26 = 4;
        goto LABEL_63;
      }
      v23 = (_DWORD *)(a1 + 60);
      v40 = *(unsigned __int16 *)(a1 + 52);
      result = memcmp((const void *)(a1 + 60), (const void *)(v7 + 60), 0x10u);
      if ( result )
        goto LABEL_24;
      if ( *(_DWORD *)(a1 + 76) != *(_DWORD *)(v7 + 76) )
        goto LABEL_25;
      if ( v40 != 10 )
        goto LABEL_73;
      v24 = a1 + 32;
      v25 = (_DWORD *)(v7 + 32);
      v26 = 16;
LABEL_63:
      v27 = v24 + v26;
      if ( v24 < v27 )
      {
        if ( ((*v25 ^ *(_DWORD *)v24) & *v23) != 0 )
          goto LABEL_24;
        v28 = (_DWORD *)((char *)v25 + ((~v24 + v27) & 0xFFFFFFFC));
        while ( v28 != v25 )
        {
          v30 = *(_DWORD *)(v24 + 4);
          v24 += 4;
          v29 = v30;
          v32 = v25[1];
          ++v25;
          v31 = v32;
          v33 = v23[1];
          ++v23;
          if ( ((v29 ^ v31) & v33) != 0 )
            goto LABEL_24;
        }
      }
      result = 1;
LABEL_25:
      if ( v6 == 10 )
      {
        v15 = (*(unsigned __int8 *)(v7 + 40) >> 1) & 1;
        v14 = (*(_DWORD *)(v7 + 144) >> 9) & 1;
        v13 = v36;
        v10 = (*(_WORD *)(v7 + 32) & 0x80FF) == 33022;
        if ( (*(_WORD *)(v7 + 32) & 0x80FF) == 0x80FE )
          v13 = 0;
      }
      else
      {
        v13 = v36;
        v14 = 0;
        v15 = 0;
      }
      if ( v13 )
        return result;
      if ( result )
        break;
      if ( (v8 & v10) != 0 )
        goto LABEL_30;
LABEL_18:
      v7 = v9;
      if ( !v9 )
        goto LABEL_39;
    }
    result = v38;
    if ( ((v14 ^ 1) & v38) != 0 || ((v39 ^ 1) & v15) != 0 )
      return result;
    if ( (v8 & v10) == 0 && ((v38 ^ 1) & v14) == 0 && ((v15 ^ 1) & v39) == 0 )
      goto LABEL_18;
LABEL_30:
    v16 = *v37;
    if ( *v37 == v7 )
    {
      v17 = v7;
      v18 = v37;
    }
    else
    {
      if ( !v16 )
        goto LABEL_18;
      v17 = *(_DWORD *)(v16 + 4);
      if ( !v17 )
        goto LABEL_18;
      while ( v17 != v7 )
      {
        v16 = v17;
        if ( !*(_DWORD *)(v17 + 4) )
          goto LABEL_18;
        v17 = *(_DWORD *)(v17 + 4);
      }
      v18 = (int *)(v16 + 4);
    }
    v7 = v9;
    *v18 = *(_DWORD *)(v17 + 4);
  }
  while ( v9 );
LABEL_39:
  v1 = v41;
  v7 = *v37;
  if ( !v36 )
  {
LABEL_79:
    *(_DWORD *)(a1 + 4) = v7;
    *v37 = a1;
    goto LABEL_46;
  }
  if ( v7 )
  {
    while ( *(_DWORD *)(v7 + 4) )
      v7 = *(_DWORD *)(v7 + 4);
    v37 = (int *)(v7 + 4);
  }
LABEL_45:
  *(_DWORD *)(a1 + 4) = 0;
  *v37 = a1;
LABEL_46:
  result = *(_DWORD *)(a1 + 12);
  if ( result != -1 )
  {
    v19 = *(unsigned __int16 *)(a1 + 24);
    if ( v19 == 2 )
    {
      result = setsockopt(result, 0, 32, (const void *)(a1 + 28), 4u);
      if ( result )
      {
        v35 = sub_6C2E8(v1);
        return sub_64E00(3, "setsockopt IP_MULTICAST_IF %s fails: %m", v35);
      }
    }
    else if ( v19 == 10 )
    {
      result = setsockopt(result, 41, 17, (const void *)(a1 + 176), 4u);
      if ( result )
      {
        v20 = *(_DWORD *)(a1 + 176);
        if ( *(_WORD *)(a1 + 24) == 2 )
          v21 = 0;
        else
          v21 = *(_DWORD *)(a1 + 48);
        if ( v20 != v21 )
        {
          v22 = sub_6C2E8(v1);
          return sub_64E00(3, "setsockopt IPV6_MULTICAST_IF %u for %s fails: %m", v20, v22);
        }
      }
    }
  }
  return result;
}
