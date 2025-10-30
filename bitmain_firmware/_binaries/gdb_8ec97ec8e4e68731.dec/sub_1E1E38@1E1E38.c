void __fastcall sub_1E1E38(int a1)
{
  void *ptr; // [sp+4h] [bp-4h] BYREF

  sub_230590(&ptr, &dword_4899A0, 24, "");
  if ( ptr )
  {
    sub_E1664(a1, (int)ptr);
    if ( ptr )
      free(ptr);
  }
}
