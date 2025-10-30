int __fastcall sub_1E9228(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char **v6; // r4
  char *v7; // r7
  int v8; // r5
  size_t v9; // r0

  v3 = ((int (__fastcall *)(int))loc_1E2198)(64);
  if ( v3 == 2 )
    return 0;
  v4 = sub_16F654(v3);
  v5 = ((int (__fastcall *)(int))loc_1E2770)(v4);
  v6 = (char **)dword_488C94;
  v7 = *(char **)dword_488C94;
  v8 = dword_488C94;
  v9 = sub_1E2890(v5);
  sub_93170(v7, v9, "QAgent:%d", a2);
  sub_1E7DEC(*(const char **)v8);
  sub_1E4EB8(v6, (size_t *)(v8 + 4), 0, 0, 0);
  if ( strcmp(*v6, "OK") )
    return 0;
  dword_475208 = a2;
  return 1;
}
