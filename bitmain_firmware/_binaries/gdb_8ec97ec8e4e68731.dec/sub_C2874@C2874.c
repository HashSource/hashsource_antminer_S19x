int __fastcall sub_C2874(_DWORD *a1)
{
  int v2; // r0
  int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // [sp+8h] [bp-8h] BYREF

  v2 = sub_C2308(a1);
  if ( !v2 || !a1[2] )
    return 0;
  v4 = *(_DWORD *)(v2 + 212);
  if ( !v4 )
    return 0;
  v6 = a1;
  v5 = (_DWORD *)sub_323E3C(v4, &v6);
  if ( !v5 )
    return 0;
  if ( (_DWORD *)*v5 != a1 )
  {
    sub_94700(
      (int)"objfiles.c",
      298,
      "%s: Assertion `%s' failed.",
      "const dynamic_prop* objfile_lookup_static_link(objfile*, const block*)",
      "entry->block == block");
    JUMPOUT(0x1B6DC8);
  }
  return v5[1];
}
