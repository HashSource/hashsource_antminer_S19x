_BYTE *__fastcall sub_284748(const char *a1, int a2, _BYTE *a3)
{
  size_t v5; // r0
  _BYTE *v6; // r5
  _BYTE *result; // r0

  v5 = strlen(a1);
  v6 = sub_93028(v5 + 2);
  *v6 = *(_BYTE *)dword_48ACB4;
  strcpy(v6 + 1, a1);
  result = v6;
  if ( a3 )
    *a3 = *(_BYTE *)dword_48ACB4;
  return result;
}
