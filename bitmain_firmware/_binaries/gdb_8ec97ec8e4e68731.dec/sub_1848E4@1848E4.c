void __fastcall sub_1848E4(_DWORD *a1)
{
  int v1; // r5
  int v2; // r3
  int v3; // r3
  _DWORD *v4; // r4
  int v5; // [sp+0h] [bp-8h] BYREF
  int v6; // [sp+4h] [bp-4h]

  v1 = dword_487918;
  if ( dword_487918 )
  {
    if ( (_DWORD *)dword_487918 == a1 )
    {
      v3 = *(_DWORD *)(dword_487918 + 12);
      v6 = 1;
      v5 = v3;
      v4 = (_DWORD *)dword_487918;
      sub_23E4A0(sub_183034, &v5);
      dword_487918 = *(_DWORD *)(v1 + 4);
LABEL_9:
      sub_1BA2A8(v4);
      if ( sub_1CD34C(v4[9]) )
        sub_1CD490(v4[9]);
      sub_184834((int)v4);
      sub_33AC04(v4);
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_DWORD **)(v1 + 4);
        if ( !v4 )
          break;
        if ( a1 == v4 )
        {
          v2 = v4[3];
          v6 = 1;
          v5 = v2;
          sub_23E4A0(sub_183034, &v5);
          *(_DWORD *)(v1 + 4) = v4[1];
          goto LABEL_9;
        }
        v1 = *(_DWORD *)(v1 + 4);
      }
    }
  }
}
