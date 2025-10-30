_DWORD *__fastcall sub_187D1C(_DWORD *a1, int a2)
{
  int v4; // r1
  int v5; // r2

  if ( sub_232950(a1) )
  {
    v4 = HIDWORD(qword_4878EC);
    v5 = dword_4878F4;
    *a1 = qword_4878EC;
    a1[1] = v4;
    a1[2] = v5;
  }
  else
  {
    sub_187C40(a1, a2);
  }
  return a1;
}
