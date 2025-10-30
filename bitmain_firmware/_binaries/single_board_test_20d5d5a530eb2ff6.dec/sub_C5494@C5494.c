int __fastcall sub_C5494(int a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // r1
  int (__fastcall *v5)(_DWORD *, int); // r3
  int v6; // r5

  result = EC_KEY_new();
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = sub_C4BE8(a1);
    v3[3] = v4;
    if ( !v4
      || (result = (int)v3, (v5 = *(int (__fastcall **)(_DWORD *, int))(*v3 + 20)) != 0)
      && (v6 = v5(v3, v4), result = (int)v3, !v6) )
    {
      sub_C5410((int)v3);
      return 0;
    }
  }
  return result;
}
