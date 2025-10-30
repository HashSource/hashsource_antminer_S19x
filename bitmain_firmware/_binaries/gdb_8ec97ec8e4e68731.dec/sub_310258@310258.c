int __fastcall sub_310258(unsigned int *a1, unsigned __int8 **a2, _DWORD *a3)
{
  int v6; // r0
  signed int v7; // r5

  v6 = sub_30D00C(a2);
  if ( v6 == -1 )
    return 0;
  v7 = v6;
  if ( (int)strlen((const char *)*a2) < v6 )
    return 0;
  sub_30FA58(a1, (const char **)a2, v7, a3);
  return 1;
}
