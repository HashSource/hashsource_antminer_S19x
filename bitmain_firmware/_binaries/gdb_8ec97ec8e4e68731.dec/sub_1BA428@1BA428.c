int __fastcall sub_1BA428(int result)
{
  int i; // r4
  _DWORD *v2; // r0
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = result;
  if ( dword_487B78 )
  {
    v2 = (_DWORD *)sub_242FC8(result);
    result = sub_2594B0(*v2, "observer_notify_before_prompt() called\n");
  }
  for ( i = dword_487BFC; i; i = *(_DWORD *)i )
    result = (**(int (__fastcall ***)(_DWORD, int *))(i + 4))(*(_DWORD *)(*(_DWORD *)(i + 4) + 4), &v3);
  return result;
}
