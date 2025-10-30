int __fastcall sub_69448(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !dword_1B11FC )
    return 0;
  result = close(a1);
  if ( result )
  {
    strcpy(v2, "lcd close failed!!!\n");
    sub_47AB4(0, v2, 0);
    result = -1;
  }
  dword_1B11FC = 0;
  return result;
}
