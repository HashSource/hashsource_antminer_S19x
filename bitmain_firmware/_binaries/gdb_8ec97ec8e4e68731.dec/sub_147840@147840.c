int sub_147840()
{
  int result; // r0
  int v1; // r4
  int v2; // r0
  int v3; // r0

  result = ((int (*)(void))loc_11EB1C)();
  if ( *(_DWORD *)(dword_4872D8 + 352) + *(_DWORD *)(dword_4872D8 + 356) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = v1++;
      v3 = ((int (__fastcall *)(int))loc_11E164)(v2);
      result = sub_147398(v3);
    }
    while ( *(_DWORD *)(dword_4872D8 + 352) + *(_DWORD *)(dword_4872D8 + 356) > v1 );
  }
  return result;
}
