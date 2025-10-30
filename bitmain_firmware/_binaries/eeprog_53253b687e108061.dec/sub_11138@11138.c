int __fastcall sub_11138(int a1, unsigned __int8 *a2)
{
  int v2; // r4
  FILE *v4; // r5
  int *v5; // r0
  char *v6; // r0

  v2 = i2c_smbus_write_byte_data(a1, *a2, a2[1]);
  if ( v2 < 0 )
  {
    v4 = (FILE *)stderr;
    v5 = _errno_location();
    v6 = strerror(*v5);
    fprintf(v4, "Error i2c_write_2b: %s\n", v6);
  }
  usleep(0x1388u);
  return v2;
}
