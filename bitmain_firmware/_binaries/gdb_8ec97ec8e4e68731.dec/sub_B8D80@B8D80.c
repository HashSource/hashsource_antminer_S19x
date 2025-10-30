char *__fastcall sub_B8D80(int a1)
{
  int v2; // r4
  int v3; // r0
  char *v4; // r2

  v2 = ((int (*)(void))loc_1665F4)();
  v3 = ((int (__fastcall *)(int))loc_1665F4)(a1);
  v4 = " -mcmodel=large";
  if ( v3 != 64 )
    v4 = "";
  return sub_93140("-m%d%s", v2, v4);
}
