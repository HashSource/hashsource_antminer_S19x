int __fastcall sub_49264(_DWORD *a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r3
  int result; // r0
  char v5[12]; // [sp+10h] [bp-81Ch] BYREF
  int v6; // [sp+810h] [bp-1Ch]
  _DWORD *v7; // [sp+814h] [bp-18h]
  time_t v8; // [sp+818h] [bp-14h]
  int v9; // [sp+81Ch] [bp-10h]
  _DWORD *v10; // [sp+820h] [bp-Ch]
  void *ptr; // [sp+824h] [bp-8h]

  v8 = time(0);
  v9 = 0;
  sub_2E354(&stru_88008, "cgminer.c", "prune_stratum_shares", 10283);
  ptr = (void *)dword_88134;
  if ( dword_88134 )
    v1 = *(_DWORD **)(dword_88134 + 8);
  else
    v1 = 0;
  v10 = v1;
  while ( ptr )
  {
    if ( *(_DWORD **)(*((_DWORD *)ptr + 9) + 260) == a1 && *((_DWORD *)ptr + 11) + 120 < v8 )
    {
      if ( *((_DWORD *)ptr + 1) || *((_DWORD *)ptr + 2) )
      {
        v7 = ptr;
        if ( (void *)(*(_DWORD *)(*(_DWORD *)dword_88134 + 16) - *(_DWORD *)(*(_DWORD *)dword_88134 + 20)) == ptr )
          *(_DWORD *)(*(_DWORD *)dword_88134 + 16) = *((_DWORD *)ptr + 1) + *(_DWORD *)(*(_DWORD *)dword_88134 + 20);
        if ( *((_DWORD *)ptr + 1) )
          *(_DWORD *)(*((_DWORD *)ptr + 1) + *(_DWORD *)(*(_DWORD *)dword_88134 + 20) + 8) = *((_DWORD *)ptr + 2);
        else
          dword_88134 = *((_DWORD *)ptr + 2);
        if ( v7[2] )
          *(_DWORD *)(v7[2] + *(_DWORD *)(*(_DWORD *)dword_88134 + 20) + 4) = v7[1];
        v6 = (*(_DWORD *)(*(_DWORD *)dword_88134 + 4) - 1) & v7[7];
        --*(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v6 + 4);
        if ( *(_DWORD **)(**(_DWORD **)dword_88134 + 12 * v6) == v7 )
          *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v6) = v7[4];
        if ( v7[3] )
          *(_DWORD *)(v7[3] + 16) = v7[4];
        if ( v7[4] )
          *(_DWORD *)(v7[4] + 12) = v7[3];
        --*(_DWORD *)(*(_DWORD *)dword_88134 + 12);
      }
      else
      {
        free(**(void ***)dword_88134);
        free(*(void **)dword_88134);
        dword_88134 = 0;
      }
      sub_31F40((void **)ptr + 9, "cgminer.c", "prune_stratum_shares", 10290);
      free(ptr);
      ++v9;
    }
    ptr = v10;
    if ( v10 )
      v2 = (_DWORD *)v10[2];
    else
      v2 = 0;
    v10 = v2;
  }
  result = sub_2E484(&stru_88008, "cgminer.c", "prune_stratum_shares", 10296);
  if ( v9 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v5, 0x800u, "Lost %d shares due to no stratum share response from pool %d", v9, *a1);
      sub_1E4EC(4, v5, 0);
    }
    a1[30] += v9;
    result = v9 + LODWORD(dbl_95490);
    *(_QWORD *)&dbl_95490 += v9;
  }
  return result;
}
