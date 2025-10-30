int __fastcall sub_C1D04(_DWORD *a1, int a2)
{
  int v2; // r5
  int (__fastcall *v3)(_DWORD *, int); // r3
  int result; // r0
  int v5; // r4

  if ( a1 )
  {
    v2 = a2;
    if ( a2 || (v2 = a1[7]) != 0 )
    {
      if ( (a1[3] & 1) != 0
        || (v3 = (int (__fastcall *)(_DWORD *, int))a1[5]) == 0
        && (v3 = *(int (__fastcall **)(_DWORD *, int))(*a1 + 20)) == 0
        || (result = v3(a1, v2)) == 0 )
      {
        v5 = sub_E9E3C(v2, "crypto/dso/dso_lib.c", 301);
        if ( !v5 )
          sub_D0048(37, 126, 65, "crypto/dso/dso_lib.c", 303);
        return v5;
      }
    }
    else
    {
      sub_D0048(37, 126, 111, "crypto/dso/dso_lib.c", 291);
      return 0;
    }
  }
  else
  {
    sub_D0048(37, 126, 67, "crypto/dso/dso_lib.c", 285);
    return 0;
  }
  return result;
}
