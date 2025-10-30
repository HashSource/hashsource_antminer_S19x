bool __fastcall sub_6EDE0(int *a1, int a2)
{
  bool v2; // zf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  return !v2 && sub_6DD68(a1, a2);
}
