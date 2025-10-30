int __fastcall sub_60BF0(int a1, int *a2, _DWORD *a3)
{
  int result; // r0

  if ( sub_60B90(a1, a2) )
  {
    result = sub_60AEC(a1 + 12, a3);
    a2[1] = (int)a3;
    *a2 = a2[1];
  }
  else
  {
    result = sub_60AEC(*a2, a3);
    *a2 = (int)a3;
  }
  return result;
}
