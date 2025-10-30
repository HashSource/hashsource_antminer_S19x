int __fastcall sub_17ADA8(_DWORD *a1, int a2, int a3, const char *a4, _DWORD *a5)
{
  int result; // r0
  int v10; // r7
  signed int v11; // r4
  int v12; // r0

  result = sub_10C010((int)a1);
  v10 = result;
  if ( result > 0 )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = sub_10C01C(a1, v11);
        sub_17AB1C(v12, a2, a3, a5);
        result = sub_10C010((int)a1) - 1;
        if ( result > v11++ )
          break;
        if ( v11 == v10 )
          return result;
      }
      result = sub_B550C(a2, (unsigned __int8 *)"%s", a4);
    }
    while ( v11 != v10 );
  }
  return result;
}
