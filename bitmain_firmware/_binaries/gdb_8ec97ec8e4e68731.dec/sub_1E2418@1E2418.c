int __fastcall sub_1E2418(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  char *v6; // r2

  while ( 1 )
  {
    v3 = a1[2];
    if ( v3 == 1 )
      return sub_259F10("Support for the `%s' packet is currently %s.\n", *a1, "disabled");
    if ( !v3 )
      return sub_259F10("Support for the `%s' packet is currently %s.\n", *a1, "enabled");
    if ( v3 == 2 )
      break;
    ((void (__fastcall *)(_DWORD *, int, int, _DWORD *, int))loc_162E4)(a1, a2, v3, a1, v2);
    sub_1E2418(&unk_48873C);
    sub_1E2418(&unk_48874C);
    sub_1E2418(&unk_48875C);
    sub_1E2418(&unk_48876C);
    a1 = &unk_48877C;
  }
  v4 = a1[3];
  if ( v4 == 1 )
  {
    v6 = "enabled";
  }
  else if ( v4 )
  {
    v6 = "disabled";
    if ( v4 != 2 )
      v6 = "internal-error";
  }
  else
  {
    v6 = "unknown";
  }
  return sub_259F10("Support for the `%s' packet is auto-detected, currently %s.\n", *a1, v6);
}
