int __fastcall sub_111970(int a1, _DWORD *a2)
{
  int v3; // r4
  int result; // r0

  v3 = sub_15DA7C(a1);
  result = v3 - sub_15DA7C(*a2) - 1;
  if ( result < -1 )
  {
    sub_94700(
      (int)"dwarf2-frame-tailcall.c",
      178,
      "%s: Assertion `%s' failed.",
      "int existing_next_levels(frame_info*, tailcall_cache*)",
      "retval >= -1");
    JUMPOUT(0x1119D0);
  }
  return result;
}
