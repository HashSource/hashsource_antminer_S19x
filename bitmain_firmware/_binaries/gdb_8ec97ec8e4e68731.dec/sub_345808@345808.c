void __fastcall sub_345808(_DWORD *a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(*a1 - 12);
  if ( !v1 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFF, 0);
  sub_34504C(a1, v1 - 1, 1, 0);
}
