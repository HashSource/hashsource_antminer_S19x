int __fastcall sub_C6594(_DWORD *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r6
  bool v5; // zf
  bool v6; // r3

  if ( *(_DWORD *)(*a1 + 56) )
  {
    if ( *a1 != *a2 )
      goto LABEL_3;
    v3 = a1[1];
    v4 = a2[1];
    v5 = v3 == v4;
    if ( v3 != v4 )
      v5 = v3 == 0;
    v6 = !v5;
    if ( v4 && v6 )
    {
LABEL_3:
      sub_D0048(16, 114, 101, "crypto/ec/ec_lib.c", 712);
      return 0;
    }
    else if ( a1 == a2 )
    {
      return 1;
    }
    else
    {
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
    }
  }
  else
  {
    sub_D0048(16, 114, 66, "crypto/ec/ec_lib.c", 705);
    return 0;
  }
}
