_DWORD *__fastcall sub_1E1EA0(_DWORD *a1)
{
  void *ptr; // [sp+4h] [bp-4h] BYREF

  sub_230590(&ptr, &dword_4899A0, 19, 0);
  if ( ptr )
  {
    sub_24D544(a1);
    if ( ptr )
      free(ptr);
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
