int __fastcall sub_34471C(int *a1, unsigned int a2)
{
  int v2; // r0
  unsigned int v3; // r2

  v2 = *a1;
  v3 = *(_DWORD *)(v2 - 12);
  if ( a2 >= v3 )
    sub_33D20C("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  return v2 + a2;
}
