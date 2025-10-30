int __fastcall sub_5812C(int a1, int a2, int a3)
{
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r12
  int v9; // r4
  int v11; // r0

  if ( pthread_mutex_lock(&stru_246244) )
    sub_550B8("inc_work_stats", 8840);
  v6 = *(_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(v6 + 192);
  v8 = *(_DWORD *)(v6 + 196);
  qword_2463D0 += a3;
  *(_QWORD *)(v6 + 192) = __PAIR64__(v8, v7) + a3;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 40) += a3;
  }
  else
  {
    v11 = sub_58084();
    *(_QWORD *)(v11 + 40) += a3;
  }
  v9 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v9 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_246244) )
    sub_55114("inc_work_stats", 8854);
  return off_9E444();
}
