int __fastcall sub_C44A0(_DWORD *a1, int a2)
{
  int v4; // r8
  int *v5; // r4
  int *v6; // r7
  int v7; // t1
  int v9; // [sp+0h] [bp-8h] BYREF
  const char *v10; // [sp+4h] [bp-4h]

  v4 = *(_DWORD *)(a1[7] + 44);
  sub_2594B0(a2, "catch syscall");
  v5 = (int *)a1[34];
  v6 = (int *)a1[35];
  while ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = *v5++;
      sub_275A58(v4, v7, &v9);
      if ( !v10 )
        break;
      sub_2594B0(a2, " %s", v10);
      if ( v6 == v5 )
        return sub_D1C8C(a1, a2);
    }
    sub_2594B0(a2, " %d", v9);
  }
  return sub_D1C8C(a1, a2);
}
