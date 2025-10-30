void __fastcall sub_CC600(int a1, unsigned int a2)
{
  int v3; // r7
  unsigned int v4; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r4
  unsigned int v7; // r2
  bool v8; // cc
  void *v9; // r10
  _DWORD *v10; // t1

  v3 = *(_DWORD *)(a1 + 4);
  if ( off_46C048 == "auto" )
  {
    if ( !off_489B60(&dword_4899A0) )
      return;
  }
  else if ( off_46C048 == "host" )
  {
    return;
  }
  if ( off_489B60(&dword_4899A0) )
  {
    v4 = sub_CC504(a2);
    if ( v4 )
    {
      if ( v4 < dword_478368 + 4 * dword_47836C )
      {
        v5 = *(_DWORD **)v4;
        if ( a2 == *(_DWORD *)(*(_DWORD *)v4 + 52) )
        {
          v6 = (_DWORD *)(v4 + 4);
          do
          {
            v7 = *(_DWORD *)(v5[4] + 12);
            v8 = v7 > 0x1E;
            if ( v7 != 30 )
              v8 = v7 - 1 > 1;
            if ( !v8 && v3 == *(_DWORD *)(v5[12] + 4) )
            {
              v9 = (void *)v5[6];
              *((_QWORD *)v5 + 3) = 0x200000000LL;
              if ( v9 )
              {
                sub_C0960((int)v9);
                sub_33AC04(v9);
              }
            }
            if ( (unsigned int)v6 >= dword_478368 + 4 * dword_47836C )
              break;
            v10 = (_DWORD *)*v6++;
            v5 = v10;
          }
          while ( v10[13] == a2 );
        }
      }
    }
  }
}
