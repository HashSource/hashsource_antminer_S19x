__int64 __fastcall sub_340(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  int v5; // w0
  __int64 v6; // x1
  int v8; // w0
  unsigned int v9; // [xsp+28h] [xbp+28h] BYREF
  unsigned int v10; // [xsp+2Ch] [xbp+2Ch] BYREF

  v9 = 0;
  v10 = 0;
  v5 = sscanf(a3, "0x%x=0x%x", &v9, &v10);
  v6 = -12;
  if ( v5 == 2 )
  {
    printk(&unk_2C40, v9);
    v8 = tee_cv_efuse_write(v9, v10);
    v6 = v8;
    if ( v8 >= 0 )
      return a4;
  }
  return v6;
}
