int __fastcall sub_1B9A4C(int result, int a2, int a3)
{
  int i; // r4
  _DWORD *v4; // r0
  _DWORD v5[4]; // [sp+14h] [bp-10h] BYREF

  v5[0] = result;
  v5[1] = a2;
  v5[2] = a3;
  if ( dword_487B78 )
  {
    v4 = (_DWORD *)sub_242FC8(result);
    result = sub_2594B0(*v4, "observer_notify_target_resumed() called\n");
  }
  for ( i = dword_487BC8; i; i = *(_DWORD *)i )
    result = (**(int (__fastcall ***)(_DWORD, _DWORD *))(i + 4))(*(_DWORD *)(*(_DWORD *)(i + 4) + 4), v5);
  return result;
}
