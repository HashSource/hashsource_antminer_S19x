int sub_74F6C()
{
  int result; // r0
  int v1; // r0
  int v2; // r7
  int *v3; // r0
  const char *v4; // r0
  int v5; // [sp+8h] [bp-8Ch] BYREF
  char v6[128]; // [sp+Ch] [bp-88h] BYREF

  result = sub_74CE0();
  if ( result )
  {
    dword_B8DE0 = result;
  }
  else
  {
    v1 = socket(10, 2, 17);
    v2 = v1;
    if ( v1 == -1 )
    {
      v3 = _errno_location();
      sub_76B54(*v3, v6, 128);
      v4 = (const char *)sub_7487C((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
      result = sub_704E4("./../lib/isc/unix/net.c", 338, (int)"socket() %s: %s", v4, v6);
      dword_B8DE0 = 34;
    }
    else
    {
      v5 = 1;
      if ( setsockopt(v1, 41, 49, &v5, 4u) < 0 )
        dword_B8DE0 = 23;
      else
        dword_B8DE0 = 0;
      return close(v2);
    }
  }
  return result;
}
