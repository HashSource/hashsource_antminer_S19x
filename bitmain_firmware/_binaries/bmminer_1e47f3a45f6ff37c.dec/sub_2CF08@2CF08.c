int __fastcall sub_2CF08(char *a1, size_t a2, int a3)
{
  int v6; // r0
  const char *v8; // r0

  v6 = sub_490C4();
  if ( v6 == 1 )
  {
    v8 = (const char *)sub_485A0();
    snprintf(a1, a2, "%s:%s", "searchfailed", v8);
    return 0;
  }
  else
  {
    if ( v6 )
      snprintf(a1, a2, "searching");
    else
      snprintf(a1, a2, "%d", a3);
    return 0;
  }
}
