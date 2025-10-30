void __fastcall sub_1E8D30(int a1, int *a2)
{
  int v3; // r0
  int v4; // r0
  _BYTE **v5; // r6
  char *v6; // r8
  int v7; // r0
  size_t v8; // r9
  const char *v9; // r0
  const char *v10; // r0

  v3 = sub_16F654(a1);
  v4 = ((int (__fastcall *)(int))loc_1E2770)(v3);
  v5 = (_BYTE **)dword_488C94;
  v6 = *(char **)dword_488C94;
  v7 = sub_1E2890(v4);
  if ( dword_488B14 == 1 )
LABEL_12:
    sub_946E0("Target does not support branch tracing.");
  v8 = v7;
  if ( !dword_488B14 )
    goto LABEL_5;
  if ( dword_488B14 != 2 )
  {
    ((void (*)(void))loc_162E4)();
    goto LABEL_12;
  }
  if ( dword_488B18 != 1 )
    goto LABEL_12;
LABEL_5:
  sub_1E8188(*a2, a2[1], a2[2], 1);
  sub_93170(v6, v8, "%s", (const char *)dword_488B0C);
  sub_1E7DEC(*v5);
  sub_1E4EB8(v5, (size_t *)v5 + 1, 0, 0, 0);
  if ( !sub_1E1768(*v5, &dword_488B0C) )
  {
    if ( **v5 == 69 && (*v5)[1] == 46 )
    {
      v10 = (const char *)sub_23095C(*a2, a2[1], a2[2]);
      sub_946E0("Could not disable branch tracing for %s: %s", v10, *v5 + 2);
    }
    v9 = (const char *)sub_23095C(*a2, a2[1], a2[2]);
    sub_946E0("Could not disable branch tracing for %s.", v9);
  }
  free(a2);
}
