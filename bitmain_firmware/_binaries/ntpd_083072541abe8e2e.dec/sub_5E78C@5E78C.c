__int16 *__fastcall sub_5E78C(int a1, int a2)
{
  int *v2; // r7
  int v3; // r6
  int v4; // r1
  __int16 *result; // r0
  int v6; // r4
  char *v7; // r9
  int v8; // r5
  int v9; // r8
  int v10; // lr
  int v11; // r7
  int v12; // r10
  int v13; // r0
  unsigned __int8 *v14; // r4
  int v15; // r1
  int v16; // r2
  int v17; // r12
  int v18; // r6
  int v19; // t1
  int v20; // t1
  int v21; // r3
  bool v22; // cc
  int v23; // r4
  int v24; // r0
  int v25; // r2
  int v26; // r3
  double v27; // d8
  int v28; // r3
  int v29; // r12
  int v30; // r3
  size_t v31; // r0
  int v32; // r3
  _DWORD *v33; // r3
  int v34; // r12
  __int16 *v35; // r3
  char *v36; // r2
  int v37; // r1
  int v38; // r3
  int v39; // r1
  bool v40; // zf
  int v41; // r3
  unsigned int v43; // [sp+48h] [bp-34h]
  int *v44; // [sp+4Ch] [bp-30h]
  int *v45; // [sp+54h] [bp-28h]
  int v46; // [sp+58h] [bp-24h]
  int v47; // [sp+5Ch] [bp-20h]
  int v48; // [sp+60h] [bp-1Ch] BYREF
  unsigned int v49; // [sp+64h] [bp-18h]
  char v50[12]; // [sp+68h] [bp-14h] BYREF

  v2 = *(int **)(a2 + 84);
  v3 = *v2;
  v4 = *(_DWORD *)(*v2 + 912) + 1;
  result = (__int16 *)_stack_chk_guard;
  v6 = v4 % 60;
  *(_DWORD *)(*v2 + 912) = v4 % 60;
  if ( v4 != 60 * (v4 / 60) )
    return result;
  v7 = v50;
  v8 = v4 % 60;
  sub_5D924((Elf32_Dyn **)a2);
  v44 = *(int **)(a2 + 84);
  v9 = *v44;
  v45 = v2;
  v10 = *v44 - 1;
  v11 = *(_DWORD *)(*v44 + 1128);
  v12 = *v44 + 143;
  v46 = v3;
  v47 = v6;
  v43 = (current_time + 30 - *(_DWORD *)(a2 + 704)) / 0x3Cu;
  do
  {
    v13 = 0;
    v14 = (unsigned __int8 *)(v10 + 161);
    v15 = 0;
    v16 = 0;
    v17 = v10;
    do
    {
      v19 = *v14++;
      v18 = v19;
      v20 = *(unsigned __int8 *)++v17;
      v21 = v20 + v18;
      v22 = v20 + v18 <= v15;
      if ( v20 + v18 > v15 )
        v18 = v16;
      ++v16;
      if ( v22 )
      {
        v18 = v13;
        v21 = v15;
      }
      v13 = v18;
      v15 = v21;
    }
    while ( v16 != 16 );
    v10 += 16;
    if ( v11 >= v21 )
      v16 = *(_DWORD *)(v9 + 920);
    v8 += v21;
    if ( v11 >= v21 )
      *(_DWORD *)(v9 + 920) = v16 | 0x40;
    *v7++ = a0123456789abcd[v18];
  }
  while ( v10 != v12 );
  v23 = v47;
  v24 = sscanf(v50, "%1x%3d%2d%2d", &v48, v44 + 48, v44 + 49, v44 + 50);
  if ( v24 != 4 )
    v26 = *(_DWORD *)(v9 + 920);
  v27 = (double)v8;
  if ( v24 != 4 )
    *(_DWORD *)(v9 + 920) = v26 | 0x40;
  if ( *(int *)(v9 + 1108) <= 19 )
    *(_DWORD *)(v9 + 920) |= 0x80u;
  v28 = *(_DWORD *)(v46 + 920);
  v29 = (v28 & 0x14) != 0;
  if ( (v28 & 0x28) != 0 )
    v29 |= 2u;
  if ( (v28 & 0x40) != 0 )
    v29 |= 4u;
  if ( (v28 & 0x80) != 0 )
    v29 |= 8u;
  if ( (v28 & 0x200) != 0 && v27 >= 50.0 )
  {
    *(_DWORD *)(v46 + 920) = v28 | 0x400;
    goto LABEL_29;
  }
  if ( (v28 & 0x400) != 0 )
  {
LABEL_29:
    if ( (*(_DWORD *)(v46 + 1148) & 2) != 0 )
    {
      v25 = 76;
      *((_BYTE *)v45 + 40) = 1;
      v30 = 32;
    }
    else
    {
      v41 = *(_DWORD *)(v46 + 1148) & 4;
      v40 = v41 == 0;
      if ( v41 )
        LOBYTE(v41) = 2;
      else
        v25 = 32;
      *((_BYTE *)v45 + 40) = v41;
      if ( v40 )
      {
        v30 = v25;
      }
      else
      {
        v25 = 108;
        v30 = 32;
      }
    }
    goto LABEL_31;
  }
  v25 = 32;
  *((_BYTE *)v45 + 40) = 3;
  v30 = 63;
LABEL_31:
  sub_6C054(
    v45 + 14,
    128,
    "%c%1X %04d %03d %02d:%02d:%02d %c%x %+d %d %d %s %.0f %d",
    v30,
    v29,
    v45[47],
    v45[48],
    v45[49],
    v45[50],
    v45[51],
    v25,
    *(_DWORD *)(v46 + 1160),
    *(_DWORD *)(v46 + 1152),
    v43,
    *(_DWORD *)(v46 + 1144),
    (const char *)(v46 + 924),
    v27,
    *(_DWORD *)(v46 + 1108));
  v31 = strlen((const char *)v45 + 56);
  v32 = *(_DWORD *)(v46 + 920);
  v45[46] = v31;
  if ( (v32 & 0x4C0) == 0x400 && v27 > 50.0 )
  {
    if ( sub_633D8(v45[48], v45[49], v45[50], 0, 0, *(_DWORD *)(v46 + 408), v45 + 53, &v48) )
    {
      v38 = *(_DWORD *)(v46 + 1108);
      v49 = 0;
      if ( v38 > 0 )
      {
        do
        {
          ++v23;
          sub_39A70(v45, v48, v49);
        }
        while ( *(_DWORD *)(v46 + 1108) > v23 );
      }
      v39 = *(_DWORD *)(v46 + 892);
      v45[56] = *(_DWORD *)(v46 + 888);
      v45[57] = v39;
      sub_39D44(a2);
    }
    else
    {
      *(_DWORD *)(v46 + 916) = 6;
    }
  }
  if ( v27 > 0.0 )
    sub_41F44(a2 + 16, (const char *)v45 + 56);
  sub_5DFB4(a2);
  v33 = **(_DWORD ***)(a2 + 84);
  v34 = v33[230];
  v33[279] = 0;
  result = (__int16 *)((char *)v33 + 319);
  v33[278] = 0;
  v35 = (__int16 *)((char *)v33 - 1);
  *(_DWORD *)((char *)v35 + 1109) = 0;
  *(_DWORD *)((char *)v35 + 921) = v34 & 0xC00;
  *(_DWORD *)((char *)v35 + 1129) = 0;
  do
  {
    v36 = (char *)(v35 + 8);
    do
    {
      *((_BYTE *)v35 + 1) = 0;
      v35 = (__int16 *)((char *)v35 + 1);
    }
    while ( v35 != (__int16 *)v36 );
  }
  while ( v35 != result );
  v37 = *(_DWORD *)(v46 + 916);
  if ( v37 )
    result = sub_394A0((__int16 *)a2, v37);
  *(_DWORD *)(v46 + 916) = 0;
  return result;
}
