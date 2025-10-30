_DWORD *__fastcall sub_2FCD2C(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void *v5; // r0

  v2 = sub_2AB368(44);
  v3 = v2;
  if ( v2 && !sub_2FC89C(v2, a1, (int)sub_2FC848, 36) )
  {
    v5 = v3;
    v3 = 0;
    free(v5);
  }
  return v3;
}
