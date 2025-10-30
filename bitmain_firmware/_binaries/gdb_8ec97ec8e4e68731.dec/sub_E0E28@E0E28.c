int __fastcall sub_E0E28(int a1, int *a2, int a3)
{
  int result; // r0
  int v7; // r3
  unsigned int v8; // r4
  int i; // r2
  int v10; // r3
  _DWORD *v11; // r0

  if ( dword_487D4C )
  {
    v11 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v11, "[btrace] [ftrace] fixup level (%+d)\n", a3);
  }
  result = sub_E0D88(a2, "..bfun");
  if ( a2 )
  {
    v7 = a2[10];
    a2[11] += a3;
    if ( v7 != -1 )
    {
      result = *(_DWORD *)(a1 + 24);
      v8 = -991146299 * ((*(_DWORD *)(a1 + 28) - result) >> 2);
      if ( v7 + 1 <= v8 )
      {
        for ( i = result + 52 * v7; i; i = result + 52 * v10 )
        {
          v10 = *(_DWORD *)(i + 40);
          *(_DWORD *)(i + 44) += a3;
          if ( v10 == -1 )
            break;
          if ( v10 + 1 > v8 )
            break;
        }
      }
    }
  }
  return result;
}
