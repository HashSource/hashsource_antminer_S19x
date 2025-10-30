unsigned __int64 __fastcall sub_456C0(_DWORD *a1, char *a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r4
  unsigned __int64 v5; // r2
  int *v6; // r0
  unsigned __int8 *v8; // [sp+0h] [bp-Ch] BYREF

  v3 = sub_45590(a1, a2, 0);
  if ( v3 == -1 || (v4 = (unsigned __int8 *)(*a1 + a1[5 * v3 + 3])) == 0 )
  {
    v6 = _errno_location();
    v5 = 0;
    *v6 = 22;
  }
  else
  {
    v5 = sub_43F08(v4, &v8);
    if ( v4 == v8 || *v8 )
      return 0;
  }
  return v5;
}
