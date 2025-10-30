int __fastcall sub_18C14(int a1, int a2)
{
  const char *v4; // r0

  v4 = (const char *)sub_26A14();
  if ( !strcmp(v4, "BHB28601") )
    return sub_182B4(a1, 1u, a2);
  if ( dword_B3C70 == 3 )
    return sub_18BD4(a1, a2);
  return sub_182B4(a1, 0, a2);
}
