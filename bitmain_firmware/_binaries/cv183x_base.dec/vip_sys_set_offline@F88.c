__int64 __fastcall vip_sys_set_offline(char a1, unsigned __int8 a2)
{
  int v2; // w20
  __int64 v3; // x1
  __int64 v4; // x2

  v2 = a2;
  v3 = 1LL << a1;
  if ( v2 )
    v4 = (unsigned int)v3;
  else
    v4 = (unsigned int)~(1 << a1);
  return reg_write_mask(qword_41D8 + 16, v3, v4);
}
