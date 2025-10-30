int sub_1EC1F4()
{
  int *v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  const char **v4; // r4
  char *v5; // r7
  _BYTE **v6; // r6
  size_t v7; // r0
  int result; // r0
  _DWORD *v9; // r0

  v0 = &dword_48A590;
  if ( dword_48A590 )
  {
    v9 = (_DWORD *)sub_242FC8(&dword_48A590);
    v0 = (int *)sub_2594B0(*v9, "remote_interrupt called\n");
  }
  v1 = sub_232950(v0);
  if ( !v1 )
    JUMPOUT(0x1E4AC4);
  v2 = sub_16F654(v1);
  v3 = ((int (__fastcall *)(int))loc_1E2770)(v2);
  v4 = (const char **)dword_488C94;
  v5 = *(char **)dword_488C94;
  v6 = (_BYTE **)dword_488C94;
  v7 = sub_1E2890(v3);
  sub_93170(v5, v7, "vCtrlC");
  sub_1E7DEC(*v6);
  sub_1E4EB8(v6, (size_t *)v6 + 1, 0, 0, 0);
  result = sub_1E1768(*v6, dword_488C4C);
  if ( !result )
    sub_946E0("Interrupting target failed: %s", *v4);
  if ( result == 2 )
    sub_946E0("No support for interrupting the remote target.");
  return result;
}
