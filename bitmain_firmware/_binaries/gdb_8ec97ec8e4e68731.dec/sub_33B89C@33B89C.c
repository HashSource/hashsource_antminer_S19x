unsigned int __fastcall sub_33B89C(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r2

  v2 = a1[1];
  if ( a2 >= v2 )
    sub_33D20C("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v2);
  return *a1 + a2;
}
