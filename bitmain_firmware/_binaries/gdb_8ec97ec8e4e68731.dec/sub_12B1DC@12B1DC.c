int __fastcall sub_12B1DC(_DWORD *a1, int a2)
{
  int (__fastcall **v2)(int, _DWORD, _DWORD); // r4
  int (__fastcall **v3)(int, _DWORD, _DWORD); // r7
  int (__fastcall *v6)(int, _DWORD, _DWORD); // t1
  int result; // r0

  v2 = (int (__fastcall **)(int, _DWORD, _DWORD))a1[1];
  v3 = (int (__fastcall **)(int, _DWORD, _DWORD))a1[2];
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v6 = *v2++;
    result = v6(a2, *a1, 0);
    if ( result )
      break;
    if ( v3 == v2 )
      return 0;
  }
  return result;
}
