int __fastcall init(int a1, int a2, int a3)
{
  int result; // r0
  int (__fastcall **v7)(int, int, int); // r5
  int v8; // r6
  int i; // r4
  int (__fastcall *v10)(int, int, int); // t1

  result = init_proc();
  v7 = (int (__fastcall **)(int, int, int))&off_26F08;
  v8 = &off_26F0C - &off_26F08;
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v10 = *v7++;
      result = v10(a1, a2, a3);
    }
  }
  return result;
}
