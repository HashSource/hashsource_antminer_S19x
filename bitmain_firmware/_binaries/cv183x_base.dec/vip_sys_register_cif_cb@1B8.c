__int64 __fastcall vip_sys_register_cif_cb(__int64 a1, void *a2)
{
  bool v3; // zf
  __int64 result; // x0

  if ( a1 )
    v3 = a2 == 0;
  else
    v3 = 1;
  if ( v3 )
    return 0xFFFFFFFFLL;
  result = 0;
  qword_41B0 = a1;
  off_41B8 = a2;
  return result;
}
