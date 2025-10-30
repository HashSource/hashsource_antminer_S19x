int __fastcall sub_46544(_DWORD *a1, char *a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r4
  int v5; // r0
  int v6; // r3
  int *v8; // r0
  unsigned __int8 *v9; // [sp+0h] [bp-Ch] BYREF

  v3 = sub_463FC(a1, a2, 0);
  if ( v3 == -1 || (v4 = (unsigned __int8 *)(*a1 + a1[5 * v3 + 3])) == 0 )
  {
    v8 = _errno_location();
    v6 = 0;
    *v8 = 22;
  }
  else
  {
    v5 = sub_44D48(v4, &v9);
    if ( v4 == v9 || *v9 )
      return 0;
    else
      return v5;
  }
  return v6;
}
