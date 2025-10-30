int __fastcall sub_6C72C(int a1, unsigned __int8 a2, int a3, _WORD *a4)
{
  _WORD v8[18]; // [sp+18h] [bp-2Ch] BYREF
  int v9; // [sp+3Ch] [bp-8h]

  if ( ioctl(a1, 0x703u, a2) >= 0 )
  {
    v9 = sub_6C41C(a1, 1, 0, 3, (int)v8);
    if ( v9 >= 0 )
    {
      *a4 = v8[0];
      return 0;
    }
    else
    {
      return v9;
    }
  }
  else
  {
    perror("failed to get i2c_slave ioctl");
    return -1;
  }
}
