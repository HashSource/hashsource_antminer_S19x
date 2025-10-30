int __fastcall sub_167D78(int a1, int a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r0
  __int64 v6; // r4

  if ( !a2 )
  {
    v4 = *(_DWORD *)(a1 + 44);
    a2 = 16;
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 44) = 16;
      return 1;
    }
    goto LABEL_5;
  }
  if ( ((a2 - 8) & 0xFFFFFFF7) != 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 44);
  if ( v4 )
  {
LABEL_5:
    v5 = v4;
    goto LABEL_6;
  }
  v5 = 16;
  v4 = 16;
LABEL_6:
  *(_DWORD *)(a1 + 44) = v5;
  result = 1;
  if ( v4 != a2 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 44) = a2;
    LODWORD(v6) = v6 ^ 0xEE;
    *(_QWORD *)(a1 + 16) = v6;
  }
  return result;
}
