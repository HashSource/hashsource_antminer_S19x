unsigned int *__fastcall sub_E12E4(void *a1)
{
  unsigned int v2; // r3
  int v3; // r1
  int v4; // r2
  int v5; // r8
  int v6; // r6
  unsigned int **v7; // r3
  char *v8; // r4
  unsigned int *v9; // r7
  unsigned int *v10; // t1
  unsigned int v12; // r3
  unsigned int v14; // r11
  int v15; // r10
  unsigned int v16; // r9
  unsigned int v17; // r3
  int v18; // r2
  int v19; // r11
  int v20; // r5
  unsigned int v21; // r0
  int v22; // r9
  unsigned int v23; // r1
  unsigned int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r1
  unsigned int v27; // lr
  unsigned int v28; // r0
  unsigned int v29; // r3
  int v30; // r2
  unsigned int *v31; // r4
  unsigned int v32; // r0
  unsigned int v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // [sp+4h] [bp-28h]
  char *v37; // [sp+4h] [bp-28h]
  int v38; // [sp+4h] [bp-28h]
  int v39; // [sp+8h] [bp-24h]
  int v40; // [sp+Ch] [bp-20h]
  int v41; // [sp+10h] [bp-1Ch]
  unsigned int v42; // [sp+18h] [bp-14h]
  int v43; // [sp+24h] [bp-8h]

  if ( dword_6E1A7C )
  {
    sub_10C554(dword_6E1A80);
    v42 = dword_6E1A60;
    if ( (unsigned int)a1 > dword_6E1A60 )
      goto LABEL_71;
    v2 = dword_6E1A6C;
    v3 = dword_6E1A68;
    v4 = dword_6E1A68 - 1;
    v41 = dword_6E1A68 - 1;
    if ( (unsigned int)a1 > dword_6E1A6C )
    {
      do
      {
        v2 *= 2;
        --v4;
      }
      while ( (unsigned int)a1 > v2 );
      v41 = v4;
    }
    if ( v4 < 0 )
    {
LABEL_71:
      v9 = 0;
      v12 = 0;
LABEL_11:
      dword_6E1A84 += v12;
      sub_10C564(dword_6E1A80);
      return v9;
    }
    v5 = v4;
    v43 = 4 * v4;
    v6 = dword_6E1A64;
    v7 = (unsigned int **)(dword_6E1A64 + 4 * v4);
    while ( 1 )
    {
      v8 = (char *)v7 - dword_6E1A64;
      v10 = *v7--;
      v9 = v10;
      if ( v10 )
        break;
      if ( v5-- == 0 )
        goto LABEL_10;
    }
    if ( v41 == v5 )
    {
      v30 = dword_6E1A70;
    }
    else
    {
      if ( dword_6E1A68 <= v5 )
        goto LABEL_73;
      v14 = (unsigned int)dword_6E1A60 >> v5;
      if ( ((((unsigned int)dword_6E1A60 >> v5) - 1) & ((unsigned int)v9 - dword_6E1A5C)) != 0 )
        goto LABEL_74;
      v15 = 4 * (v5 + 1);
      v36 = dword_6E1A74;
      v16 = (unsigned int)v9 - dword_6E1A5C;
      while ( 1 )
      {
        v28 = (1 << v5) + sub_189090(v16, v14);
        if ( !v28 || v28 >= dword_6E1A78 )
          goto LABEL_72;
        if ( (*(unsigned __int8 *)(v36 + (v28 >> 3)) & (1 << (v28 & 7))) != 0 )
          sub_BC328("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)", "crypto/mem_sec.c", 562);
        sub_E0978((int)v9, v5, dword_6E1A70);
        v29 = *v9;
        if ( *v9 )
          *(_DWORD *)(v29 + 4) = v9[1];
        *(_DWORD *)v9[1] = v29;
        if ( *v9 )
        {
          v17 = *(_DWORD *)(*v9 + 4);
          v18 = dword_6E1A64;
          if ( (v17 < dword_6E1A64 || v17 >= dword_6E1A64 + 4 * dword_6E1A68)
            && (v17 < dword_6E1A5C || v17 >= dword_6E1A60 + dword_6E1A5C) )
          {
            sub_BC328(
              "assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
              "crypto/mem_sec.c",
              378);
          }
        }
        else
        {
          v18 = dword_6E1A64;
        }
        if ( *(unsigned int **)&v8[v18] == v9 )
          sub_BC328("assertion failed: temp != sh.freelist[slist]", "crypto/mem_sec.c", 565);
        ++v5;
        v19 = dword_6E1A74;
        if ( v5 < 0 || v5 >= dword_6E1A68 )
          goto LABEL_73;
        if ( ((((unsigned int)dword_6E1A60 >> v5) - 1) & ((unsigned int)v9 - dword_6E1A5C)) != 0 )
          goto LABEL_74;
        v20 = 1 << v5;
        v21 = sub_189090((char *)v9 - dword_6E1A5C, (unsigned int)dword_6E1A60 >> v5) + (1 << v5);
        if ( !v21 || v21 >= dword_6E1A78 )
          goto LABEL_72;
        if ( (*(unsigned __int8 *)(v19 + (v21 >> 3)) & (1 << (v21 & 7))) != 0 )
          sub_BC328("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)", "crypto/mem_sec.c", 571);
        sub_E080C((int)v9, v5, dword_6E1A70);
        sub_E08C0((unsigned int *)(dword_6E1A64 + v15), v9);
        if ( *(unsigned int **)(dword_6E1A64 + v15) != v9 )
          sub_BC328("assertion failed: sh.freelist[slist] == temp", "crypto/mem_sec.c", 574);
        v22 = dword_6E1A74;
        v23 = (unsigned int)dword_6E1A60 >> v5;
        v9 = (unsigned int *)((char *)v9 + ((unsigned int)dword_6E1A60 >> v5));
        if ( v5 >= dword_6E1A68 )
          goto LABEL_73;
        if ( ((v23 - 1) & ((unsigned int)v9 - dword_6E1A5C)) != 0 )
          goto LABEL_74;
        v24 = sub_189090((char *)v9 - dword_6E1A5C, v23) + v20;
        if ( !v24 || v24 >= dword_6E1A78 )
          goto LABEL_72;
        if ( (*(unsigned __int8 *)(v22 + (v24 >> 3)) & (1 << (v24 & 7))) != 0 )
          sub_BC328("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)", "crypto/mem_sec.c", 578);
        sub_E080C((int)v9, v5, dword_6E1A70);
        sub_E08C0((unsigned int *)(dword_6E1A64 + v15), v9);
        if ( v9 != *(unsigned int **)(dword_6E1A64 + v15) )
          sub_BC328("assertion failed: sh.freelist[slist] == temp", "crypto/mem_sec.c", 581);
        v39 = dword_6E1A64;
        v42 = dword_6E1A60;
        v14 = (unsigned int)dword_6E1A60 >> v5;
        v16 = (unsigned int)v9 - dword_6E1A5C;
        v40 = dword_6E1A5C;
        v37 = (char *)v9 - ((unsigned int)dword_6E1A60 >> v5);
        v25 = (sub_189090((char *)v9 - dword_6E1A5C, (unsigned int)dword_6E1A60 >> v5) + v20) ^ 1;
        v26 = (*(unsigned __int8 *)(dword_6E1A70 + (v25 >> 3)) >> (v25 & 7)) & 1;
        if ( v26 )
        {
          v26 = *(unsigned __int8 *)(dword_6E1A74 + (v25 >> 3));
          v27 = v26 >> (v25 & 7);
          if ( (v27 & 1) != 0 )
            v26 = 0;
          else
            --v20;
          if ( (v27 & 1) == 0 )
            v26 = v40 + v14 * (v20 & v25);
        }
        if ( v37 != (char *)v26 )
          sub_BC328(
            "assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)",
            "crypto/mem_sec.c",
            583);
        if ( v5 == v41 )
          break;
        v36 = dword_6E1A74;
        if ( v5 >= dword_6E1A68 )
          goto LABEL_73;
        v8 = (char *)v15;
        if ( ((v14 - 1) & v16) != 0 )
          goto LABEL_74;
        v15 += 4;
      }
      v6 = v39;
      v30 = dword_6E1A70;
      v3 = dword_6E1A68;
    }
    v38 = v30;
    v31 = *(unsigned int **)(v6 + v43);
    if ( v3 > v41 )
    {
      if ( (((v42 >> v41) - 1) & ((unsigned int)v31 - dword_6E1A5C)) == 0 )
      {
        v32 = (1 << v41) + sub_189090((char *)v31 - dword_6E1A5C, v42 >> v41);
        if ( !v32 || v32 >= dword_6E1A78 )
LABEL_72:
          sub_BC328("assertion failed: bit > 0 && bit < sh.bittable_size", "crypto/mem_sec.c", 318);
        if ( (*(unsigned __int8 *)(v38 + (v32 >> 3)) & (1 << (v32 & 7))) == 0 )
          sub_BC328("assertion failed: sh_testbit(chunk, list, sh.bittable)", "crypto/mem_sec.c", 588);
        sub_E080C((int)v31, v41, dword_6E1A74);
        v33 = *v31;
        if ( *v31 )
          *(_DWORD *)(v33 + 4) = v31[1];
        *(_DWORD *)v31[1] = v33;
        if ( *v31 && ((v34 = *(_DWORD *)(*v31 + 4), v34 < dword_6E1A64) || v34 >= dword_6E1A64 + 4 * dword_6E1A68) )
        {
          v35 = dword_6E1A5C;
          if ( v34 < dword_6E1A5C || v34 >= dword_6E1A60 + dword_6E1A5C )
            sub_16990();
        }
        else
        {
          v35 = dword_6E1A5C;
        }
        if ( (unsigned int)v31 < v35 || (unsigned int)v31 >= v35 + dword_6E1A60 )
          sub_BC328("assertion failed: WITHIN_ARENA(chunk)", "crypto/mem_sec.c", 592);
        *v31 = 0;
        v31[1] = 0;
        if ( v31 )
        {
          v9 = v31;
          v12 = sub_E0A2C((unsigned int)v31);
        }
        else
        {
          v9 = 0;
LABEL_10:
          v12 = 0;
        }
        goto LABEL_11;
      }
LABEL_74:
      sub_BC328(aAssertionFaile_47, "crypto/mem_sec.c", 316);
    }
LABEL_73:
    sub_BC328("assertion failed: list >= 0 && list < sh.freelist_size", "crypto/mem_sec.c", 315);
  }
  return (unsigned int *)CRYPTO_malloc(a1);
}
