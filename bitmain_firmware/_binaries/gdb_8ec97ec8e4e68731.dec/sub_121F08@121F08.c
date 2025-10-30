int *__fastcall sub_121F08(_BYTE *a1)
{
  const char *v2; // r0
  int v4; // r0

  v2 = (const char *)((int (*)(void))loc_11E0F8)();
  if ( !a1[17] )
    return sub_F43B4(
             &off_46D334,
             "debug info runs off end of %s section [in module %s]",
             v2,
             **(const char ***)(*(_DWORD *)a1 + 148));
  a1 = *(_BYTE **)a1;
  if ( !a1[17] )
    return sub_F43B4(
             &off_46D334,
             "debug info runs off end of %s section [in module %s]",
             v2,
             **(const char ***)(*(_DWORD *)a1 + 148));
  v4 = ((int (__fastcall *)(const char *))loc_11E090)(v2);
  return (int *)sub_121F5C(v4);
}
