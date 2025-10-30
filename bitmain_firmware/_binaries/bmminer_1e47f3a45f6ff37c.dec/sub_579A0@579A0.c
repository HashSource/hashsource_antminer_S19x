int sub_579A0()
{
  char v2[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_535DA0 )
  {
    if ( !dword_536294 )
      dword_536294 = sub_59400(358760, 0, 0);
    return 0;
  }
  else
  {
    strcpy(v2, "please init platform first!!\n");
    sub_3B6AC(0, v2, 0, (int)v2);
    return -1;
  }
}
