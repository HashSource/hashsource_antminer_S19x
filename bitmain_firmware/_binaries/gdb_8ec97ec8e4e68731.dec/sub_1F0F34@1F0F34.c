int __fastcall sub_1F0F34(const char *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // [sp+4h] [bp-8h] BYREF

  v4 = sub_16F654((int)a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  if ( !*(_DWORD *)(dword_488C94 + 56) )
    sub_946E0("command can only be used with remote target");
  v5 = sub_231934(2);
  result = sub_1E66CC(v5, 0, a1, &v7);
  if ( result == -1 )
    sub_1E152C(v7);
  if ( a2 )
    return sub_259F10("Successfully deleted file \"%s\".\n", a1);
  return result;
}
