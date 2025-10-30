_DWORD *__fastcall sub_1E0464(int a1, int a2)
{
  int v4; // r5
  _DWORD *result; // r0
  _DWORD *v6; // r2

  v4 = ((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_4886E0);
  result = sub_163938(a1, 8u);
  if ( !a2 )
  {
    sub_94700(
      (int)"reggroups.c",
      109,
      "%s: Assertion `%s' failed.",
      "void add_group(reggroups*, reggroup*, reggroup_el*)",
      "group != NULL");
    JUMPOUT(0x1E04EC);
  }
  v6 = *(_DWORD **)(v4 + 4);
  *result = a2;
  result[1] = 0;
  *v6 = result;
  *(_DWORD *)(v4 + 4) = result + 1;
  return result;
}
