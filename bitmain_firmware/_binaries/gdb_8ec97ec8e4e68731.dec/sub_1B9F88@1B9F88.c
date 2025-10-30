int __fastcall sub_1B9F88(int a1, int a2, int a3)
{
  int result; // r0
  int i; // r4
  _DWORD *v5; // r0
  _DWORD v6[6]; // [sp+10h] [bp-1Ch] BYREF
  int vars8; // [sp+34h] [bp+8h]
  int varsC; // [sp+38h] [bp+Ch]
  int varg_r3; // [sp+3Ch] [bp+10h]

  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  result = vars8;
  v6[3] = vars8;
  v6[4] = varsC;
  v6[5] = varg_r3;
  if ( dword_487B78 )
  {
    v5 = (_DWORD *)sub_242FC8(vars8);
    result = sub_2594B0(*v5, "observer_notify_thread_ptid_changed() called\n");
  }
  for ( i = dword_487BE4; i; i = *(_DWORD *)i )
    result = (**(int (__fastcall ***)(_DWORD, _DWORD *))(i + 4))(*(_DWORD *)(*(_DWORD *)(i + 4) + 4), v6);
  return result;
}
