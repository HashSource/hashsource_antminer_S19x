int __fastcall sub_11360(int a1, __int16 a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r5
  FILE *v8; // r6
  int *v9; // r0
  char *v10; // r0
  unsigned __int8 v11[4]; // [sp+4h] [bp-4h] BYREF

  ioctl(*(_DWORD *)(a1 + 8), 0x1261u);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 == 1 )
  {
    v6 = i2c_smbus_write_byte(*(_DWORD *)(a1 + 8), (unsigned __int8)a2);
    if ( v6 < 0 )
    {
      v8 = (FILE *)stderr;
      v9 = _errno_location();
      v10 = strerror(*v9);
      fprintf(v8, "Error i2c_write_1b: %s\n", v10);
    }
    usleep(0x1388u);
  }
  else
  {
    if ( v4 != 2 )
    {
      v6 = -1;
      fwrite("ERR: unknown eeprom type\n", 1u, 0x19u, (FILE *)stderr);
      return v6;
    }
    v5 = *(_DWORD *)(a1 + 8);
    v11[0] = HIBYTE(a2);
    v11[1] = a2;
    v6 = sub_11138(v5, v11);
  }
  if ( v6 >= 0 )
    return i2c_smbus_read_byte(*(_DWORD *)(a1 + 8));
  return v6;
}
