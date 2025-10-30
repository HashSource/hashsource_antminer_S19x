int __fastcall sub_11E018(int a1, int a2, _DWORD *a3)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a2);
  if ( result == -1 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a2 + 4);
    *a3 = 12;
  }
  else if ( result )
  {
    *a3 = 4;
  }
  else
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a2);
    *a3 = 8;
  }
  return result;
}
