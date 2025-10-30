int __fastcall sub_5665C(unsigned int a1)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 0;
  if ( a1 > 5 )
  {
    snprintf(v3, 0x800u, "bad fan id = %d\n", a1);
    sub_3B6AC(0, v3, 0, (int)v3);
  }
  return dword_B3814[a1];
}
