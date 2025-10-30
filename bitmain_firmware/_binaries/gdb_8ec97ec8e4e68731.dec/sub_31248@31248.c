int sub_31248()
{
  int v0; // r0
  int (**v1)(void); // r0
  __int64 v3; // r0

  v0 = sub_16F654();
  v1 = (int (**)(void))((int (__fastcall *)(int, int))loc_16EC88)(v0, dword_471A28);
  if ( *v1 )
    return (*v1)();
  v3 = sub_94700(
         "solib-svr4.c",
         3158,
         "%s: Assertion `%s' failed.",
         "link_map_offsets* svr4_fetch_link_map_offsets()",
         "ops->fetch_link_map_offsets");
  return sub_312A8(v3, HIDWORD(v3));
}
