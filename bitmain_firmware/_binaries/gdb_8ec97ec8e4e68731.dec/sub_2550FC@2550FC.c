int __fastcall sub_2550FC(int a1, void *a2, int a3, const char **a4)
{
  int v8; // r4
  _BYTE v10[4]; // [sp+0h] [bp-24h] BYREF
  int v11; // [sp+4h] [bp-20h] BYREF
  char *format[2]; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v13[20]; // [sp+10h] [bp-14h] BYREF

  format[0] = v13;
  sub_251FF4(format, "%", (int)"");
  if ( 0x7FFFFFFF - (unsigned int)format[1] <= 2 )
    sub_33D184("basic_string::append");
  sub_33C320(format, &unk_3F1C04, 3);
  v8 = sscanf(*a4, format[0], v10, &v11);
  if ( v8 )
  {
    if ( (*a4)[v11] )
    {
      v8 = 0;
    }
    else
    {
      sub_254E04(a1, a3, (int)v10, a2);
      v8 = 1;
    }
  }
  if ( format[0] != v13 )
    sub_339E64(format[0]);
  return v8;
}
