int __fastcall sub_3452DC(int *a1, unsigned int a2)
{
  int v2; // r3
  unsigned int v3; // r2

  v2 = *a1;
  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 >= v3 )
    sub_33D20C("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  if ( *(int *)(v2 - 4) >= 0 )
  {
    sub_3451A4(a1);
    v2 = *a1;
  }
  return v2 + a2;
}
