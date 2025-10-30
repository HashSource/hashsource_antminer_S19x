void __fastcall sub_43284(_DWORD *a1, void *a2)
{
  a1[95] += a1[96];
  if ( (int)a1[95] <= 0 )
    a1[96] = 1;
  if ( (int)a1[95] <= 15 )
  {
    sub_2AF08(a2, (char *)&unk_87CF4 + 160 * a1[95], 0xA0u, "cgminer.c", "set_benchmark_work", 8704);
  }
  else
  {
    a1[96] = -1;
    if ( (int)++a1[94] > 15 )
      a1[94] = 0;
    sub_2AF08(a2, (char *)&unk_872F4 + 160 * a1[94], 0xA0u, "cgminer.c", "set_benchmark_work", 8700);
  }
}
