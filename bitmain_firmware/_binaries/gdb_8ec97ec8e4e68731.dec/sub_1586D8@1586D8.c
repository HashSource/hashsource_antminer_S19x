int sub_1586D8()
{
  int v0; // r5
  int v2; // r0
  char *v3; // r0
  char *v4; // r4
  size_t v5; // r0

  v0 = dword_4876D0;
  if ( dword_4876D0 )
    return v0;
  v2 = sub_1939B0();
  dword_4876D0 = sub_327254(v2);
  v0 = dword_4876D0;
  v3 = strchr((const char *)dword_4876D0, 58);
  v4 = v3;
  if ( !v3 )
    return v0;
  v5 = strlen(v3) - 1;
  *v4 = v4[v5];
  v4[v5] = 0;
  return v0;
}
