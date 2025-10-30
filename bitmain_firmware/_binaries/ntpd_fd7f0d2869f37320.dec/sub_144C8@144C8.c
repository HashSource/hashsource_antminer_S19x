int __fastcall sub_144C8(int a1)
{
  int v1; // r9
  int result; // r0
  int *v4; // r2
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r3
  int v9; // r9
  int v10; // r5
  int v11; // r10
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r1
  _BOOL4 v16; // r2
  int v17; // r1
  int v18; // r3
  int *v19; // r1
  int v20; // r3
  int v21; // r4
  int v22; // r3
  int v23; // r3
  _DWORD *v24; // r11
  int *v25; // r1
  _DWORD *v26; // r12
  int v27; // lr
  int *v28; // lr
  int *v29; // r1
  _DWORD *v30; // r0
  int v31; // r11
  int v32; // r3
  int v33; // t1
  int v34; // t1
  int v35; // r2
  _BOOL4 v36; // [sp+10h] [bp-2Ch]
  int *v37; // [sp+14h] [bp-28h]
  int v38; // [sp+18h] [bp-24h]
  int v39; // [sp+20h] [bp-1Ch]
  int v40; // [sp+24h] [bp-18h]
  int v41; // [sp+2Ch] [bp-10h]

  v1 = a1 + 24;
  result = sub_61720(a1 + 24);
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
    v37 = &mc4_list;
    goto LABEL_12;
  }
  v7 = mc6_list;
  if ( v6 != 10 )
  {
    v37 = &mc6_list;
LABEL_12:
    if ( !v7 )
    {
      v8 = *v37;
LABEL_73:
      *(_DWORD *)(a1 + 4) = v8;
      *v37 = a1;
      goto LABEL_47;
    }
    v38 = 0;
    v39 = 0;
    v36 = 0;
    goto LABEL_15;
  }
  v38 = (*(_DWORD *)(a1 + 144) >> 9) & 1;
  v39 = (*(unsigned __int8 *)(a1 + 40) >> 1) & 1;
  v36 = (*(_DWORD *)(a1 + 32) & 0x80FF) == 33022;
  if ( !mc6_list )
  {
    v8 = (*(_DWORD *)(a1 + 32) & 0x80FF) == 33022;
    v37 = &mc6_list;
    if ( (*(_DWORD *)(a1 + 32) & 0x80FF) == 0x80FE )
      goto LABEL_46;
    goto LABEL_73;
  }
  v37 = &mc6_list;
LABEL_15:
  v40 = v1;
  v9 = !v36;
  do
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v7 + 4);
      if ( *(unsigned __int16 *)(v7 + 140) != v6 )
        goto LABEL_16;
      v11 = strcmp((const char *)(a1 + 108), (const char *)(v7 + 108));
      if ( v11 )
        goto LABEL_16;
      v12 = *(unsigned __int16 *)(a1 + 52);
      if ( v12 != *(unsigned __int16 *)(a1 + 24) )
        sub_6FC54("ntp_io.c", 699, 0, "((a)->sa.sa_family) == ((a_mask)->sa.sa_family)");
      v13 = *(unsigned __int16 *)(v7 + 52);
      if ( v13 != *(unsigned __int16 *)(v7 + 24) )
        sub_6FC54("ntp_io.c", 700, 0, "((b)->sa.sa_family) == ((b_mask)->sa.sa_family)");
      if ( v12 != v13 )
        goto LABEL_22;
      if ( v12 == 2 )
      {
        if ( *(_DWORD *)(a1 + 56) != *(_DWORD *)(v7 + 56) )
          goto LABEL_22;
LABEL_65:
        v25 = (int *)(a1 + 28);
        v26 = (_DWORD *)(v7 + 28);
        v24 = (_DWORD *)(a1 + 56);
        v27 = 1;
        goto LABEL_66;
      }
      v24 = (_DWORD *)(a1 + 60);
      v41 = *(unsigned __int16 *)(a1 + 52);
      if ( memcmp((const void *)(a1 + 60), (const void *)(v7 + 60), 0x10u)
        || *(_DWORD *)(a1 + 76) != *(_DWORD *)(v7 + 76) )
      {
        goto LABEL_22;
      }
      if ( v41 != 10 )
        goto LABEL_65;
      v25 = (int *)(a1 + 32);
      v26 = (_DWORD *)(v7 + 32);
      v27 = 4;
