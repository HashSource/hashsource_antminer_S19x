int __fastcall sub_277050(char *a1)
{
  const char *v2; // r5
  int v3; // r4
  void *ptr; // [sp+4h] [bp-20h] BYREF
  void *v6; // [sp+8h] [bp-1Ch] BYREF
  char v7; // [sp+10h] [bp-14h] BYREF

  sub_27455C(&ptr, a1, 0);
  v2 = (const char *)ptr;
  if ( ptr )
  {
    sub_25AF84((int)&v6, a1);
    v3 = sub_276EE0(v2, (int)sub_27455C, (int)v6);
    if ( v6 != &v7 )
      sub_339E64(v6);
  }
  else
  {
    sub_946B0("Could not open \"%s\"", a1);
    v3 = 0;
  }
  if ( ptr )
    free(ptr);
  return v3;
}
