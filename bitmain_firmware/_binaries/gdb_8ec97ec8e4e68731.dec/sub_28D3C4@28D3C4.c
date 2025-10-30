int sub_28D3C4(const char *a1, ...)
{
  const char *v1; // r0
  va_list varg_r1; // [sp+1Ch] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_48AE6C, 0x7Fu, a1, varg_r1);
  if ( !dword_48AE4C )
  {
    sub_28D354();
    dword_48AEEC = 1;
  }
  dword_48AE3C = (int)byte_48AE6C;
  v1 = sub_28C61C(byte_48AE6C, (size_t *)&dword_48AE24, &dword_48AE20, &dword_48AE1C, (size_t *)&dword_48AE10);
  dword_48AE0C = (int)v1;
  dword_48AE18 = 0;
  if ( v1 )
    v1 = (const char *)strlen(v1);
  dword_48AE08 = (int)v1;
  off_470784(v1);
  return 0;
}
