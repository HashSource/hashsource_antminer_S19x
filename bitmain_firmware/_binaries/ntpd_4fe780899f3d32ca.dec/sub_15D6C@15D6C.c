int __fastcall sub_15D6C(int (__fastcall *a1)(int, _DWORD **), int a2)
{
  int result; // r0
  _DWORD *v5; // [sp+Ch] [bp-Ch] BYREF
  char v6; // [sp+10h] [bp-8h]

  result = 2092;
  v6 = 1;
  v5 = (_DWORD *)ep_list;
  if ( ep_list )
  {
    do
    {
      result = a1(a2, &v5);
      v5 = (_DWORD *)*v5;
    }
    while ( v5 );
  }
  return result;
}
