int __fastcall sub_1EA758(int a1, _DWORD *a2)
{
  int v3; // r0
  const char **v4; // r7
  int v5; // r0
  int v6; // r0
  void *v7; // r6
  char *v8; // r5

  v3 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v3);
  v4 = (const char **)dword_488C94;
  v5 = ((int (__fastcall *)(int))loc_1E2198)(34);
  if ( v5 == 2 )
    return -1;
  v6 = sub_16F654(v5);
  dword_48A5AC = *(_DWORD *)((int (__fastcall *)(int))loc_1E2770)(v6);
  sub_1E7DEC("qTStatus");
  v7 = sub_92E28();
  v8 = sub_1E98E8((int)v7);
  sub_92E40((int)v7);
  if ( sub_1E1768(v8, dword_48890C) == 2 )
    return -1;
  *a2 = 0;
  if ( *v8 != 84 )
    sub_946E0("Bogus trace status reply from target: %s", *v4);
  sub_24C848(v8 + 1, a2);
  return a2[2];
}