LABEL_66:
      v28 = &v25[v27];
      if ( v25 < v28 )
      {
        if ( ((*v25 ^ *v26) & *v24) != 0 )
          goto LABEL_22;
        v29 = v25 + 1;
        v30 = v24;
        while ( v29 < v28 )
        {
          v31 = *v29++;
          v33 = v26[1];
          ++v26;
          v32 = v33;
          v34 = v30[1];
          ++v30;
          if ( ((v32 ^ v31) & v34) != 0 )
            goto LABEL_22;
        }
      }
      v11 = 1;
LABEL_22:
      if ( v6 == 10 )
      {
        v15 = (*(unsigned __int8 *)(v7 + 40) >> 1) & 1;
        v14 = (*(_DWORD *)(v7 + 144) >> 9) & 1;
        v16 = (*(_DWORD *)(v7 + 32) & 0x80FF) == 33022;
        result = (*(_DWORD *)(v7 + 32) & 0x80FF) != 33022;
      }
      else
      {
        v14 = 0;
        result = 1;
        v15 = 0;
        v16 = 0;
      }
      if ( (result & v36) != 0 )
        return result;
      if ( v11 )
        break;
      if ( (v16 & v9) != 0 )
        goto LABEL_31;
LABEL_16:
      v7 = v10;
      if ( !v10 )
        goto LABEL_40;
    }
    result = v14 ^ 1;
    if ( ((v14 ^ 1) & v38) != 0 )
      return result;
    result = v39 ^ 1;
    if ( (v15 & (v39 ^ 1)) != 0 )
      return result;
    if ( (v16 & v9) == 0 && (v14 & (v38 ^ 1)) == 0 && ((v15 ^ 1) & v39) == 0 )
      goto LABEL_16;
LABEL_31:
    v17 = *v37;
    if ( *v37 == v7 )
    {
      v19 = v37;
    }
    else
    {
      if ( !v17 )
        goto LABEL_16;
      v18 = *(_DWORD *)(v17 + 4);
      if ( !v18 )
        goto LABEL_16;
      while ( v18 != v7 )
      {
        v17 = v18;
        if ( !*(_DWORD *)(v18 + 4) )
          goto LABEL_16;
        v18 = *(_DWORD *)(v18 + 4);
      }
      v19 = (int *)(v17 + 4);
    }
    *v19 = v10;
    v7 = v10;
  }
  while ( v10 );
LABEL_40:
  v1 = v40;
  v8 = *v37;
  if ( !v36 )
    goto LABEL_73;
  if ( v8 )
  {
    while ( *(_DWORD *)(v8 + 4) )
      v8 = *(_DWORD *)(v8 + 4);
    v37 = (int *)(v8 + 4);
  }
LABEL_46:
  *(_DWORD *)(a1 + 4) = 0;
  *v37 = a1;
LABEL_47:
  result = *(_DWORD *)(a1 + 12);
  if ( result != -1 )
  {
    v20 = *(unsigned __int16 *)(a1 + 24);
    if ( v20 == 2 )
    {
      result = setsockopt(result, 0, 32, (const void *)(a1 + 28), 4u);
      if ( result )
      {
        v35 = sub_6D2C0(v1);
        return sub_65D40(3, "setsockopt IP_MULTICAST_IF %s fails: %m", v35);
      }
    }
    else if ( v20 == 10 )
    {
      result = setsockopt(result, 41, 17, (const void *)(a1 + 176), 4u);
      if ( result )
      {
        v21 = *(_DWORD *)(a1 + 176);
        if ( *(_WORD *)(a1 + 24) == 2 )
          v22 = 0;
        else
          v22 = *(_DWORD *)(a1 + 48);
        if ( v21 != v22 )
        {
          v23 = sub_6D2C0(v1);
          return sub_65D40(3, "setsockopt IPV6_MULTICAST_IF %u for %s fails: %m", v21, v23);
        }
      }
    }
  }
  return result;
}
