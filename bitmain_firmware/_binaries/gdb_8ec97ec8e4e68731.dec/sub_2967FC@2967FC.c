int __fastcall sub_2967FC(int a1, int a2, int a3)
{
  signed int v6; // r3
  int v7; // r1
  int v8; // r0
  char v10[16]; // [sp+0h] [bp-10h] BYREF

  v6 = sub_2934C8(v10, 16);
  if ( v6 <= 0 )
    return -1;
  if ( a1 >= 0 )
  {
    v7 = a2;
    v8 = a1;
  }
  else
  {
    v7 = a3;
    v8 = -a1;
  }
  return sub_296630(v8, v7, (int)v10, v6);
}
