int __fastcall sub_6C41C(int a1, char a2, char a3, int a4, int a5)
{
  _BYTE v6[4]; // [sp+10h] [bp-14h] BYREF
  int v7; // [sp+14h] [bp-10h]
  int v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+1Ch] [bp-8h]

  v6[0] = a2;
  v6[1] = a3;
  v7 = a4;
  v8 = a5;
  v9 = ioctl(a1, 0x720u, v6);
  if ( v9 < 0 )
    perror("failed to get i2c_smbus ioctl");
  return v9;
}
