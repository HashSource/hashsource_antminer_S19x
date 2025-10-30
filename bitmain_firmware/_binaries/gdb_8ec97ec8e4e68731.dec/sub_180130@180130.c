void __fastcall sub_180130(const char *a1, int a2)
{
  _BYTE *v4; // r4
  int v5; // [sp+0h] [bp-Ch] BYREF
  void *ptr; // [sp+4h] [bp-8h] BYREF

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  sub_17E884();
  sub_17E8C4();
  if ( !a1 )
    sub_51E9C("a location");
  sub_17EBD4(&ptr, a1, &v5);
  v4 = ptr;
  sub_180104((int)&dword_4899A0, v5);
  sub_DB7B4(v4, a2, 1);
  if ( ptr )
    free(ptr);
}
