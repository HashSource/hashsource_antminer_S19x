int __fastcall sub_1BA968(int result, int a2, int a3, int a4)
{
  int i; // r4
  _DWORD *v5; // r0
  _DWORD v6[5]; // [sp+10h] [bp-14h] BYREF

  v6[3] = a4;
  v6[0] = result;
  v6[1] = a2;
  v6[2] = a3;
  if ( dword_487B78 )
  {
    v5 = (_DWORD *)sub_242FC8(result);
    result = sub_2594B0(*v5, "observer_notify_inferior_call_post() called\n");
  }
  for ( i = dword_487C18; i; i = *(_DWORD *)i )
    result = (**(int (__fastcall ***)(_DWORD, _DWORD *))(i + 4))(*(_DWORD *)(*(_DWORD *)(i + 4) + 4), v6);
  return result;
}
