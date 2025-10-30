_DWORD *__fastcall sub_2AB058(int a1, int a2)
{
  int v2; // r0
  _DWORD *v3; // r4
  void *v5; // r0

  v2 = sub_2AB368(44, a2);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    if ( sub_2AA92C(v2, (int)sub_2AAF3C, 20, dword_4707F0) )
    {
      v3[7] = 0;
      v3[8] = 0;
      v3[9] = 0;
      v3[10] = 0;
    }
    else
    {
      v5 = v3;
      v3 = 0;
      free(v5);
    }
  }
  return v3;
}
