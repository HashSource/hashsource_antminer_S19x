int __fastcall sub_71A8C(_DWORD *a1, const char *a2, int a3)
{
  int *v6; // [sp+14h] [bp-10h]
  int *v7; // [sp+18h] [bp-Ch]

  v7 = (int *)(a1[1] + 8 * (a3 & ((1 << a1[2]) - 1)));
  v6 = (int *)sub_719C4((int)a1, v7, a2, a3);
  if ( !v6 )
    return -1;
  if ( v6 == (int *)*v7 && v6 == (int *)v7[1] )
  {
    v7[1] = (int)(a1 + 3);
    *v7 = v7[1];
  }
  else if ( v6 == (int *)*v7 )
  {
    *v7 = v6[1];
  }
  else if ( v6 == (int *)v7[1] )
  {
    v7[1] = *v6;
  }
  sub_71894(v6);
  sub_71894(v6 + 2);
  sub_70880(v6[5]);
  sub_74DE8(v6);
  --*a1;
  return 0;
}
