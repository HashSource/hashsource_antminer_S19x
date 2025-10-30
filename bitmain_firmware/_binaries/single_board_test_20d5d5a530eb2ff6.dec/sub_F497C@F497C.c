int __fastcall sub_F497C(int a1, int a2)
{
  int v4; // r0
  int (__fastcall *v5)(int, int); // r3

  v4 = sub_F47B0();
  if ( v4 )
  {
    v5 = *(int (__fastcall **)(int, int))(v4 + 4);
    if ( v5 )
      return v5(a1, a2);
  }
  sub_D0048(36, 100, 101, (int)"crypto/rand/rand_lib.c", 946);
  return -1;
}
