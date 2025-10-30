__int64 __fastcall vip_sys_cmm_cb_i2c(unsigned int a1, __int64 a2)
{
  if ( dword_4180 || !off_4190 )
    return 0xFFFFFFFFLL;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))off_4190)(qword_4188, a1, a2);
}
