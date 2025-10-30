int __fastcall sub_E0B5C(unsigned int *a1)
{
  unsigned int v2; // r6
  int v3; // r5
  int v4; // r7
  unsigned int v5; // r0
  int v6; // lr
  int i; // r4
  int v8; // r10
  unsigned int v9; // r0
  unsigned int *v10; // r5
  int v11; // r6
  unsigned int *v12; // r7
  unsigned int v13; // r0
  unsigned int *v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r3
  int v17; // r1
  int v18; // r3
  unsigned int v19; // r0
  int v20; // r3
  int v21; // r3
  unsigned int v22; // r3
  unsigned int *v23; // r3
  int v24; // r6
  unsigned int v25; // r0
  int v26; // r9
  int v27; // r4
  unsigned int v28; // r8
  int v29; // r3
  unsigned int v30; // r6
  int result; // r0
  int v32; // [sp+4h] [bp-28h]
  int v33; // [sp+4h] [bp-28h]
  int v34; // [sp+8h] [bp-24h]
  unsigned int v35; // [sp+Ch] [bp-20h]
  int v36; // [sp+10h] [bp-1Ch]
  unsigned int v37; // [sp+14h] [bp-18h]

  v2 = dword_6E1A60;
  v3 = dword_6E1A5C;
  v4 = dword_6E1A68;
  v5 = sub_189090((char *)a1 + dword_6E1A60 - dword_6E1A5C, dword_6E1A6C);
  v6 = v4 - 1;
  for ( i = dword_6E1A70; v5; --v6 )
  {
    if ( ((*(unsigned __int8 *)(dword_6E1A70 + (v5 >> 3)) >> (v5 & 7)) & 1) != 0 )
      break;
    if ( (v5 & 1) != 0 )
      sub_BC328("assertion failed: (bit & 1) == 0", "crypto/mem_sec.c", 304);
    v5 >>= 1;
  }
  v8 = v6;
  if ( (v6 >= v4) | ((unsigned int)v6 >> 31) )
LABEL_62:
    sub_BC328("assertion failed: list >= 0 && list < sh.freelist_size", "crypto/mem_sec.c", 315);
  if ( (((v2 >> v6) - 1) & ((unsigned int)a1 - v3)) != 0 )
LABEL_64:
    sub_BC328(aAssertionFaile_47, "crypto/mem_sec.c", 316);
  v9 = (1 << v6) + sub_189090((char *)a1 - v3, v2 >> v6);
  if ( !v9 || v9 >= dword_6E1A78 )
LABEL_63:
    sub_BC328("assertion failed: bit > 0 && bit < sh.bittable_size", "crypto/mem_sec.c", 318);
  if ( (*(unsigned __int8 *)(i + (v9 >> 3)) & (1 << (v9 & 7))) == 0 )
    sub_BC328("assertion failed: sh_testbit(ptr, list, sh.bittable)", "crypto/mem_sec.c", 612);
  sub_E0978((int)a1, v8, dword_6E1A74);
  v36 = 4 * v8 - 4;
  v10 = a1;
  sub_E08C0((unsigned int *)(dword_6E1A64 + 4 * v8), a1);
  while ( 1 )
  {
    v26 = dword_6E1A5C;
    v27 = 1 << v8;
    v28 = (unsigned int)dword_6E1A60 >> v8;
    v35 = (unsigned int)v10 - dword_6E1A5C;
    v29 = sub_189090((char *)v10 - dword_6E1A5C, (unsigned int)dword_6E1A60 >> v8) + (1 << v8);
    v30 = v29 ^ 1;
    result = (v29 ^ 1) & 7;
    v33 = dword_6E1A70;
    if ( ((*(unsigned __int8 *)(dword_6E1A70 + (v30 >> 3)) >> (v30 & 7)) & 1) == 0 )
      return result;
    v34 = dword_6E1A74;
    if ( ((*(unsigned __int8 *)(dword_6E1A74 + (v30 >> 3)) >> result) & 1) != 0 )
      return result;
    v11 = v28 * (v30 & (v27 - 1));
    v12 = (unsigned int *)(v26 + v11);
    if ( !(v26 + v11) )
      return result;
    v37 = v29;
    v13 = (sub_189090(v11, v28) + v27) ^ 1;
    if ( ((*(unsigned __int8 *)(v33 + (v13 >> 3)) >> (v13 & 7)) & 1) != 0 )
    {
      if ( ((*(unsigned __int8 *)(v34 + (v13 >> 3)) >> (v13 & 7)) & 1) != 0 )
        v14 = 0;
      else
        v14 = (unsigned int *)(v26 + v28 * ((v27 - 1) & v13));
    }
    else
    {
      v14 = 0;
    }
    if ( v10 != v14 )
      sub_BC328("assertion failed: ptr == sh_find_my_buddy(buddy, list)", "crypto/mem_sec.c", 618);
    if ( !v10 )
      sub_BC328("assertion failed: ptr != NULL", "crypto/mem_sec.c", 619);
    if ( v8 < 0 || v8 >= dword_6E1A68 )
      goto LABEL_62;
    if ( ((v28 - 1) & v35) != 0 )
      goto LABEL_64;
    if ( !v37 || dword_6E1A78 <= v37 )
      goto LABEL_63;
    if ( (*(unsigned __int8 *)(v34 + (v37 >> 3)) & (1 << (v37 & 7))) != 0 )
      sub_BC328("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)", "crypto/mem_sec.c", 620);
    sub_E0978((int)v10, v8, v33);
    v15 = *v10;
    if ( *v10 )
      *(_DWORD *)(v15 + 4) = v10[1];
    *(_DWORD *)v10[1] = v15;
    if ( *v10 )
    {
      v16 = *(_DWORD *)(*v10 + 4);
      if ( v16 < dword_6E1A64 || (v17 = dword_6E1A68, v16 >= dword_6E1A64 + 4 * dword_6E1A68) )
      {
        if ( v16 < dword_6E1A5C || v16 >= dword_6E1A60 + dword_6E1A5C )
          goto LABEL_65;
        v17 = dword_6E1A68;
      }
      v18 = dword_6E1A74;
    }
    else
    {
      v18 = dword_6E1A74;
      v17 = dword_6E1A68;
    }
    v32 = v18;
    if ( v8 >= v17 )
      goto LABEL_62;
    if ( ((((unsigned int)dword_6E1A60 >> v8) - 1) & ((unsigned int)v10 - dword_6E1A5C)) != 0 )
      goto LABEL_64;
    v19 = sub_189090((char *)v10 - dword_6E1A5C, (unsigned int)dword_6E1A60 >> v8) + v27;
    if ( !v19 || v19 >= dword_6E1A78 )
      goto LABEL_63;
    if ( (*(unsigned __int8 *)(v32 + (v19 >> 3)) & (1 << (v19 & 7))) != 0 )
      sub_BC328("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)", "crypto/mem_sec.c", 623);
    sub_E0978(v26 + v11, v8, dword_6E1A70);
    v20 = *(_DWORD *)(v26 + v11);
    if ( v20 )
      *(_DWORD *)(v20 + 4) = v12[1];
    *(_DWORD *)v12[1] = v20;
    v21 = *(_DWORD *)(v26 + v11);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v21 + 4);
      if ( (v22 < dword_6E1A64 || v22 >= dword_6E1A64 + 4 * dword_6E1A68)
        && (v22 < dword_6E1A5C || v22 >= dword_6E1A60 + dword_6E1A5C) )
      {
LABEL_65:
        sub_16990();
      }
    }
    v23 = v10;
    --v8;
    if ( v10 < v12 )
      v23 = (unsigned int *)(v26 + v11);
    if ( v12 >= v10 )
      v12 = v10;
    *v23 = 0;
    v23[1] = 0;
    v24 = dword_6E1A74;
    if ( v8 == -1 || v8 >= dword_6E1A68 )
      goto LABEL_62;
    if ( ((((unsigned int)dword_6E1A60 >> v8) - 1) & ((unsigned int)v12 - dword_6E1A5C)) != 0 )
      goto LABEL_64;
    v25 = (1 << v8) + sub_189090((char *)v12 - dword_6E1A5C, (unsigned int)dword_6E1A60 >> v8);
    if ( !v25 || v25 >= dword_6E1A78 )
      goto LABEL_63;
    if ( (*(unsigned __int8 *)(v24 + (v25 >> 3)) & (1 << (v25 & 7))) != 0 )
      sub_BC328("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)", "crypto/mem_sec.c", 634);
    sub_E080C((int)v12, v8, dword_6E1A70);
    sub_E08C0((unsigned int *)(dword_6E1A64 + v36), v12);
    v10 = *(unsigned int **)(dword_6E1A64 + v36);
    v36 -= 4;
    if ( v10 != v12 )
      sub_BC328("assertion failed: sh.freelist[list] == ptr", "crypto/mem_sec.c", 637);
  }
}
