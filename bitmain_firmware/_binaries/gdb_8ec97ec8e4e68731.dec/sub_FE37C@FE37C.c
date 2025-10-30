int __fastcall sub_FE37C(const char *a1)
{
  int v2; // r4
  int v4; // r0
  char *v5; // r0

  v2 = ((int (*)(void))loc_21DA00)();
  if ( v2 )
    return v2;
  v4 = sub_20F388(0);
  v5 = sub_C25A8(v4);
  if ( !*v5 )
    return v2;
  else
    return sub_FCBEC(a1, v5, 0);
}
