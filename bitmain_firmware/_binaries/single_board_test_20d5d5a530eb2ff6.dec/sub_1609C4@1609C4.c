int __fastcall sub_1609C4(_DWORD *a1, const char *a2, const char *a3)
{
  const char *v4; // r3

  v4 = a3;
  if ( !a3 )
    v4 = "/";
  if ( sub_B550C(a1[4], "%s %s HTTP/1.0\r\n", a2, v4) <= 0 )
    return 0;
  *a1 = 4105;
  return 1;
}
