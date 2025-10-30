int __fastcall sub_4379C(int a1, int a2, int a3, _DWORD *a4)
{
  __pid_t v6; // r0
  int result; // r0
  int *v8; // r0

  if ( !a2 || *(_BYTE *)(a2 + 16) || (v6 = *(_DWORD *)(a2 + 12)) == 0 )
    v6 = getpid();
  result = ((int (__fastcall *)(__pid_t, int))loc_4D390)(v6, a3);
  if ( result == -1 )
  {
    v8 = _errno_location();
    *a4 = sub_96090(*v8);
    return -1;
  }
  return result;
}
