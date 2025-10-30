int sub_73F34()
{
  int result; // r0
  int v1; // r0
  int v2; // r7
  int *v3; // r0
  const char *v4; // r0
  int v5; // [sp+8h] [bp-8Ch] BYREF
  char v6[128]; // [sp+Ch] [bp-88h] BYREF

  result = sub_73CA8();
  if ( result )
  {
    dword_B7DE0 = result;
  }
  else
  {
    v1 = socket(10, 2, 17);
    v2 = v1;
    if ( v1 == -1 )
    {
      v3 = _errno_location();
      sub_75B10(*v3, v6, 128);
      v4 = (const char *)sub_73830((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
      result = sub_6F554("./../lib/isc/unix/net.c", 338, (int)"socket() %s: %s", v4, v6);
      dword_B7DE0 = 34;
    }
    else
    {
      v5 = 1;
      if ( setsockopt(v1, 41, 49, &v5, 4u) < 0 )
        dword_B7DE0 = 23;
      else
        dword_B7DE0 = 0;
      return close(v2);
    }
  }
  return result;
}
