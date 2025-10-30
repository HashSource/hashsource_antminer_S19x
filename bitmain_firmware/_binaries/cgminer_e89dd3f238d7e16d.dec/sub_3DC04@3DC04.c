int __fastcall sub_3DC04(int a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r3
  int result; // r0
  char v5[24]; // [sp+14h] [bp-828h] BYREF
  int v6; // [sp+814h] [bp-28h]
  _DWORD *v7; // [sp+818h] [bp-24h]
  int v8; // [sp+81Ch] [bp-20h]
  double v9; // [sp+820h] [bp-1Ch]
  _DWORD *v10; // [sp+828h] [bp-14h]
  void *ptr; // [sp+82Ch] [bp-10h]

  v9 = 0.0;
  v8 = 0;
  sub_2D2FC(&stru_86E70, "cgminer.c", "clear_stratum_shares", 7436);
  ptr = (void *)dword_86F9C;
  if ( dword_86F9C )
    v1 = *(_DWORD **)(dword_86F9C + 8);
  else
    v1 = 0;
  v10 = v1;
  while ( ptr )
  {
    if ( a1 == *(_DWORD *)(*((_DWORD *)ptr + 9) + 260) )
    {
      if ( *((_DWORD *)ptr + 1) || *((_DWORD *)ptr + 2) )
      {
        v7 = ptr;
        if ( ptr == (void *)(*(_DWORD *)(*(_DWORD *)dword_86F9C + 16) - *(_DWORD *)(*(_DWORD *)dword_86F9C + 20)) )
          *(_DWORD *)(*(_DWORD *)dword_86F9C + 16) = *((_DWORD *)ptr + 1) + *(_DWORD *)(*(_DWORD *)dword_86F9C + 20);
        if ( *((_DWORD *)ptr + 1) )
          *(_DWORD *)(*((_DWORD *)ptr + 1) + *(_DWORD *)(*(_DWORD *)dword_86F9C + 20) + 8) = *((_DWORD *)ptr + 2);
        else
          dword_86F9C = *((_DWORD *)ptr + 2);
        if ( v7[2] )
          *(_DWORD *)(v7[2] + *(_DWORD *)(*(_DWORD *)dword_86F9C + 20) + 4) = v7[1];
        v6 = (*(_DWORD *)(*(_DWORD *)dword_86F9C + 4) - 1) & v7[7];
        --*(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v6 + 4);
        if ( v7 == *(_DWORD **)(**(_DWORD **)dword_86F9C + 12 * v6) )
          *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v6) = v7[4];
        if ( v7[3] )
          *(_DWORD *)(v7[3] + 16) = v7[4];
        if ( v7[4] )
          *(_DWORD *)(v7[4] + 12) = v7[3];
        --*(_DWORD *)(*(_DWORD *)dword_86F9C + 12);
      }
      else
      {
        free(**(void ***)dword_86F9C);
        free(*(void **)dword_86F9C);
        dword_86F9C = 0;
      }
      v9 = v9 + *(double *)(*((_DWORD *)ptr + 9) + 376);
      sub_30E0C((void **)ptr + 9, "cgminer.c", "clear_stratum_shares", 7444);
      --*(_DWORD *)(a1 + 732);
      free(ptr);
      ++v8;
    }
    ptr = v10;
    if ( v10 )
      v2 = (_DWORD *)v10[2];
    else
      v2 = 0;
    v10 = v2;
  }
  result = sub_2D434(&stru_86E70, "cgminer.c", "clear_stratum_shares", 7450);
  if ( v8 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v5, 0x800u, "Lost %d shares due to stratum disconnect on pool %d", v8, *(_DWORD *)a1);
      sub_1DB6C(4, v5, 0);
    }
    *(_DWORD *)(a1 + 120) += v8;
    result = v8;
    *(_QWORD *)&dword_942F8 += v8;
    *(double *)(a1 + 88) = *(double *)(a1 + 88) + v9;
    dbl_90F28 = dbl_90F28 + v9;
  }
  return result;
}
