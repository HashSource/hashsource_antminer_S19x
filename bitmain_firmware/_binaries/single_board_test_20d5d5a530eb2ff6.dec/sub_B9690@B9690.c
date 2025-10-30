int *__fastcall sub_B9690(int *result, int *a2)
{
  int *v3; // r4
  int v4; // r2
  int v5; // r3

  if ( result != a2 )
  {
    v3 = result;
    if ( sub_B89E4((int)(result + 1), (int)(a2 + 1))
      && sub_B89E4((int)(v3 + 6), (int)(a2 + 6))
      && sub_B89E4((int)(v3 + 11), (int)(a2 + 11)) )
    {
      v4 = *a2;
      v3[16] = a2[16];
      v5 = a2[17];
      *v3 = v4;
      v3[17] = v5;
      return v3;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
