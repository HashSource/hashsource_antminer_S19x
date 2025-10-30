int __fastcall sub_D1C8C(int a1, int a2)
{
  int v2; // r2
  int v5; // r2

  v2 = *(_DWORD *)(a1 + 112);
  if ( v2 != -1 )
    sub_2594B0(a2, " thread %d", v2);
  v5 = *(_DWORD *)(a1 + 116);
  if ( v5 )
    sub_2594B0(a2, " task %d", v5);
  return sub_2594B0(a2, (const char *)&word_356638);
}
