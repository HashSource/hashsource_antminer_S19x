int __fastcall sub_6C72C(int a1, const char *a2, const char **a3)
{
  const char **v5; // r2

  v5 = (const char **)((int (*)(void))loc_16D068)();
  if ( v5 )
    return sub_6C6BC(a2, a3, v5);
  if ( a3 )
    *a3 = "";
  return 1;
}
