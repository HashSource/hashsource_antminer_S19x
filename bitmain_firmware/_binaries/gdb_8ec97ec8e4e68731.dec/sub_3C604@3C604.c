int __fastcall sub_3C604(int a1)
{
  __pid_t v2; // r0
  int stat_loc; // [sp+4h] [bp-4h] BYREF

  v2 = ps_getpid_0(&dword_4878EC);
  waitpid(v2, &stat_loc, 0);
  return sub_17CD84(a1);
}
