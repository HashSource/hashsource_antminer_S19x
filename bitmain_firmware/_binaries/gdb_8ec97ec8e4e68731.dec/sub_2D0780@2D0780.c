__int64 __fastcall sub_2D0780(int a1, __int64 a2, int a3)
{
  __int64 v4; // r4
  unsigned int v5; // r1
  int v6; // r1

  v4 = a2;
  if ( a3 )
  {
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 > 1 )
    {
      if ( __CFADD__((_DWORD)a2, v5 - 1) )
        v4 = 0xFFFFFFFFLL;
      else
        v4 = -v5 & ((_DWORD)a2 + v5 - 1);
    }
  }
  v6 = *(_DWORD *)(a1 + 44);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v6 )
    *(_QWORD *)(v6 + 80) = v4;
  if ( *(_DWORD *)(a1 + 4) == 8 )
    return v4;
  else
    return v4 + *(unsigned int *)(a1 + 24);
}
