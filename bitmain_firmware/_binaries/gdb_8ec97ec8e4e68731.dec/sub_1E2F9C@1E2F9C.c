int __fastcall sub_1E2F9C(int a1, int a2)
{
  int v3; // r0
  int v4; // r7
  int result; // r0
  int v6; // r5
  int v7; // r4
  int v8; // r0
  int v10; // r3

  v3 = sub_1DD58C(a2);
  v4 = ((int (__fastcall *)(int))loc_1E2770)(v3);
  result = ((int (__fastcall *)(int))loc_1E2198)(3);
  if ( !result || result == 2 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_1DD58C(a2);
      result = ((int (__fastcall *)(int))loc_166E9C)(v8);
      if ( v7++ >= result )
        break;
      v10 = *(_DWORD *)(v4 + 4) + v6;
      v6 += 24;
      if ( *(_DWORD *)(v10 + 16) )
        ((void (__fastcall *)(int, _DWORD))loc_1DDD80)(a2, *(_DWORD *)(v10 + 4));
    }
  }
  return result;
}
