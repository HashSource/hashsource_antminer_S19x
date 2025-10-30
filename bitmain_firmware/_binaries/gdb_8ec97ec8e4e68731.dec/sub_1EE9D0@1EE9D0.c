int __fastcall sub_1EE9D0(int a1)
{
  int v1; // r0
  char **v2; // r4
  size_t *v3; // r5
  const char *v4; // r4
  int result; // r0

  v1 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  v2 = (char **)dword_488C94;
  v3 = (size_t *)(dword_488C94 + 4);
  sub_1E7DEC(*(const char **)dword_488C94);
  sub_1E4EB8(v2, v3, 0, 0, 0);
  v4 = *v2;
  result = strcmp(v4, "OK");
  if ( result )
    sub_946E0("Unexpected vCont reply in non-stop mode: %s", v4);
  return result;
}
