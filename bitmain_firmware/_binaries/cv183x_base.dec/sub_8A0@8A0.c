__int64 __fastcall sub_8A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int chip_id; // w0
  unsigned __int64 v5; // x1
  __int64 result; // x0
  __int64 v9; // [xsp+28h] [xbp+28h] BYREF

  if ( (_DWORD)a2 == -2147192063 )
  {
    v9 = 0;
    chip_id = cvi_base_read_chip_id();
  }
  else
  {
    if ( (_DWORD)a2 != -2147192062 )
    {
      printk(&unk_2D90, a2);
      return -25;
    }
    v9 = 0;
    chip_id = cvi_base_read_chip_version();
  }
  v9 = chip_id;
  v5 = *(_QWORD *)(_ReadStatusReg(SP_EL0) + 8);
  if ( a3 >= 0xFFFFFFFFFFFFFFFCLL || a3 + 4 > v5 )
    return -14;
  result = _arch_copy_to_user(a3, &v9, 4);
  if ( result )
    return -14;
  return result;
}
