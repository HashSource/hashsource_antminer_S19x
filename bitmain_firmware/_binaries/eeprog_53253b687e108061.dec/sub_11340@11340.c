int __fastcall sub_11340(int a1)
{
  ioctl(*(_DWORD *)(a1 + 8), 0x1261u);
  return i2c_smbus_read_byte(*(_DWORD *)(a1 + 8));
}
