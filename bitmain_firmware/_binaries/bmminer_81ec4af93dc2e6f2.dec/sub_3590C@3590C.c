int __fastcall sub_3590C(const char *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0

  result = sscanf(a1, "%d-%d", a2, a3);
  if ( result == 1 )
    *a3 = *a2;
  return result;
}
