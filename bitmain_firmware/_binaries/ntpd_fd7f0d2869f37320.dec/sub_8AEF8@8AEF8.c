int __fastcall sub_8AEF8(_DWORD *a1, int a2)
{
  int result; // r0
  char *v5; // r2
  int v6; // [sp+0h] [bp-Ch] BYREF

  v6 = 0;
  sub_88348(a1 + 3, 0);
  result = a1[3];
  if ( !a2 || (result & 0x4000) == 0 )
  {
    if ( (result & 0x1000) != 0 )
      sub_7E87C(result, &v6);
    else
      sub_7E9D0(result, &v6);
    sub_81B90(a1, a2, v6);
    fflush((FILE *)option_usage_fp);
    result = ferror((FILE *)option_usage_fp);
    if ( result )
    {
      if ( (struct _IO_FILE *)option_usage_fp == stderr )
        v5 = off_B9534;
      else
        v5 = off_B9530;
      sub_7E374(a1[7], (int)off_B9538, (int)v5);
    }
  }
  return result;
}
