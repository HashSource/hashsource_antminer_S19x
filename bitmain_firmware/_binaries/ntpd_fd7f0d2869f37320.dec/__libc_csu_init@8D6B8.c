int __fastcall _libc_csu_init(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r5
  int i; // r4
  int (__fastcall *v9)(int, int, int); // r3

  result = init_proc();
  v7 = &off_B46D8 - &off_B46D4;
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      v9 = (int (__fastcall *)(int, int, int))*(&off_B46D4 + i);
      result = v9(a1, a2, a3);
    }
  }
  return result;
}
