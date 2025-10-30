int __fastcall sub_5F4F4(int a1, int a2)
{
  int *v3; // r6
  int v4; // r5
  int result; // r0
  int v6; // r4
  char *v7; // r9
  int v8; // r7
  int v9; // lr
  __int64 v10; // r2
  int v11; // r8
  int v12; // r10
  int v13; // r6
  int v14; // r12
  int v15; // r5
  int v16; // r1
  int v17; // r0
  int v18; // r3
  int v19; // t1
  int v20; // t1
  int v21; // r3
  double v22; // d8
  int v23; // r3
  int v24; // r12
  int v25; // r2
  int v26; // r3
  _DWORD *v27; // r2
  int v28; // r3
  char *v29; // r3
  char *v30; // r2
  int v31; // r1
  int v32; // r4
  int v33; // r1
  int v34; // r3
  int v35; // [sp+44h] [bp-30h]
  int *v36; // [sp+48h] [bp-2Ch]
  unsigned int v37; // [sp+4Ch] [bp-28h]
  int v38; // [sp+50h] [bp-24h]
  int v39; // [sp+54h] [bp-20h]
  unsigned int v40; // [sp+58h] [bp-1Ch] BYREF
  unsigned int v41; // [sp+5Ch] [bp-18h] BYREF
  char s[12]; // [sp+60h] [bp-14h] BYREF

  v3 = *(int **)(a2 + 84);
  v4 = *v3;
  result = _stack_chk_guard;
  v6 = (*(_DWORD *)(*v3 + 912) + 1) % 60;
  *(_DWORD *)(*v3 + 912) = v6;
  if ( !v6 )
  {
    v7 = (char *)&v41 + 3;
    sub_5E6C4((Elf32_Dyn **)a2);
    v36 = *(int **)(a2 + 84);
    v8 = *v36;
    v9 = *v36 - 1;
    v39 = a2;
    v37 = (unsigned int)v3;
    v38 = v4;
    v10 = 2290649225LL * (unsigned int)(current_time + 30 - *(_DWORD *)(a2 + 704));
    v11 = *(_DWORD *)(*v36 + 1128);
    v12 = *v36 + 143;
    v35 = HIDWORD(v10) >> 5;
    do
    {
      v13 = 0;
      v14 = v9 + 160;
      v15 = 0;
      v16 = 0;
      v17 = v9;
      do
      {
        v19 = *(unsigned __int8 *)++v17;
        v18 = v19;
        v20 = *(unsigned __int8 *)++v14;
        v21 = v18 + v20;
        if ( v21 > v15 )
          v13 = v16;
        ++v16;
        if ( v21 > v15 )
          v15 = v21;
      }
      while ( v16 != 16 );
      v9 += 16;
      v6 += v15;
      if ( v11 >= v15 )
        *(_DWORD *)(v8 + 920) |= 0x40u;
      *++v7 = a0123456789abcd_0[v13];
    }
    while ( v9 != v12 );
    v22 = (double)v6;
    if ( sscanf(s, "%1x%3d%2d%2d", &v40, v36 + 48, v36 + 49, v36 + 50) != 4 )
      *(_DWORD *)(v8 + 920) |= 0x40u;
    if ( *(int *)(v8 + 1108) <= 19 )
      *(_DWORD *)(v8 + 920) |= 0x80u;
    v23 = *(_DWORD *)(v38 + 920);
    v24 = (v23 & 0x14) != 0;
    if ( (v23 & 0x28) != 0 )
      v24 = (unsigned __int8)v24 | 2;
    if ( (v23 & 0x40) != 0 )
      v24 |= 4u;
    if ( (v23 & 0x80) != 0 )
      v24 |= 8u;
    if ( (v23 & 0x200) != 0 && v22 >= 50.0 )
    {
      v23 |= 0x400u;
      *(_DWORD *)(v38 + 920) = v23;
    }
    if ( (v23 & 0x400) != 0 )
    {
      if ( (*(_DWORD *)(v38 + 1148) & 2) != 0 )
      {
        v25 = 76;
        *(_BYTE *)(v37 + 40) = 1;
        v26 = 32;
      }
      else
      {
        v34 = *(_DWORD *)(v38 + 1148) & 4;
        if ( v34 )
        {
          v25 = 108;
          *(_BYTE *)(v37 + 40) = 2;
        }
        else
        {
          *(_BYTE *)(v37 + 40) = 0;
          v25 = 32;
        }
        if ( v34 )
          v26 = 32;
        else
          v26 = v25;
      }
    }
    else
    {
      v25 = 32;
      *(_BYTE *)(v37 + 40) = 3;
      v26 = 63;
    }
    sub_6D00C(
      v37 + 56,
      128,
      "%c%1X %04d %03d %02d:%02d:%02d %c%x %+d %d %d %s %.0f %d",
      v26,
      v24,
      *(_DWORD *)(v37 + 188),
      *(_DWORD *)(v37 + 192),
      *(_DWORD *)(v37 + 196),
      *(_DWORD *)(v37 + 200),
      *(_DWORD *)(v37 + 204),
      v25,
      *(_DWORD *)(v38 + 1160),
      *(_DWORD *)(v38 + 1152),
      v35,
      *(_DWORD *)(v38 + 1144),
      (const char *)(v38 + 924),
      (double)v6,
      *(_DWORD *)(v38 + 1108));
    *(_DWORD *)(v37 + 184) = strlen((const char *)(v37 + 56));
    if ( (*(_DWORD *)(v38 + 920) & 0x4C0) == 0x400 && v22 > 50.0 )
    {
      v32 = 0;
      if ( sub_64318(
             *(_DWORD *)(v37 + 192),
             *(_DWORD *)(v37 + 196),
             *(_DWORD *)(v37 + 200),
             0,
             0,
             *(_DWORD *)(v38 + 408),
             v37 + 212,
             &v40) )
      {
        v41 = 0;
        if ( *(int *)(v38 + 1108) > 0 )
        {
          do
          {
            ++v32;
            sub_3A258(__SPAIR64__(v40, v37), v41);
          }
          while ( *(_DWORD *)(v38 + 1108) > v32 );
        }
        v33 = *(_DWORD *)(v38 + 892);
        *(_DWORD *)(v37 + 224) = *(_DWORD *)(v38 + 888);
        *(_DWORD *)(v37 + 228) = v33;
        sub_3A534(v39);
      }
      else
      {
        *(_DWORD *)(v38 + 916) = 6;
      }
    }
    if ( v22 > 0.0 )
      sub_42D0C(v39 + 16, (const char *)(v37 + 56));
    sub_5ED84((_DWORD *)v39);
    v27 = **(_DWORD ***)(v39 + 84);
    v28 = v27[230];
    result = (int)v27 + 319;
    v27[279] = 0;
    v27[230] = v28 & 0xC00;
    v29 = (char *)v27 - 1;
    v27[278] = 0;
    v27[277] = 0;
    v27[282] = 0;
    do
    {
      v30 = v29 + 16;
      do
        *++v29 = 0;
      while ( v29 != v30 );
    }
    while ( v29 != (char *)result );
    v31 = *(_DWORD *)(v38 + 916);
    if ( v31 )
      result = sub_39C88(v39, v31);
    *(_DWORD *)(v38 + 916) = 0;
  }
  return result;
}
