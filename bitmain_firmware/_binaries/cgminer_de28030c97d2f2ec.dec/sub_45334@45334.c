int __fastcall sub_45334(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r4

  sub_2E354(&stru_91F5C, "cgminer.c", "inc_work_stats", 8925);
  *(_QWORD *)&dbl_91F90 += a3;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 192) += a3;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 40) += a3;
  }
  else
  {
    v3 = sub_2F984();
    *(_QWORD *)(v3 + 40) += a3;
  }
  v4 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v4 + 232) = time(0);
  return sub_2E484(&stru_91F5C, "cgminer.c", "inc_work_stats", 8939);
}
