int __fastcall sub_14528(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v9; // r8
  __int16 v10; // r10
  bool v11; // zf
  int v13; // r11
  int v14; // r10
  __int16 v15; // r8
  _BYTE v16[8]; // [sp+8h] [bp-14h] BYREF
  _BYTE v17[12]; // [sp+10h] [bp-Ch] BYREF

  sub_4A60C(v16);
  if ( a4 )
  {
    v13 = 2;
    v14 = 0;
    while ( 1 )
    {
      sub_144E8(a2, a1);
      sub_1ADD4(152, a3, (unsigned __int8)*a5, 1, a2, a1);
      sub_144E8(a2, a1);
      sub_4A804(1);
      sub_144E8(a2, a1);
      sub_1ADD4(152, a3, 0, 0, a2, a1);
      v15 = sub_144E8(a2, a1);
      sub_4A804(1);
      if ( HIBYTE(v15) == a3 || (unsigned __int8)v15 == (unsigned __int8)*a5 )
        break;
      v11 = v13 == 1;
      v14 = 1;
      v13 = 1;
      if ( v11 )
      {
LABEL_6:
        sub_4A60C(v17);
        return 0;
      }
    }
    sub_4A60C(v17);
    if ( !v14 )
      return a4;
  }
  else
  {
    v9 = 2;
    while ( 1 )
    {
      sub_144E8(a2, a1);
      sub_1ADD4(152, a3, 0, 0, a2, a1);
      sub_4A804(1);
      v10 = sub_144E8(a2, a1);
      sub_4A804(1);
      if ( HIBYTE(v10) == a3 )
        break;
      v11 = v9 == 1;
      a4 = 1;
      v9 = 1;
      if ( v11 )
        goto LABEL_6;
    }
    sub_4A60C(v17);
    if ( !a4 && (_BYTE)v10 )
    {
      *a5 = v10;
      return 1;
    }
  }
  return 0;
}
