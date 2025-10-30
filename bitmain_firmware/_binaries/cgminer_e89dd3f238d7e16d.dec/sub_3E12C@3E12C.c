void __fastcall sub_3E12C(_DWORD *a1)
{
  _DWORD *v1; // r3
  int v2; // r3
  _DWORD *v3; // r3
  char v5[8]; // [sp+14h] [bp-818h] BYREF
  _DWORD *v6; // [sp+814h] [bp-18h] BYREF
  int v7; // [sp+818h] [bp-14h]
  _DWORD *v8; // [sp+81Ch] [bp-10h]
  int v9; // [sp+820h] [bp-Ch]
  _DWORD *v10; // [sp+824h] [bp-8h]

  v9 = 0;
  sub_2D2FC((pthread_mutex_t *)dword_86E4C, "cgminer.c", "clear_pool_work", 7467);
  v6 = (_DWORD *)dword_86D00;
  if ( dword_86D00 )
    v1 = *(_DWORD **)(dword_86D00 + 352);
  else
    v1 = 0;
  v10 = v1;
  while ( v6 )
  {
    if ( a1 == (_DWORD *)v6[65] )
    {
      if ( v6[87] || v6[88] )
      {
        v8 = v6 + 86;
        if ( (_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16)
                      - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20)) == v6 )
          *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16) = v6[87] + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
        if ( v6[87] )
          *(_DWORD *)(v6[87] + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20) + 8) = v6[88];
        else
          dword_86D00 = v6[88];
        if ( v8[2] )
          *(_DWORD *)(v8[2] + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20) + 4) = v8[1];
        v7 = (*(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 4) - 1) & v8[7];
        v2 = **(_DWORD **)(dword_86D00 + 344) + 12 * v7;
        --*(_DWORD *)(v2 + 4);
        if ( v8 == *(_DWORD **)(**(_DWORD **)(dword_86D00 + 344) + 12 * v7) )
          *(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v7) = v8[4];
        if ( v8[3] )
          *(_DWORD *)(v8[3] + 16) = v8[4];
        if ( v8[4] )
          *(_DWORD *)(v8[4] + 12) = v8[3];
        --*(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 12);
      }
      else
      {
        free(**(void ***)(dword_86D00 + 344));
        free(*(void **)(dword_86D00 + 344));
        dword_86D00 = 0;
      }
      sub_30E0C((void **)&v6, "cgminer.c", "clear_pool_work", 7473);
      ++v9;
    }
    v6 = v10;
    if ( v10 )
      v3 = (_DWORD *)v10[88];
    else
      v3 = 0;
    v10 = v3;
  }
  sub_2D434((pthread_mutex_t *)dword_86E4C, "cgminer.c", "clear_pool_work", 7477);
  if ( v9 && (byte_90DC0 || byte_865D1 || dword_857E4 > 5) )
  {
    snprintf(v5, 0x800u, "Cleared %d work items due to stratum disconnect on pool %d", v9, *a1);
    sub_1DB6C(6, v5, 0);
  }
}
