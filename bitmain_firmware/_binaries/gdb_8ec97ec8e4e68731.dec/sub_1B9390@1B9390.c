int __fastcall sub_1B9390(int result, int a2)
{
  int i; // r4
  _DWORD *v3; // r0
  _DWORD v4[2]; // [sp+0h] [bp-8h] BYREF

  v4[0] = result;
  v4[1] = a2;
  if ( dword_487B78 )
  {
    v3 = (_DWORD *)sub_242FC8(result);
    result = sub_2594B0(*v3, "observer_notify_inferior_created() called\n");
  }
  for ( i = dword_487BA4; i; i = *(_DWORD *)i )
    result = (**(int (__fastcall ***)(_DWORD, _DWORD *))(i + 4))(*(_DWORD *)(*(_DWORD *)(i + 4) + 4), v4);
  return result;
}
