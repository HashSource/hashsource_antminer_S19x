int __fastcall sub_3EAA8(int a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r3
  int result; // r0
  char v5[16]; // [sp+14h] [bp-820h] BYREF
  int v6; // [sp+814h] [bp-20h]
  _DWORD *v7; // [sp+818h] [bp-1Ch]
  int v8; // [sp+81Ch] [bp-18h]
  double v9; // [sp+820h] [bp-14h]
  _DWORD *v10; // [sp+828h] [bp-Ch]
  void *ptr; // [sp+82Ch] [bp-8h]

  v9 = 0.0;
  v8 = 0;
  sub_2E354(&stru_88008, "cgminer.c", "clear_stratum_shares", 7436);
  ptr = (void *)dword_88134;
  if ( dword_88134 )
    v1 = *(_DWORD **)(dword_88134 + 8);
  else
    v1 = 0;
  v10 = v1;
  while ( ptr )
  {
    if ( *(_DWORD *)(*((_DWORD *)ptr + 9) + 260) == a1 )
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
      v9 = v9 + *(double *)(*((_DWORD *)ptr + 9) + 376);
      sub_31F40((void **)ptr + 9, "cgminer.c", "clear_stratum_shares", 7444);
      --*(_DWORD *)(a1 + 748);
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
  result = sub_2E484(&stru_88008, "cgminer.c", "clear_stratum_shares", 7450);
  if ( v8 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v5, 0x800u, "Lost %d shares due to stratum disconnect on pool %d", v8, *(_DWORD *)a1);
      sub_1E4EC(4, v5, 0);
    }
    *(_DWORD *)(a1 + 120) += v8;
    result = v8 + LODWORD(dbl_95490);
    *(_QWORD *)&dbl_95490 += v8;
    *(double *)(a1 + 88) = *(double *)(a1 + 88) + v9;
    dbl_920C0 = dbl_920C0 + v9;
  }
  return result;
}
