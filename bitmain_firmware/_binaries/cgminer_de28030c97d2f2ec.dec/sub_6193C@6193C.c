int __fastcall sub_6193C(int a1, int *a2, _DWORD *a3)
{
  int result; // r0

  if ( sub_618DC(a1, a2) )
  {
    result = sub_61840(a1 + 12, a3);
    a2[1] = (int)a3;
    *a2 = a2[1];
  }
  else
  {
    result = sub_61840(*a2, a3);
    *a2 = (int)a3;
  }
  return result;
}
