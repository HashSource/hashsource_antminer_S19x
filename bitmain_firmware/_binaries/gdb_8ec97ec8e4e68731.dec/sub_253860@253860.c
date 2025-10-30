int __fastcall sub_253860(int a1, void *a2, int a3, const char **a4)
{
  unsigned int v8; // r2
  char *v9; // r3
  int v10; // r10
  unsigned int v11; // r5
  int v12; // r5
  int v14; // [sp+Ch] [bp-24h] BYREF
  _BYTE v15[8]; // [sp+10h] [bp-20h] BYREF
  char *format; // [sp+18h] [bp-18h] BYREF
  int v17; // [sp+1Ch] [bp-14h]
  _DWORD v18[4]; // [sp+20h] [bp-10h] BYREF

  format = (char *)v18;
  sub_251FF4(&format, "%", (int)"");
  v9 = format;
  v10 = v17;
  if ( format != (char *)v18 )
    v8 = v18[0];
  v11 = v17 + 1;
  if ( format == (char *)v18 )
    v8 = 15;
  if ( v11 > v8 )
  {
    sub_33B4F8(&format, v17, 0);
    v9 = format;
  }
  v9[v10] = 76;
  v17 = v10 + 1;
  format[v11] = 0;
  if ( (unsigned int)(0x7FFFFFFF - v17) <= 2 )
    sub_33D184("basic_string::append");
  sub_33C320(&format, &unk_3F1C04, 3);
  v12 = sscanf(*a4, format, v15, &v14);
  if ( v12 )
  {
    if ( (*a4)[v14] )
    {
      v12 = 0;
    }
    else
    {
      sub_253574(a1, a3, (int)v15, a2);
      v12 = 1;
    }
  }
  if ( format != (char *)v18 )
    sub_339E64(format);
  return v12;
}
