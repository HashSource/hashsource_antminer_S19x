int __fastcall sub_66290(_DWORD *a1, unsigned int a2, int a3)
{
  void *v8; // [sp+18h] [bp-Ch]

  if ( !a3 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a3 && a2 <= a1[3] )
  {
    v8 = sub_660A4(a1, 1, 0);
    if ( v8 )
    {
      if ( v8 == (void *)a1[4] )
      {
        sub_65FEC((int)a1, a2 + 1, a2, a1[3] - a2);
      }
      else
      {
        sub_6604C(a1[4], 0, (int)v8, 0, a2);
        sub_6604C(a1[4], a2 + 1, (int)v8, a2, a1[3] - a2);
        sub_640B8(v8);
      }
      *(_DWORD *)(a1[4] + 4 * a2) = a3;
      ++a1[3];
      return 0;
    }
    else
    {
      sub_650B0(a3);
      return -1;
    }
  }
  else
  {
    sub_650B0(a3);
    return -1;
  }
}
