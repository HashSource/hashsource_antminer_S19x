__int64 __fastcall sub_298(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // w20
  int v7; // [xsp+24h] [xbp+24h] BYREF
  __int64 v8; // [xsp+28h] [xbp+28h] BYREF

  v7 = -558907665;
  v5 = kstrtoull(a3, 0, &v8);
  if ( (v5 & 0x80000000) != 0 )
  {
    printk(&unk_2BF0, v5);
    return (int)v5;
  }
  else
  {
    tee_cv_efuse_read((unsigned int)v8, 4, &v7);
    printk(&unk_2C08, v8);
    return a4;
  }
}
