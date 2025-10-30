bool __fastcall sub_2ABA78(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  if ( !a6 )
    return 1;
  if ( sub_2A8A04(a1, a5 + *(_QWORD *)(a2 + 80), 0) )
    return 0;
  return sub_2A8884(a3, a6, a1) == a6;
}
