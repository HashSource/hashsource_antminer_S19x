int __fastcall sub_30A5B4(int result, int a2, int a3)
{
  int v3; // r12
  int v4; // r4
  int v5; // r5
  int v6; // r8
  int v7; // lr
  int v8; // r4
  _WORD *v9; // r7
  int v10; // r3
  int v11; // r2
  bool v12; // cc
  __int16 v13; // r3

  v3 = *(unsigned __int16 *)(a2 + 2);
  v4 = 4 * (a3 + 1);
  v5 = -1;
  if ( *(_WORD *)(a2 + 2) )
    v6 = 4;
  else
    v6 = 3;
  if ( *(_WORD *)(a2 + 2) )
    v7 = 7;
  else
    v7 = 138;
  *(_WORD *)(a2 + v4 + 2) = -1;
  if ( a3 >= 0 )
  {
    v8 = a2 + v4;
    v9 = (_WORD *)(result + 2756);
    v10 = 0;
    while ( 1 )
    {
      ++v10;
      v11 = *(unsigned __int16 *)(a2 + 6);
      if ( v10 >= v7 )
        goto LABEL_10;
      if ( v11 != v3 )
        break;
LABEL_18:
      a2 += 4;
      v3 = v11;
      if ( v8 == a2 )
        return result;
    }
    if ( v10 >= v6 )
    {
LABEL_10:
      if ( v3 )
      {
        if ( v3 != v5 )
          ++*(_WORD *)(result + 4 * v3 + 2684);
        ++*(_WORD *)(result + 2748);
      }
      else
      {
        v12 = v10 <= 10;
        if ( v10 > 10 )
          LOWORD(v10) = *v9;
        else
          v7 = result + 2752;
        if ( v12 )
          v13 = *(_WORD *)v7;
        else
          v13 = v10 + 1;
        if ( v12 )
          ++v13;
        else
          *v9 = v13;
        if ( v12 )
          *(_WORD *)v7 = v13;
      }
      if ( v11 )
      {
LABEL_15:
        if ( v11 == v3 )
        {
          v5 = v11;
          v6 = 3;
          v7 = 6;
        }
        else
        {
          v5 = v3;
          v6 = 4;
          v7 = 7;
        }
        v10 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      *(_WORD *)(result + 4 * v3 + 2684) += v10;
      if ( v11 )
        goto LABEL_15;
    }
    v5 = v3;
    v10 = v11;
    v6 = 3;
    v7 = 138;
    goto LABEL_18;
  }
  return result;
}
