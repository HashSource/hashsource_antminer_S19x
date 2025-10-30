int __fastcall sub_1E95A0(int a1)
{
  int v1; // r0
  int v2; // r0
  char **v3; // r4
  char *v4; // r8
  int v5; // r5
  size_t v6; // r0
  const char *v7; // r4
  int result; // r0

  v1 = sub_16F654(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2770)(v1);
  v3 = (char **)dword_488C94;
  v4 = *(char **)dword_488C94;
  v5 = dword_488C94;
  v6 = sub_1E2890(v2);
  sub_93170(
    v4,
    v6,
    "QAllow:WriteReg:%x;WriteMem:%x;InsertBreak:%x;InsertTrace:%x;InsertFastTrace:%x;Stop:%x",
    dword_46DBE0,
    dword_46DBC8,
    dword_46DBE8,
    dword_46DBF0,
    dword_46DBF8,
    dword_46DC00);
  sub_1E7DEC(*(const char **)v5);
  sub_1E4EB8(v3, (size_t *)(v5 + 4), 0, 0, 0);
  v7 = *v3;
  result = strcmp(v7, "OK");
  if ( result )
    return sub_946B0("Remote refused setting permissions with: %s", v7);
  return result;
}
