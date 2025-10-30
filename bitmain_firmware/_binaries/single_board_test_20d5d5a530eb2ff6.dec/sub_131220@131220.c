int __fastcall sub_131220(int **a1, _DWORD *a2, int *a3, _DWORD *a4, int ***a5)
{
  int v9; // r5
  int v10; // r4

  if ( sub_B85B0((int)a4) )
  {
    sub_D0048(3, 107, 103, (int)"crypto/bn/bn_div.c", 215);
    return 0;
  }
  else
  {
    v9 = 0;
    if ( *(_DWORD *)(*a4 + 4 * (a4[1] + 0x3FFFFFFF)) )
    {
      v10 = sub_130DD8(a1, (int)a2, a3, (int)a4, a5);
      if ( v10 )
      {
        if ( a1 )
          sub_B8ACC(a1);
        v9 = v10;
        if ( a2 )
        {
          v9 = v10;
          sub_B8ACC(a2);
        }
      }
      return v9;
    }
    else
    {
      sub_D0048(3, 107, 107, (int)"crypto/bn/bn_div.c", 225);
      return 0;
    }
  }
}
