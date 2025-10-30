void __fastcall sub_345C68(int *a1, size_t a2, int a3)
{
  unsigned int v3; // r5

  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 > 0x3FFFFFFC )
    sub_33D184("basic_string::resize");
  if ( a2 > v3 )
  {
    sub_345BD4(a1, a2 - v3, a3);
  }
  else if ( a2 < v3 )
  {
    sub_34504C(a1, a2, v3 - a2, 0);
  }
}
