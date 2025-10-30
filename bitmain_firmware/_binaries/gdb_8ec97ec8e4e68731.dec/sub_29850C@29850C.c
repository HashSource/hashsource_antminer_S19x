char *__fastcall sub_29850C(int a1, int a2, int a3, int a4)
{
  size_t v6; // r5
  const char *v7; // r7
  char *v8; // r4

  v6 = a3 - a2;
  v7 = off_3FDD58[a4];
  v8 = (char *)sub_93028((size_t)&off_3FDD58[a4 + 5][a3 - a2 + 3]);
  strncpy(v8, (const char *)(a1 + a2), v6);
  v8[v6] = 58;
  v8[v6 + 1] = 32;
  strcpy(&v8[v6 + 2], v7);
  return v8;
}
