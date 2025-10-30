int __fastcall sub_1EA16C(int a1, const char *a2)
{
  int v3; // r0
  const char **v4; // r7
  int v5; // r3
  _BYTE *v6; // r4
  size_t v7; // r0
  unsigned int v8; // r5
  size_t v9; // r0
  int v10; // r0
  char *v11; // r0
  const char *v12; // r4
  int result; // r0

  v3 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v3);
  v4 = (const char **)dword_488C94;
  v5 = *(_DWORD *)dword_488C94;
  strcpy(*(char **)dword_488C94, "QTSave:");
  v6 = (_BYTE *)(v5 + 7);
  v7 = strlen(a2);
  v8 = v6 - *v4 + 2 * v7;
  if ( v8 >= sub_1E2890(v7) )
    sub_946E0("Remote file name too long for trace save packet");
  v9 = strlen(a2);
  v6[2 * sub_99420((int)a2, v6, v9)] = 0;
  v10 = sub_1E7DEC(*v4);
  v11 = sub_1E98E8(v10);
  v12 = v11;
  if ( !*v11 )
    sub_946E0("Target does not support this command.");
  result = strcmp(v11, "OK");
  if ( result )
    sub_946E0("Bogus reply from target: %s", v12);
  return result;
}
