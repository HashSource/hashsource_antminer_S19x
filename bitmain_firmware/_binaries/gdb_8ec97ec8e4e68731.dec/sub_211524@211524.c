int sub_211524()
{
  int result; // r0
  int v1; // r4
  unsigned int v2; // r5
  const char *v3; // r6
  const char *v4; // r0

  sub_259F10("Filename extensions and the languages they represent:");
  result = sub_259F10("\n\n");
  if ( dword_4896A4 != dword_4896A8 )
  {
    v1 = dword_4896A4 + 28;
    v2 = ((dword_4896A8 - (dword_4896A4 + 28)) & 0xFFFFFFFC) + dword_4896A4 + 56;
    do
    {
      v3 = *(const char **)(v1 - 28);
      v1 += 28;
      v4 = (const char *)sub_19444C(*(_DWORD *)(v1 - 32));
      result = sub_259F10("\t%s\t- %s\n", v3, v4);
    }
    while ( v1 != v2 );
  }
  return result;
}
