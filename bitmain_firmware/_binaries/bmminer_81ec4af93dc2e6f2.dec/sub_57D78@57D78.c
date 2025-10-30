int __fastcall sub_57D78(int a1)
{
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  int v3; // [sp+80Ch] [bp-8h]

  v3 = 0;
  if ( dword_5313E8 )
  {
    if ( close(a1) )
    {
      strcpy(v2, "lcd close failed!!!\n");
      sub_3AF5C(0, v2, 0, (int)v2);
      v3 = -1;
    }
    dword_5313E8 = 0;
  }
  return v3;
}
