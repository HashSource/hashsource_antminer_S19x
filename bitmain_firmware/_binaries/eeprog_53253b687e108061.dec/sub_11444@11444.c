int __fastcall sub_11444(int a1, unsigned int a2, int a3)
{
  int v3; // r3
  int v4; // r4
  FILE *v6; // r5
  int *v7; // r0
  char *v8; // r0
  int v9; // r0
  unsigned __int8 v10[8]; // [sp+4h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 == 1 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    v10[0] = a2;
    v10[1] = a3;
    return sub_11138(v9, v10);
  }
  else
  {
    if ( v3 == 2 )
    {
      v4 = i2c_smbus_write_word_data(*(_DWORD *)(a1 + 8), a2 >> 8, (unsigned __int8)a2 | (a3 << 8));
      if ( v4 < 0 )
      {
        v6 = (FILE *)stderr;
        v7 = _errno_location();
        v8 = strerror(*v7);
        fprintf(v6, "Error i2c_write_3b: %s\n", v8);
      }
      usleep(0x1388u);
    }
    else
    {
      v4 = -1;
      fwrite("ERR: unknown eeprom type\n", 1u, 0x19u, (FILE *)stderr);
    }
    return v4;
  }
}
