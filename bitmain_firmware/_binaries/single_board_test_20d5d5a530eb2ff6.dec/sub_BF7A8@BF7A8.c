int __fastcall sub_BF7A8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return BN_mod_exp_mont(a2, a3, a4, a5, a6, a7);
}
