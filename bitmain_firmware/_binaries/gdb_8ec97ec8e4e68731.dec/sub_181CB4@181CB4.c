int __fastcall sub_181CB4(int a1)
{
  void (__fastcall *v2)(int *, int); // r6
  int v3; // r0
  int v5; // r0

  *(_BYTE *)(sub_183688(a1) + 140) = 0;
  if ( sub_FA624(0) )
  {
    sub_FA464();
    sub_21580C();
  }
  else
  {
    v5 = ps_getpid_0((int)&dword_4878EC);
    sub_9526C(v5, 1, a1);
  }
  v2 = (void (__fastcall *)(int *, int))off_4899C4;
  v3 = ps_getpid_0((int)&dword_4878EC);
  v2(&dword_4899A0, v3);
  return sub_17FFD4((int)&dword_4899A0, a1);
}
