int __fastcall sub_452CC(int a1)
{
  int result; // r0
  sigset_t v2; // [sp+0h] [bp-184h] BYREF
  sigset_t v3; // [sp+80h] [bp-104h] BYREF
  sigset_t set; // [sp+100h] [bp-84h] BYREF

  sub_4514C(a1, &v2, &v3, &set);
  result = sigismember(&v2, 2);
  if ( result )
    return sigismember(&set, 2) == 0;
  return result;
}
