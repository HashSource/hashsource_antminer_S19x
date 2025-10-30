int __fastcall sub_18828(int a1, int a2)
{
  const char *v4; // r0

  v4 = (const char *)sub_26510();
  if ( !strcmp(v4, "BHB28601") )
    return sub_17F00(a1, 1, a2);
  if ( dword_B0F00 == 3 )
    return sub_187E8(a1, a2);
  return sub_17F00(a1, 0, a2);
}
