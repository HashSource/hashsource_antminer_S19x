int __fastcall sub_15FC8(int result, int a2)
{
  int (__fastcall *v3)(int, _DWORD **); // r4
  _DWORD *v4; // [sp+Ch] [bp-Ch] BYREF
  char v5; // [sp+10h] [bp-8h]

  v5 = 1;
  v4 = (_DWORD *)ep_list;
  if ( ep_list )
  {
    v3 = (int (__fastcall *)(int, _DWORD **))result;
    do
    {
      result = v3(a2, &v4);
      v4 = (_DWORD *)*v4;
    }
    while ( v4 );
  }
  return result;
}
