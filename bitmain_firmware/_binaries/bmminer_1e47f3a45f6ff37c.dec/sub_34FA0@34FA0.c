int __fastcall sub_34FA0(int a1)
{
  int *v1; // r1

  if ( dword_B66A0[0] <= 2 )
  {
    v1 = &dword_B66A0[dword_B66A0[0]++];
    v1[1] = a1;
  }
  return 0;
}
