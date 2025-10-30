int __fastcall sub_187D70(int a1)
{
  _DWORD *v2; // r4
  int v4; // r0
  _DWORD v5[4]; // [sp+0h] [bp-28h] BYREF
  int v6[3]; // [sp+10h] [bp-18h] BYREF
  _DWORD v7[3]; // [sp+1Ch] [bp-Ch] BYREF

  if ( !dword_487950 )
  {
    if ( off_46D590[0] != "replay" )
      goto LABEL_3;
    if ( sub_2326F8(dword_46BBCC, dword_46BBD0, dword_46BBD4) )
    {
      sub_187C40(v7, a1);
      if ( !sub_23272C(v7[0], v7[1], v7[2], dword_48794C) )
        sub_232760();
    }
    if ( !dword_487950 )
    {
LABEL_3:
      sub_187C40(v5, a1);
      v2 = (_DWORD *)dword_48A4D4;
      v6[0] = v5[0];
      v6[1] = v5[1];
      v6[2] = v5[2];
      if ( dword_48A4D4 )
      {
        do
        {
          if ( v2[11] != 2 && sub_9904C(v2 + 2, v6) )
            sub_185004((int)v2);
          v2 = (_DWORD *)v2[1];
        }
        while ( v2 );
      }
    }
  }
  if ( !sub_98F78(&qword_4878EC, &qword_475848) )
  {
    if ( dword_487950 )
    {
      v4 = ((int (*)(void))loc_23DBE4)();
      sub_185004(v4);
    }
    *(_DWORD *)(sub_183688() + 24) = 0;
  }
  return sub_1B9B18();
}
