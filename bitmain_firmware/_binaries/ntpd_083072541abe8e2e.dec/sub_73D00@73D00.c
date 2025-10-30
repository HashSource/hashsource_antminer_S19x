int sub_73D00()
{
  int result; // r0
  int v1; // r0
  int v2; // r7
  int v3; // r0
  int *v4; // r0
  const char *v5; // r0
  int *v6; // r0
  const char *v7; // r0
  int v8; // [sp+8h] [bp-88h] BYREF
  char v9[128]; // [sp+Ch] [bp-84h] BYREF

  result = sub_73CA8();
  if ( !result )
  {
    v1 = socket(10, 1, 0);
    v2 = v1;
    if ( v1 == -1 )
    {
      v4 = _errno_location();
      sub_75B10(*v4, v9, 128);
      v5 = (const char *)sub_73830((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
      result = sub_6F554("./../lib/isc/unix/net.c", 266, (int)"socket() %s: %s", v5, v9);
      dword_B7DDC = 34;
      return result;
    }
    v8 = 1;
    if ( setsockopt(v1, 41, 26, &v8, 4u) >= 0 )
    {
      close(v2);
      v3 = socket(10, 2, 0);
      v2 = v3;
      if ( v3 == -1 )
      {
        v6 = _errno_location();
        sub_75B10(*v6, v9, 128);
        v7 = (const char *)sub_73830((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
        result = sub_6F554("./../lib/isc/unix/net.c", 289, (int)"socket() %s: %s", v7, v9);
        dword_B7DDC = 34;
        return result;
      }
      v8 = 1;
      if ( setsockopt(v3, 41, 26, &v8, 4u) < 0 )
        dword_B7DDC = 23;
      else
        dword_B7DDC = 0;
    }
    else
    {
      dword_B7DDC = 23;
    }
    return close(v2);
  }
  dword_B7DDC = result;
  return result;
}
