int __fastcall sub_54430(int a1, _DWORD *a2)
{
  char v5[2048]; // [sp+Ch] [bp-808h] BYREF
  int v6; // [sp+80Ch] [bp-8h]

  v6 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      sub_52E24(19, a2);
      *a2 >>= 16;
      return 0;
    }
    return v6;
  }
  else
  {
    strcpy(v5, "bad param\n");
    sub_3AF5C(0, v5, 0, (int)v5);
    return -3;
  }
}
