char *__fastcall sub_2912A8(int a1, int a2)
{
  int v2; // r6
  int v3; // r4
  size_t v4; // r4
  char *v5; // r5

  if ( a1 > a2 )
    v2 = a2;
  else
    v2 = a1;
  if ( a1 > a2 )
    v3 = a1;
  else
    v3 = a2;
  v4 = v3 - v2;
  v5 = (char *)sub_93028(v4 + 1);
  strncpy(v5, (const char *)(dword_48AAD4 + v2), v4);
  v5[v4] = 0;
  return v5;
}
