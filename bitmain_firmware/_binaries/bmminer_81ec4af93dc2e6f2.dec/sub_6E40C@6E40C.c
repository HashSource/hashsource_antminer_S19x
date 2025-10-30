int __fastcall sub_6E40C(int a1, int *a2, _DWORD *a3)
{
  int result; // r0

  if ( sub_6E3AC(a1, a2) )
  {
    result = sub_6E308(a1 + 12, a3);
    a2[1] = (int)a3;
    *a2 = a2[1];
  }
  else
  {
    result = sub_6E308(*a2, a3);
    *a2 = (int)a3;
  }
  return result;
}
