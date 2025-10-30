int __fastcall sub_C6E54(_DWORD *a1, _DWORD *a2)
{
  int (__fastcall *v3)(_DWORD *, _DWORD *); // r4
  int result; // r0
  int v6; // r1
  int v7; // r0
  bool v8; // zf

  v3 = *(int (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 72);
  if ( v3 )
  {
    if ( *a1 != *a2 )
      goto LABEL_3;
    v6 = a1[4];
    if ( !v6 )
      goto LABEL_10;
    v7 = a2[1];
    v8 = v6 == v7;
    if ( v6 != v7 )
      v8 = v7 == 0;
    if ( v8 )
    {
LABEL_10:
      result = v3(a1, a2);
      if ( result )
      {
        if ( sub_C6DF4(a1, a2) <= 0 )
        {
          sub_D0048(16, 294, 107, "crypto/ec/ec_lib.c", 813);
          return 0;
        }
        else
        {
          return 1;
        }
      }
    }
    else
    {
LABEL_3:
      sub_D0048(16, 294, 101, "crypto/ec/ec_lib.c", 806);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 294, 66, "crypto/ec/ec_lib.c", 802);
    return 0;
  }
  return result;
}
