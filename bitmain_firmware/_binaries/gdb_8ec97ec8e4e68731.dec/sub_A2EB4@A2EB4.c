int __fastcall sub_A2EB4(int a1, int a2)
{
  int v4; // r0

  while ( sub_A2514(a1) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24);
    a1 = *(_DWORD *)(v4 + 12);
    a2 += *(_QWORD *)v4 / 8LL;
  }
  return a2;
}
