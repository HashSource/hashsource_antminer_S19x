int __fastcall sub_66F80(_DWORD *a1, unsigned int a2, int a3)
{
  void *v8; // [sp+18h] [bp-Ch]

  if ( !a3 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a3 && a1[3] >= a2 )
  {
    v8 = sub_66D94(a1, 1, 0);
    if ( v8 )
    {
      if ( (void *)a1[4] == v8 )
      {
        sub_66CE4((int)a1, a2 + 1, a2, a1[3] - a2);
      }
      else
      {
        sub_66D40(a1[4], 0, (int)v8, 0, a2);
        sub_66D40(a1[4], a2 + 1, (int)v8, a2, a1[3] - a2);
        sub_64DEC(v8);
      }
      *(_DWORD *)(a1[4] + 4 * a2) = a3;
      ++a1[3];
      return 0;
    }
    else
    {
      sub_65DB8(a3);
      return -1;
    }
  }
  else
  {
    sub_65DB8(a3);
    return -1;
  }
}
