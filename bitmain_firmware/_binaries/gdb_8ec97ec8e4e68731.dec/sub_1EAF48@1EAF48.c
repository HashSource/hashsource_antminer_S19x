int __fastcall sub_1EAF48(int a1)
{
  int v1; // r0
  const char **v2; // r4
  int v3; // r0
  int result; // r0

  v1 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  v2 = (const char **)dword_488C94;
  v3 = sub_1E7DEC("QTinit");
  sub_1E98E8(v3);
  result = strcmp(*v2, "OK");
  if ( result )
    sub_946E0("Target does not support this command.");
  return result;
}
