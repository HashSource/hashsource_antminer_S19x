int __fastcall sub_1AB90(_DWORD *a1)
{
  int v1; // r4
  const char *v2; // r0

  v1 = a1[3];
  v2 = (const char *)sub_25AC8C(*a1, a1[2]);
  sub_259858("Process record does not support instruction 0x%0x at address %s.\n", v1, v2);
  return -1;
}
