int __fastcall sub_59AE4(int a1, int a2)
{
  int *v4; // r0
  unsigned int v5; // r3

  v4 = (int *)sub_242F8C(a1);
  sub_53A38(*v4, (char *)(*(_DWORD *)(a1 + 28) + 5));
  v5 = (*(unsigned __int8 *)(a1 + 13) >> 1) & 0xF;
  if ( v5 >= 4 && (v5 <= 7 || v5 == 11) )
    return sub_259F10(" is \"%s\".\n", a2);
  else
    return sub_259F10(" is %s.\n", a2);
}
