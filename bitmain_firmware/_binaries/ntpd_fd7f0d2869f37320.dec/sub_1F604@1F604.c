char *sub_1F604(int a1, ...)
{
  _DWORD v2[2]; // [sp+4h] [bp-8Ch] BYREF
  char v3[122]; // [sp+Ch] [bp-84h] BYREF
  char v4[6]; // [sp+86h] [bp-Ah] BYREF
  va_list varg_r1; // [sp+A4h] [bp+14h] BYREF

  va_start(varg_r1, a1);
  if ( (unsigned int)sub_6C654(v3, 128, a1, (char *)varg_r1) > 0x7F )
    strcpy(v4, "[...]");
  v2[0] = v3;
  v2[1] = strlen(v3);
  return sub_1F104((char *)v2, 1, 0);
}
