__int64 __fastcall vip_sys_register_cmm_cb(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  int *v6; // x0

  if ( a2 )
    v4 = a3 == 0;
  else
    v4 = 1;
  if ( v4 || a1 > 1 )
    return 0xFFFFFFFFLL;
  v6 = &dword_4180;
  if ( a1 )
    v6 = &dword_4198;
  *v6 = a1;
  *((_QWORD *)v6 + 1) = a2;
  *((_QWORD *)v6 + 2) = a3;
  return 0;
}
