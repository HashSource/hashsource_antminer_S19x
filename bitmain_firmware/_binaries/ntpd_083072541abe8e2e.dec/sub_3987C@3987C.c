int __fastcall sub_3987C(int a1)
{
  _DWORD *v1; // r6
  int result; // r0
  int (__fastcall *v4)(int, int); // r3
  int (__fastcall *v5)(int); // r2

  v1 = *(_DWORD **)(a1 + 84);
  result = *(unsigned __int8 *)(a1 + 89);
  v4 = *(int (__fastcall **)(int, int))(v1[1] + 24);
  if ( v4 )
    result = v4(result, a1);
  v5 = (int (__fastcall *)(int))v1[13];
  if ( v5 )
  {
    if ( v1[12] <= (unsigned int)current_time )
      return v5(a1);
  }
  return result;
}
