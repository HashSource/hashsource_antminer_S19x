int __fastcall sub_2ABD34(int a1, __int64 a2, int a3)
{
  int v4; // r12

  v4 = *(_DWORD *)(a1 + 8);
  if ( a3 == 1 )
  {
    *(_QWORD *)(v4 + 16) += a2;
    return 0;
  }
  else if ( a3 == 2 )
  {
    return -1;
  }
  else
  {
    if ( !a3 )
      *(_QWORD *)(v4 + 16) = a2;
    return 0;
  }
}
