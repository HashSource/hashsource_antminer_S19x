int __fastcall sub_1E9D70(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  const char **v5; // r4
  char *v6; // r5
  size_t v7; // r0
  int v8; // r0
  char *v9; // r0
  const char *v10; // r4
  int result; // r0

  v3 = sub_16F654(a1);
  v4 = ((int (__fastcall *)(int))loc_1E2770)(v3);
  v5 = (const char **)dword_488C94;
  v6 = *(char **)dword_488C94;
  v7 = sub_1E2890(v4);
  sub_93170(v6, v7, "QTBuffer:circular:%x", a2);
  v8 = sub_1E7DEC(*v5);
  v9 = sub_1E98E8(v8);
  if ( !*v9 )
    sub_946E0("Target does not support this command.");
  v10 = v9;
  result = strcmp(v9, "OK");
  if ( result )
    sub_946E0("Bogus reply from target: %s", v10);
  return result;
}
