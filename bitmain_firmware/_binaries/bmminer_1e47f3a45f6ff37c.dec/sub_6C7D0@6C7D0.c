int __fastcall sub_6C7D0(int a1, unsigned __int8 a2, char a3, __int16 a4)
{
  _WORD v8[18]; // [sp+18h] [bp-2Ch] BYREF
  int v9; // [sp+3Ch] [bp-8h]

  v8[0] = a4;
  if ( ioctl(a1, 0x703u, a2) >= 0 )
  {
    v9 = sub_6C41C(a1, 0, a3, 3, (int)v8);
    if ( !v9 )
      usleep(0xBB8u);
    return v9;
  }
  else
  {
    perror("failed to get i2c_slave ioctl");
    return -1;
  }
}
