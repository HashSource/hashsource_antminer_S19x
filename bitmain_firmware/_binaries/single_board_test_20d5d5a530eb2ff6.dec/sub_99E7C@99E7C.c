int __fastcall sub_99E7C(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v7; // r6
  int v8; // r0
  int result; // r0
  int (__fastcall *v10)(_DWORD *, int, int); // r3

  v3 = a1[308];
  v7 = *(_DWORD *)(v3 + 292);
  if ( v7 )
  {
    v8 = sub_84C84(a1);
    result = sub_CEC08(v7, a1, v8, a2, a3, 0, 0, 0);
    if ( result )
      return result;
    v3 = a1[308];
  }
  v10 = *(int (__fastcall **)(_DWORD *, int, int))(v3 + 120);
  if ( v10 )
    return v10(a1, a2, a3);
  else
    return 0;
}
