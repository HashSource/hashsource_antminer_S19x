int __fastcall sub_54DC4(int a1, _DWORD *a2)
{
  char v4[2048]; // [sp+Ch] [bp-808h] BYREF
  int v5; // [sp+80Ch] [bp-8h]

  v5 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
      *a2 = dword_535ECC;
    return v5;
  }
  else
  {
    strcpy(v4, "bad param\n");
    sub_3B6AC(0, v4, 0, (int)v4);
    return -3;
  }
}
