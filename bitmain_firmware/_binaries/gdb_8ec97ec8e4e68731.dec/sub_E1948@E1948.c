int __fastcall sub_E1948(int *a1, unsigned int a2)
{
  int v3; // r4
  int v4; // r12
  __int64 v5; // r2
  unsigned int v6; // r7
  unsigned int v7; // lr
  int result; // r0
  int v9; // r2
  _DWORD *v10; // r8

  v3 = *a1;
  v5 = *(_QWORD *)(a1 + 1);
  v4 = *(_DWORD *)(*a1 + 24);
  LODWORD(v5) = *(_DWORD *)(v4 + 52 * v5 + 40);
  v6 = v5 - 1;
  if ( !a2 )
  {
    result = 0;
    goto LABEL_7;
  }
  if ( !HIDWORD(v5) )
  {
    result = 0;
    goto LABEL_9;
  }
  v7 = v5 - 1;
  result = 0;
LABEL_5:
  if ( HIDWORD(v5) <= a2 )
  {
    a2 -= HIDWORD(v5);
    result += HIDWORD(v5);
    v6 = v7;
    if ( !a2 )
    {
LABEL_16:
      HIDWORD(v5) = 0;
      goto LABEL_7;
    }
LABEL_9:
    v9 = v5 - 2;
    if ( v6 )
    {
      while ( -991146299 * ((*(_DWORD *)(v3 + 28) - v4) >> 2) >= v6 )
      {
        v10 = (_DWORD *)(v4 + 52 * v9);
        if ( !v10 )
          break;
        LODWORD(v5) = v10[10];
        HIDWORD(v5) = (v10[6] - v10[5]) >> 4;
        if ( HIDWORD(v5) )
        {
          v7 = v5 - 1;
          goto LABEL_5;
        }
        --a2;
        ++result;
        v6 = v5 - 1;
        if ( !a2 )
          goto LABEL_7;
        v9 = v5 - 2;
        if ( !v6 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  HIDWORD(v5) -= a2;
  result += a2;
  v6 = v7;
LABEL_7:
  a1[1] = v6;
  a1[2] = HIDWORD(v5);
  return result;
}
