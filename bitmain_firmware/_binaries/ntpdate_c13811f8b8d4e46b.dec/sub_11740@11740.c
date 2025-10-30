int sub_11740()
{
  int result; // r0
  int v1; // r0
  int v2; // r7
  int *v3; // r0
  const char *v4; // r0
  int v5; // [sp+8h] [bp-8Ch] BYREF
  char v6[128]; // [sp+Ch] [bp-88h] BYREF

  result = sub_114B4();
  if ( result )
  {
    dword_310E4 = result;
  }
  else
  {
    v1 = socket(10, 2, 17);
    v2 = v1;
    if ( v1 == -1 )
    {
      v3 = _errno_location();
      sub_129C0(*v3, v6, 128);
      v4 = (const char *)sub_1103C((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
      result = sub_15008("./../lib/isc/unix/net.c", 338, "socket() %s: %s", v4, v6);
      dword_310E4 = 34;
    }
    else
    {
      v5 = 1;
      if ( setsockopt(v1, 41, 49, &v5, 4u) < 0 )
        dword_310E4 = 23;
      else
        dword_310E4 = 0;
      return close(v2);
    }
  }
  return result;
}
