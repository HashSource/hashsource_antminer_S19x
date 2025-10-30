int __fastcall sub_25B88(double *a1, int a2)
{
  double v2; // d0
  int v3; // r0
  char v7[8]; // [sp+14h] [bp-818h] BYREF
  int v8; // [sp+814h] [bp-18h]
  double v9; // [sp+818h] [bp-14h]
  double v10; // [sp+820h] [bp-Ch]

  v3 = sub_66B80(a2, 0);
  sub_67FF8(v3);
  v9 = v2;
  if ( v2 == 0.0 )
    return 0;
  sub_2002C((int)a1 + 212, "util.c", "parse_diff", 2306);
  if ( a1[229] <= 0.0 )
  {
    v10 = a1[230];
    a1[230] = v9;
    a1[229] = a1[230];
  }
  else
  {
    v10 = a1[229];
    a1[229] = v9;
  }
  sub_2007C((int)a1 + 212, "util.c", "parse_diff", 2319);
  if ( v10 == v9 )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v7, 0x800u, "Pool %d difficulty set to %f", *(_DWORD *)a1, v9);
      sub_1E4EC(7, v7, 0);
    }
  }
  else
  {
    v8 = (int)v9;
    if ( (double)(int)v9 == v9 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        snprintf(v7, 0x800u, "Pool %d difficulty changed to %d", *(_DWORD *)a1, v8);
        sub_1E4EC(5, v7, 0);
      }
    }
    else if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v7, 0x800u, "Pool %d difficulty changed to %.1f", *(_DWORD *)a1, v9);
      sub_1E4EC(5, v7, 0);
    }
  }
  return 1;
}
