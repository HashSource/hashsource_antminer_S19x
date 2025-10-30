int __fastcall sub_6C570(int a1, unsigned __int8 a2, __int16 a3, _BYTE *a4)
{
  _BYTE v8[36]; // [sp+1Ch] [bp-30h] BYREF
  char v9[4]; // [sp+40h] [bp-Ch] BYREF
  int v10; // [sp+44h] [bp-8h]

  v9[0] = HIBYTE(a3);
  v9[1] = a3;
  if ( ioctl(a1, 0x703u, a2) >= 0 )
  {
    v10 = sub_6C4A0(a1, v9);
    if ( !v10 )
      usleep(0xBB8u);
    if ( v10 >= 0 )
    {
      if ( sub_6C41C(a1, 1, 0, 1, (int)v8) )
      {
        return -1;
      }
      else
      {
        *a4 = v8[0];
        return 0;
      }
    }
    else
    {
      return v10;
    }
  }
  else
  {
    perror("failed to get i2c_slave ioctl");
    return -1;
  }
}
