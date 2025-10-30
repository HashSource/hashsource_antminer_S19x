int __fastcall sub_1C9914(const char *a1, int a2)
{
  void *ptr; // [sp+4h] [bp-38h] BYREF
  char v6; // [sp+Ch] [bp-30h] BYREF
  int (**v7)(); // [sp+1Ch] [bp-20h] BYREF
  char *s; // [sp+20h] [bp-1Ch]
  int v9; // [sp+24h] [bp-18h]
  char v10; // [sp+28h] [bp-14h] BYREF

  sub_256760(&v7);
  s = &v10;
  v7 = &off_3F2924;
  v9 = 0;
  v10 = 0;
  sub_1C937C(a1, (int)&v7);
  sub_58BE4(&ptr, s);
  sub_2435B0(ptr, a2);
  if ( ptr != &v6 )
    sub_339E64(ptr);
  return sub_256478(&v7);
}
