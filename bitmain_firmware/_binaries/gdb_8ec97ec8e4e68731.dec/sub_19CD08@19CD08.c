int __fastcall sub_19CD08(_DWORD *a1)
{
  __int64 v2; // r0
  int v3; // r2

  if ( !*a1 )
    return (int)(a1 + 1);
  v2 = sub_94700(
         (int)"location.c",
         114,
         "%s: Assertion `%s' failed.",
         "const linespec_location* get_linespec_location(const event_location*)",
         "EL_TYPE (location) == LINESPEC_LOCATION");
  return sub_19CD50(v2, HIDWORD(v2), v3);
}
