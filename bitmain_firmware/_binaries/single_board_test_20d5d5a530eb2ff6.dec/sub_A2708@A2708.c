bool __fastcall sub_A2708(int a1)
{
  _BOOL4 result; // r0

  result = sub_82238(a1);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 16))(a1) != 0;
  return result;
}
