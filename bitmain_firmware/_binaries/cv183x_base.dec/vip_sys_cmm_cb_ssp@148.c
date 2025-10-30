__int64 __fastcall vip_sys_cmm_cb_ssp(unsigned int a1, __int64 a2)
{
  if ( dword_4198 == 1 && off_41A8 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))off_41A8)(qword_41A0, a1, a2);
  else
    return 0xFFFFFFFFLL;
}
