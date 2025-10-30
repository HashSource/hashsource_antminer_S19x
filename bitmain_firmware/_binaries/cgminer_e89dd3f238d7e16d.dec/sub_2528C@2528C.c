int __fastcall sub_2528C(double *a1, int a2)
{
  double v2; // d0
  int v3; // r0
  char v7[8]; // [sp+14h] [bp-818h] BYREF
  int v8; // [sp+814h] [bp-18h]
  double v9; // [sp+818h] [bp-14h]
  double v10; // [sp+820h] [bp-Ch]

  v3 = sub_65E88(a2, 0);
  sub_67364(v3);
  v9 = v2;
  if ( v2 == 0.0 )
    return 0;
  sub_1F744((int)a1 + 212, "util.c", "parse_diff", 2306);
  if ( a1[227] <= 0.0 )
  {
    v10 = a1[228];
    a1[228] = v9;
    a1[227] = a1[228];
  }
  else
  {
    v10 = a1[227];
    a1[227] = v9;
  }
  sub_1F798((int)a1 + 212, "util.c", "parse_diff", 2319);
  if ( v10 == v9 )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v7, 0x800u, "Pool %d difficulty set to %f", *(_DWORD *)a1, v9);
      sub_1DB6C(7, v7, 0);
    }
  }
  else
  {
    v8 = (int)v9;
    if ( v9 == (double)(int)v9 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        snprintf(v7, 0x800u, "Pool %d difficulty changed to %d", *(_DWORD *)a1, v8);
        sub_1DB6C(5, v7, 0);
      }
    }
    else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(v7, 0x800u, "Pool %d difficulty changed to %.1f", *(_DWORD *)a1, v9);
      sub_1DB6C(5, v7, 0);
    }
  }
  return 1;
}
