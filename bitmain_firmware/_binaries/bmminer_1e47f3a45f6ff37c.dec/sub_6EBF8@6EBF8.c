int __fastcall sub_6EBF8(int a1)
{
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  int v3; // [sp+80Ch] [bp-8h]

  v3 = 0;
  if ( dword_53696C )
  {
    if ( close(a1) )
    {
      strcpy(v2, "lcd close failed!!!\n");
      sub_3B6AC(0, v2, 0, (int)v2);
      v3 = -1;
    }
    dword_53696C = 0;
  }
  return v3;
}
